using System;
using UnityEngine;
using UnityEngine.SceneManagement;

// 5-shift trial contract: start, goal and end (GDD v3, Release block R8;
// tasks 1121-GP Arnab, 1121-LEAD Gabriel).
//   Briefing  card with the shift goal (shift 1 of a new game: intro text);
//             the game is paused until the player taps Start.
//   Running   5 real minutes; live progress; fails at once if the rating
//             reaches the fail value ("Customers left").
//   Summary   delivered, expired, cash earned, rating change, 1-3 stars;
//             Next shift (target met) or Retry shift.
//   Won       after shift 5: total stars; Free play or Save and exit.
// Created at runtime when Main_level loads (no scene change). Contract
// progress is kept in PlayerPrefs until save v2 (1124-SYS) stores it.
// Retry restores cash and rating of the shift start (placeholder until the
// save v2 shift snapshot); stock and orders stay as they are.
public class MGR_Shift : MonoBehaviour
{
    public enum Phase
    {
        Briefing,
        Running,
        Summary,
        Won,
        FreePlay
    }

    public enum EndReason
    {
        TargetReached,
        TimeUp,
        CustomersLeft,
        Debug
    }

    public class ShiftResult
    {
        public int ShiftIndex;
        public bool Success;
        public EndReason Reason;
        public int Delivered;
        public int Expired;
        public float CashEarned;
        public float RatingStart;
        public float RatingEnd;
        public int Stars;
        public bool IsLastShift;
    }

    private const string GameplayScene = "Main_level";
    private const string PrefShift = "DES_Contract_Shift";
    private const string PrefWon = "DES_Contract_Won";
    private const string PrefStars = "DES_Contract_Stars_";
    private const string PrefBest = "DES_Contract_BestStars";
    private const float EmergencyCheckInterval = 2f;

    public static MGR_Shift Instance { get; private set; }

    public static event Action<MGR_Shift> OnShiftBriefing;
    public static event Action<MGR_Shift> OnShiftStarted;
    public static event Action<MGR_Shift> OnShiftProgress;
    public static event Action<ShiftResult> OnShiftEnded;
    public static event Action<MGR_Shift> OnContractWon;
    public static event Action OnEmergencyBox;
    public static event Action<MGR_Shift> OnTargetReached;

    // The shift ends this many seconds after the target is met, so the
    // player sees "Goal reached!" first (Gabriel's playtest 21 Nov: a met
    // goal did nothing until the 5 minutes ran out).
    private const float TargetReachedDelay = 2f;

    public DATA_ShiftContractSO Contract { get; private set; }
    public Phase CurrentPhase { get; private set; }
    public int ShiftIndex { get; private set; }
    public int ShiftCount => Contract.shifts.Length;
    public ShiftTarget CurrentTarget => Contract.shifts[Mathf.Clamp(ShiftIndex, 0, ShiftCount - 1)];
    public float TimeLeft { get; private set; }
    public int Delivered { get; private set; }
    public int Expired { get; private set; }
    public float CashEarned { get; private set; }
    public bool IsNewGameIntro { get; private set; }
    public ShiftResult LastResult { get; private set; }

    private int startCashCents;
    private float startRating;
    private bool emergencyUsed;
    private float emergencyTimer;
    private float previousTimeScale = 1f;
    private float targetReachedTimer = -1f;

    // ---------------------------------------------------------
    // BOOTSTRAP
    // ---------------------------------------------------------

    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void InstallSceneHook()
    {
        SceneManager.sceneLoaded -= HandleSceneLoaded;
        SceneManager.sceneLoaded += HandleSceneLoaded;
        HandleSceneLoaded(SceneManager.GetActiveScene(), LoadSceneMode.Single);
    }

    private static void HandleSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name != GameplayScene || Instance != null)
            return;

        GameObject go = new GameObject("MGR_Shift");
        SceneManager.MoveGameObjectToScene(go, scene);
        go.AddComponent<MGR_Shift>();
        go.AddComponent<UI_ShiftPlaceholder>();
        go.AddComponent<UI_LevelUpBanner>();
    }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;

        Contract = Resources.Load<DATA_ShiftContractSO>("ShiftContract");

        if (Contract == null || Contract.shifts == null || Contract.shifts.Length == 0)
            Contract = ScriptableObject.CreateInstance<DATA_ShiftContractSO>();
    }

    private void Start()
    {
        bool newGame = MGR_Save.Instance == null || !MGR_Save.Instance.HasLoadedSave;

        if (newGame)
            ResetContractProgress();

        if (PlayerPrefs.GetInt(PrefWon, 0) == 1)
        {
            CurrentPhase = Phase.FreePlay;
            OnShiftProgress?.Invoke(this);
            return;
        }

        ShiftIndex = Mathf.Clamp(PlayerPrefs.GetInt(PrefShift, 0), 0, ShiftCount - 1);
        IsNewGameIntro = newGame && ShiftIndex == 0;

        EnterBriefing();
    }

    private void OnEnable()
    {
        MGR_Order.OnOrderFulfilled += HandleOrderFulfilled;
        MGR_Order.OnOrderExpired += HandleOrderExpired;
    }

    private void OnDisable()
    {
        MGR_Order.OnOrderFulfilled -= HandleOrderFulfilled;
        MGR_Order.OnOrderExpired -= HandleOrderExpired;
    }

    private void OnDestroy()
    {
        if (Instance == this)
        {
            Instance = null;

            if (CurrentPhase == Phase.Briefing ||
                CurrentPhase == Phase.Summary ||
                CurrentPhase == Phase.Won)
            {
                Time.timeScale = 1f;
            }
        }
    }

    // ---------------------------------------------------------
    // PHASES
    // ---------------------------------------------------------

    private void EnterBriefing()
    {
        CurrentPhase = Phase.Briefing;
        PauseGame();
        OnShiftBriefing?.Invoke(this);
    }

    // Called by the Start button of the briefing card.
    public void StartShift()
    {
        if (CurrentPhase != Phase.Briefing)
            return;

        Delivered = 0;
        Expired = 0;
        CashEarned = 0f;
        emergencyUsed = false;
        emergencyTimer = EmergencyCheckInterval;
        targetReachedTimer = -1f;
        TimeLeft = Contract.shiftSeconds;

        if (MGR_Game.Instance != null)
        {
            startCashCents = MGR_Game.Instance.CurrentCash;
            startRating = MGR_Game.Instance.CurrentRating;
        }

        PlayerPrefs.SetInt(PrefShift, ShiftIndex);
        PlayerPrefs.Save();

        // GDD R8: the game saves at the start of each shift.
        if (MGR_Save.Instance != null)
            MGR_Save.Instance.SaveGame();

        IsNewGameIntro = false;
        CurrentPhase = Phase.Running;
        ResumeGame();

        OnShiftStarted?.Invoke(this);
        OnShiftProgress?.Invoke(this);
    }

    private void Update()
    {
        if (CurrentPhase != Phase.Running)
            return;

        TimeLeft -= Time.deltaTime;

        if (MGR_Game.Instance != null &&
            MGR_Game.Instance.CurrentRating <= Contract.failRating + 0.001f)
        {
            EndShift(EndReason.CustomersLeft);
            return;
        }

        float rating = MGR_Game.Instance != null ? MGR_Game.Instance.CurrentRating : 5f;

        if (targetReachedTimer < 0f && IsTargetMet(rating))
        {
            targetReachedTimer = TargetReachedDelay;
            OnTargetReached?.Invoke(this);
        }

        if (targetReachedTimer >= 0f)
        {
            targetReachedTimer -= Time.deltaTime;

            if (targetReachedTimer <= 0f)
            {
                EndShift(EndReason.TargetReached);
                return;
            }
        }

        if (TimeLeft <= 0f)
        {
            TimeLeft = 0f;
            EndShift(EndReason.TimeUp);
            return;
        }

        UpdateEmergencyBox();
        OnShiftProgress?.Invoke(this);
    }

    private void EndShift(EndReason reason)
    {
        float ratingEnd = MGR_Game.Instance != null
            ? MGR_Game.Instance.CurrentRating
            : startRating;

        bool success = reason != EndReason.CustomersLeft && IsTargetMet(ratingEnd);

        if (reason == EndReason.Debug)
            success = forcedDebugSuccess;

        int stars = 0;

        if (success)
        {
            stars = 1;

            if (Expired <= Contract.twoStarMaxExpired)
            {
                stars = 2;

                if (ratingEnd >= Contract.threeStarMinRating)
                    stars = 3;
            }

            string key = PrefStars + ShiftIndex;
            PlayerPrefs.SetInt(key, Mathf.Max(PlayerPrefs.GetInt(key, 0), stars));
            PlayerPrefs.Save();
        }

        LastResult = new ShiftResult
        {
            ShiftIndex = ShiftIndex,
            Success = success,
            Reason = reason,
            Delivered = Delivered,
            Expired = Expired,
            CashEarned = CashEarned,
            RatingStart = startRating,
            RatingEnd = ratingEnd,
            Stars = stars,
            IsLastShift = ShiftIndex >= ShiftCount - 1
        };

        CurrentPhase = Phase.Summary;
        PauseGame();

        OnShiftEnded?.Invoke(LastResult);
    }

    // Called by the summary buttons.
    public void NextShift()
    {
        if (CurrentPhase != Phase.Summary || LastResult == null || !LastResult.Success)
            return;

        if (LastResult.IsLastShift)
        {
            WinContract();
            return;
        }

        ShiftIndex++;
        PlayerPrefs.SetInt(PrefShift, ShiftIndex);
        PlayerPrefs.Save();

        EnterBriefing();
    }

    public void RetryShift()
    {
        if (CurrentPhase != Phase.Summary)
            return;

        // Placeholder retry: cash and rating go back to the shift start.
        MGR_Game game = MGR_Game.Instance;

        if (game != null)
        {
            game.LoadGameState(
                startCashCents,
                game.CurrentXP,
                game.CurrentLevel,
                startRating,
                game.CurrentDay
            );
        }

        EnterBriefing();
    }

    private void WinContract()
    {
        int total = TotalStars();

        PlayerPrefs.SetInt(PrefWon, 1);
        PlayerPrefs.SetInt(PrefBest, Mathf.Max(PlayerPrefs.GetInt(PrefBest, 0), total));
        PlayerPrefs.Save();

        CurrentPhase = Phase.Won;
        PauseGame();

        OnContractWon?.Invoke(this);
    }

    // Called by the contract won screen.
    public void StartFreePlay()
    {
        if (CurrentPhase != Phase.Won)
            return;

        CurrentPhase = Phase.FreePlay;
        ResumeGame();
        OnShiftProgress?.Invoke(this);
    }

    public void SaveAndExit()
    {
        Time.timeScale = 1f;

        if (MGR_Save.Instance != null)
            MGR_Save.Instance.SaveGame();

#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }

    // ---------------------------------------------------------
    // PROGRESS
    // ---------------------------------------------------------

    private void HandleOrderFulfilled(OrderData order)
    {
        if (CurrentPhase != Phase.Running || order == null)
            return;

        Delivered++;
        CashEarned += order.CashReward;
    }

    private void HandleOrderExpired(OrderData order)
    {
        if (CurrentPhase != Phase.Running)
            return;

        Expired++;
    }

    public int GoalProgress =>
        CurrentTarget.goal == ShiftGoalType.EarnCash
            ? Mathf.FloorToInt(CashEarned)
            : Delivered;

    public bool IsTargetMet(float rating)
    {
        ShiftTarget target = CurrentTarget;

        if (GoalProgress < target.amount)
            return false;

        if (target.maxExpired >= 0 && Expired > target.maxExpired)
            return false;

        if (target.minRating > 0f && rating < target.minRating)
            return false;

        return true;
    }

    public int GetStars(int shiftIndex)
    {
        return PlayerPrefs.GetInt(PrefStars + shiftIndex, 0);
    }

    public int TotalStars()
    {
        int total = 0;

        for (int i = 0; i < ShiftCount; i++)
            total += GetStars(i);

        return total;
    }

    // ---------------------------------------------------------
    // NO STUCK RUN
    // ---------------------------------------------------------

    // Cash below the cheapest product, empty shelves and no box on the
    // truck, at the dock or in hand: send one free box (once per shift).
    private void UpdateEmergencyBox()
    {
        if (emergencyUsed)
            return;

        emergencyTimer -= Time.deltaTime;

        if (emergencyTimer > 0f)
            return;

        emergencyTimer = EmergencyCheckInterval;

        MGR_Game game = MGR_Game.Instance;
        MGR_Inventory inventory = MGR_Inventory.Instance;
        CTRL_TruckDelivery truck = CTRL_TruckDelivery.Instance;

        if (game == null || inventory == null || truck == null || truck.IsDockBusy)
            return;

        if (UI_GuideMarker.FindHeldBox() != null || UI_GuideMarker.FindLooseBox() != null)
            return;

        DATA_ProductSO[] products = Resources.FindObjectsOfTypeAll<DATA_ProductSO>();
        DATA_ProductSO cheapest = null;
        int totalStock = 0;

        foreach (DATA_ProductSO product in products)
        {
            if (product == null)
                continue;

            totalStock += inventory.GetStock(product);

            if (cheapest == null || product.BaseCost < cheapest.BaseCost)
                cheapest = product;
        }

        if (cheapest == null || totalStock > 0)
            return;

        if (game.CurrentCash >= Mathf.RoundToInt(cheapest.BaseCost * 100f))
            return;

        if (truck.DeliverFreeBoxes(cheapest, Contract.emergencyBoxUnits))
        {
            emergencyUsed = true;
            OnEmergencyBox?.Invoke();
        }
    }

    // ---------------------------------------------------------
    // TIME
    // ---------------------------------------------------------

    private void PauseGame()
    {
        if (Time.timeScale > 0f)
            previousTimeScale = Time.timeScale;

        Time.timeScale = 0f;
    }

    private void ResumeGame()
    {
        Time.timeScale = previousTimeScale > 0f ? previousTimeScale : 1f;
    }

    private static void ResetContractProgress()
    {
        PlayerPrefs.DeleteKey(PrefShift);
        PlayerPrefs.DeleteKey(PrefWon);

        for (int i = 0; i < 10; i++)
            PlayerPrefs.DeleteKey(PrefStars + i);

        PlayerPrefs.Save();
    }

    // ---------------------------------------------------------
    // DEBUG (1121-LEAD): also in Tools/DES/Shift while playing
    // ---------------------------------------------------------

    private bool forcedDebugSuccess;

    [ContextMenu("Debug/End shift now (win)")]
    public void DebugEndShiftWin()
    {
        if (CurrentPhase != Phase.Running)
            return;

        forcedDebugSuccess = true;
        EndShift(EndReason.Debug);
    }

    [ContextMenu("Debug/End shift now (fail)")]
    public void DebugEndShiftFail()
    {
        if (CurrentPhase != Phase.Running)
            return;

        forcedDebugSuccess = false;
        EndShift(EndReason.Debug);
    }

    [ContextMenu("Debug/Add one delivered order")]
    public void DebugAddDelivered()
    {
        if (CurrentPhase != Phase.Running)
            return;

        Delivered++;
        CashEarned += 10f;
    }

    [ContextMenu("Debug/Leave 10 seconds")]
    public void DebugLeaveTenSeconds()
    {
        if (CurrentPhase == Phase.Running)
            TimeLeft = Mathf.Min(TimeLeft, 10f);
    }
}
