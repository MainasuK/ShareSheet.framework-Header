/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UIActivityViewController : UIViewController <LPLinkViewDelegate, ObjectManipulationDelegate, SFAirDropViewControllerDelegate, SFShareSheetSlotManagerDelegate, UIActivityContentDelegate, UICollectionViewDelegate, UIViewControllerRestoration, UIViewControllerTransitioningDelegate, _UIActivityHelperDelegate, _UIActivityUserDefaultsViewControllerDelegate> {
    id /* block */  __popoverDismissalAction;
    NSMutableDictionary * _activitiesByUUID;
    UIActivity * _activity;
    UIAlertAction * _activityAlertCancelAction;
    UIAlertController * _activityAlertController;
    _UIActivityHelper * _activityHelper;
    NSOperationQueue * _activityItemProviderOperationQueue;
    NSArray * _activityItemProviderOperations;
    NSArray * _activityItems;
    id /* block */  _activityPresentationCompletionHandler;
    NSArray * _activityTypeOrder;
    NSArray * _activityTypesToCreateInShareService;
    UIViewController * _activityViewController;
    UISUIActivityViewControllerConfiguration * _activityViewControllerConfiguration;
    <UIActivityViewControllerAirDropDelegate> * _airDropDelegate;
    bool  _airDropOnly;
    SFAirDropViewController * _airDropViewController;
    bool  _allowsCustomPresentationStyle;
    bool  _allowsEmbedding;
    NSArray * _applicationActivities;
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _beginPerformingActivityTimestamp;
    NSLayoutConstraint * _blurViewHeightConstraint;
    UIViewController * _carouselViewController;
    unsigned long long  _clientAttemptedInitialPresentationOrEmbeddingTimestamp;
    long long  _completedProviderCount;
    id /* block */  _completionHandler;
    id /* block */  _completionWithItemsHandler;
    bool  _configureForCloudSharing;
    bool  _configureForPhotosEdit;
    bool  _connectedToDaemon;
    UINavigationController * _contentNavigationController;
    UIActivityContentViewController * _contentViewController;
    ObjectManipulationViewController * _customizationViewController;
    _UICollectionViewDiffableDataSource * _dataSource;
    bool  _dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
    bool  _enableNewDesignInPhotos;
    long long  _excludedActivityCategories;
    NSArray * _excludedActivityTypes;
    bool  _hasPerformedInitialPresentation;
    NSMutableDictionary * _identifierToProgress;
    NSMutableDictionary * _identifierToPulse;
    NSMutableDictionary * _identifierToSubtitle;
    NSArray * _includedActivityTypes;
    NSDictionary * _initialPhotosAssetDetails;
    NSString * _initialSocialText;
    bool  _isContentManaged;
    bool  _isPerformingPresentation;
    UIViewController * _linkViewController;
    <UIActivityViewControllerObjectManipulationDelegate> * _objectManipulationDelegate;
    bool  _performActivityForStateRestoration;
    NSSet * _photosAssetIdentifiers;
    UIViewController * _photosCarouselViewController;
    <UIActivityViewControllerPhotosDelegate> * _photosDelegate;
    LPLinkMetadata * _photosHeaderMetadata;
    UIViewController * _photosStackViewController;
    id /* block */  _preCompletionHandler;
    unsigned long long  _readyToInteractTimestamp;
    bool  _receivedInitialConfiguration;
    NSArray * _resolvedActivityItemsForCurrentActivity;
    UINavigationController * _secondaryContentNavigationController;
    UIActivityContentViewController * _secondaryContentViewController;
    NSArray * _selectedAssetIdentifiers;
    NSString * _sessionID;
    UIView * _shadowView;
    id /* block */  _shareSheetReadyToInteractHandler;
    long long  _sharingStyle;
    bool  _shouldMatchOnlyUserElectedExtensions;
    bool  _shouldSkipPeopleSuggestions;
    bool  _showKeyboardAutomatically;
    SFShareSheetSlotManager * _slotManager;
    bool  _startedConnectingToDaemon;
    NSString * _subject;
    long long  _totalProviderCount;
    NSUserDefaults * _userDefaults;
    NSString * _userDefaultsIdentifier;
    UINavigationController * _userDefaultsNavigationController;
    unsigned long long  _viewWillAppearTimestamp;
    bool  _waitingForInitialLayoutPass;
    bool  _whitelistActionActivitiesOnly;
    bool  _willDismissActivityViewController;
}

@property (nonatomic, copy) id /* block */ _popoverDismissalAction;
@property (nonatomic, retain) NSMutableDictionary *activitiesByUUID;
@property (nonatomic, retain) UIActivity *activity;
@property (nonatomic, retain) UIAlertAction *activityAlertCancelAction;
@property (nonatomic, retain) UIAlertController *activityAlertController;
@property (nonatomic, retain) _UIActivityHelper *activityHelper;
@property (nonatomic, retain) NSOperationQueue *activityItemProviderOperationQueue;
@property (nonatomic, retain) NSArray *activityItemProviderOperations;
@property (nonatomic, copy) NSArray *activityItems;
@property (getter=_activityPresentationCompletionHandler, setter=_setActivityPresentationCompletionHandler:, nonatomic, copy) id /* block */ activityPresentationCompletionHandler;
@property (nonatomic, copy) NSArray *activityTypeOrder;
@property (nonatomic, retain) NSArray *activityTypesToCreateInShareService;
@property (nonatomic, retain) UIViewController *activityViewController;
@property (nonatomic, retain) UISUIActivityViewControllerConfiguration *activityViewControllerConfiguration;
@property (nonatomic) <UIActivityViewControllerAirDropDelegate> *airDropDelegate;
@property (nonatomic) bool airDropOnly;
@property (nonatomic, retain) SFAirDropViewController *airDropViewController;
@property (nonatomic) bool allowsCustomPresentationStyle;
@property (nonatomic) bool allowsEmbedding;
@property (nonatomic, copy) NSArray *applicationActivities;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (getter=_beginPerformingActivityTimestamp, setter=_setBeginPerformingActivityTimestamp:, nonatomic) unsigned long long beginPerformingActivityTimestamp;
@property (nonatomic, retain) NSLayoutConstraint *blurViewHeightConstraint;
@property (nonatomic, retain) UIViewController *carouselViewController;
@property (getter=_clientAttemptedInitialPresentationOrEmbeddingTimestamp, setter=_setClientAttemptedInitialPresentationOrEmbeddingTimestamp:, nonatomic) unsigned long long clientAttemptedInitialPresentationOrEmbeddingTimestamp;
@property (nonatomic) long long completedProviderCount;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ completionWithItemsHandler;
@property (nonatomic) bool configureForCloudSharing;
@property (nonatomic) bool configureForPhotosEdit;
@property (nonatomic) bool connectedToDaemon;
@property (nonatomic, retain) UINavigationController *contentNavigationController;
@property (nonatomic, retain) UIActivityContentViewController *contentViewController;
@property (nonatomic, retain) ObjectManipulationViewController *customizationViewController;
@property (nonatomic, retain) _UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionHandler;
@property (nonatomic) bool dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
@property (nonatomic) bool enableNewDesignInPhotos;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (getter=_hasPerformedInitialPresentation, setter=_setHasPerformedInitialPresentation:, nonatomic) bool hasPerformedInitialPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *identifierToProgress;
@property (nonatomic, retain) NSMutableDictionary *identifierToPulse;
@property (nonatomic, retain) NSMutableDictionary *identifierToSubtitle;
@property (nonatomic, copy) NSArray *includedActivityTypes;
@property (getter=_initialPhotosAssetDetails, setter=_setInitialPhotosAssetDetails:, nonatomic, copy) NSDictionary *initialPhotosAssetDetails;
@property (nonatomic, copy) NSString *initialSocialText;
@property (nonatomic) bool isContentManaged;
@property (getter=_isPerformingPresentation, setter=_setIsPerformingPresentation:, nonatomic) bool isPerformingPresentation;
@property (nonatomic, retain) UIViewController *linkViewController;
@property (nonatomic) <UIActivityViewControllerObjectManipulationDelegate> *objectManipulationDelegate;
@property (nonatomic) bool performActivityForStateRestoration;
@property (getter=_photosAssetIdentifiers, setter=_setPhotosAssetIdentifiers:, nonatomic, copy) NSSet *photosAssetIdentifiers;
@property (nonatomic, retain) UIViewController *photosCarouselViewController;
@property (nonatomic) <UIActivityViewControllerPhotosDelegate> *photosDelegate;
@property (nonatomic, retain) LPLinkMetadata *photosHeaderMetadata;
@property (nonatomic, retain) UIViewController *photosStackViewController;
@property (nonatomic, copy) id /* block */ preCompletionHandler;
@property (getter=_readyToInteractTimestamp, setter=_setReadyToInteractTimestamp:, nonatomic) unsigned long long readyToInteractTimestamp;
@property (nonatomic) bool receivedInitialConfiguration;
@property (nonatomic, readonly) NSArray *resolvedActivityItemsForCurrentActivity;
@property (nonatomic, retain) UINavigationController *secondaryContentNavigationController;
@property (nonatomic, retain) UIActivityContentViewController *secondaryContentViewController;
@property (getter=_selectedAssetIdentifiers, setter=_setSelectedAssetIdentifiers:, nonatomic, copy) NSArray *selectedAssetIdentifiers;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) UIView *shadowView;
@property (getter=_shareSheetReadyToInteractHandler, setter=_setShareSheetReadyToInteractHandler:, nonatomic, copy) id /* block */ shareSheetReadyToInteractHandler;
@property (nonatomic) long long sharingStyle;
@property (nonatomic) bool shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) bool shouldSkipPeopleSuggestions;
@property (nonatomic) bool showKeyboardAutomatically;
@property (nonatomic) bool sourceIsManaged;
@property (nonatomic) bool startedConnectingToDaemon;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic) long long totalProviderCount;
@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, retain) NSString *userDefaultsIdentifier;
@property (nonatomic, retain) UINavigationController *userDefaultsNavigationController;
@property (getter=_viewWillAppearTimestamp, setter=_setViewWillAppearTimestamp:, nonatomic) unsigned long long viewWillAppearTimestamp;
@property (nonatomic) bool waitingForInitialLayoutPass;
@property (nonatomic) bool whitelistActionActivitiesOnly;
@property (nonatomic) bool willDismissActivityViewController;

// Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet

+ (double)_asyncPresentationTimeout;
+ (bool)_preventsAppearanceProxyCustomization;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (void)__viewControllerWillBePresented:(bool)arg1;
- (id)_activityConfigurationsForActivities:(id)arg1;
- (id)_activityItemLinkPresentationMetadataValues;
- (id)_activityItemURLValuesForLinkPresentation;
- (id)_activityItemURLValuesForMatching;
- (id)_activityItemValues;
- (id /* block */)_activityPresentationCompletionHandler;
- (id)_activityWithActivityUUID:(id)arg1;
- (bool)_allowsStylingSheetsAsCards;
- (id)_availableActivities;
- (void)_beginDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)_beginInProgressActivityExecutionForcedStrongReference;
- (unsigned long long)_beginPerformingActivityTimestamp;
- (void)_cancel;
- (void)_cleanupActivityWithSuccess:(bool)arg1;
- (void)_cleanupActivityWithSuccess:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (void)_clearActivity;
- (unsigned long long)_clientAttemptedInitialPresentationOrEmbeddingTimestamp;
- (id)_configurationForActivity:(id)arg1;
- (id)_customizationValues;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (double)_displayHeight;
- (void)_editActionsTapped;
- (void)_emitInteractionTelemetry:(bool)arg1 error:(id)arg2;
- (void)_endDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (void)_endInProgressActivityExecutionForcedStrongReference;
- (void)_executeActivity;
- (bool)_hasPerformedInitialPresentation;
- (id)_initialPhotosAssetDetails;
- (void)_insertIntoActivitiesByUUID:(id)arg1;
- (void)_installViewController:(id)arg1 belowView:(id)arg2;
- (bool)_isPerformingPresentation;
- (id)_newActivityMatchingContext;
- (id)_newShareUIConfigurationForCurrentState;
- (id)_newShareUIConfigurationWithMatchingResults:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_performDismissWithSuccess:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_performShareServiceSelectedActivity:(id)arg1;
- (id)_photosAssetIdentifiers;
- (id)_placeholderActivityItemValues;
- (id /* block */)_popoverDismissalAction;
- (void)_preheatActivitiesIfNeeded;
- (void)_preheatActivityViewControllerConfiguration;
- (void)_preloadInitialConfigurationLocallyIfNeeded;
- (void)_prepareActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (void)_presentationControllerDidDismiss:(id)arg1;
- (void)_presentationControllerDismissalTransitionDidEndNotification:(id)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentationOrEmbeddingDidBegin:(bool)arg1;
- (void)_primeExtensionDiscovery;
- (bool)_queueBackgroundOperationsForActivityItems:(id)arg1 activityBeingPerformed:(id)arg2;
- (unsigned long long)_readyToInteractTimestamp;
- (void)_removeFromActivitiesByUUID:(id)arg1;
- (bool)_requiresCustomPresentationController;
- (void)_resetAfterActivity:(bool)arg1;
- (id)_securityScopedURLsForMatching;
- (id)_selectedAssetIdentifiers;
- (void)_setActivityPresentationCompletionHandler:(id /* block */)arg1;
- (void)_setBeginPerformingActivityTimestamp:(unsigned long long)arg1;
- (void)_setClientAttemptedInitialPresentationOrEmbeddingTimestamp:(unsigned long long)arg1;
- (void)_setHasPerformedInitialPresentation:(bool)arg1;
- (void)_setInitialPhotosAssetDetails:(id)arg1;
- (void)_setIsPerformingPresentation:(bool)arg1;
- (void)_setPhotosAssetIdentifiers:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)_setReadyToInteractTimestamp:(unsigned long long)arg1;
- (void)_setSelectedAssetIdentifiers:(id)arg1;
- (void)_setShareSheetReadyToInteractHandler:(id /* block */)arg1;
- (void)_setViewWillAppearTimestamp:(unsigned long long)arg1;
- (void)_shareSheetReadyToInteractAfterCACommit;
- (id /* block */)_shareSheetReadyToInteractHandler;
- (bool)_shouldExecuteItemOperation:(id)arg1 forActivity:(id)arg2;
- (bool)_shouldShowSystemActivityType:(id)arg1;
- (id)_titleForActivity:(id)arg1;
- (void)_updateActivityItems:(id)arg1;
- (void)_updateActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_updateActivityViewControllerConfigurationSynchronously:(bool)arg1;
- (void)_updateIsContentManagedForURLs;
- (unsigned long long)_viewWillAppearTimestamp;
- (void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2;
- (id)activitiesByUUID;
- (id)activity;
- (id)activityAlertCancelAction;
- (id)activityAlertController;
- (id)activityHelper;
- (bool)activityHelper:(id)arg1 matchingWithContext:(id)arg2 shouldIncludeSystemActivityType:(id)arg3 sessionID:(id)arg4;
- (id)activityItemProviderOperationQueue;
- (id)activityItemProviderOperations;
- (id)activityItems;
- (id)activityTypeOrder;
- (id)activityTypesToCreateInShareService;
- (id)activityViewController;
- (id)activityViewControllerConfiguration;
- (id)airDropDelegate;
- (bool)airDropOnly;
- (id)airDropViewController;
- (void)airDropViewServiceDidSuccessfullyCompleteTransfer;
- (void)airDropViewServiceDidSuccessfullyStartTransfer;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)allowsCustomPresentationStyle;
- (bool)allowsEmbedding;
- (id)applicationActivities;
- (unsigned long long)backgroundTaskIdentifier;
- (id)blurViewHeightConstraint;
- (id)carouselViewController;
- (void)closeButtonTapped;
- (void)completedInitialLayoutPass;
- (long long)completedProviderCount;
- (id /* block */)completionHandler;
- (id /* block */)completionWithItemsHandler;
- (void)configureActivityViewControllerWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)configureContentViewIfNeeded;
- (bool)configureForCloudSharing;
- (bool)configureForPhotosEdit;
- (void)connectAirDrop;
- (void)connectToDaemonOnceWithPriming:(bool)arg1;
- (bool)connectedToDaemon;
- (void)connectionInterrupted;
- (id)contentNavigationController;
- (id)contentViewController;
- (id)customizationViewController;
- (id)dataSource;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (bool)dismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel;
- (bool)enableNewDesignInPhotos;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (long long)excludedActivityCategories;
- (id)excludedActivityTypes;
- (id)fallbackURLForLinkPresentation;
- (id)identifierToProgress;
- (id)identifierToPulse;
- (id)identifierToSubtitle;
- (id)includedActivityTypes;
- (id)init;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)initWithAssetIdentifiers:(id)arg1 activityItems:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserDefaults:(id)arg1 userDefaultsIdentifier:(id)arg2 applicationActivities:(id)arg3;
- (id)initialSocialText;
- (void)invalidateSlotManagerIfNeeded;
- (bool)isContentManaged;
- (id)linkViewController;
- (void)nextButtonTappedWithPeopleProxies:(id)arg1 shareProxies:(id)arg2 actionProxies:(id)arg3 nearbyCountSlotID:(id)arg4;
- (id)objectManipulationDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)optionsButtonTapped;
- (bool)performActivityForStateRestoration;
- (void)performActivityInHostWithUUID:(id)arg1;
- (void)performExtensionActivityInHostWithBundleID:(id)arg1;
- (void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2;
- (void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4;
- (id)photosCarouselViewController;
- (id)photosDelegate;
- (id)photosHeaderMetadata;
- (id)photosStackViewController;
- (id /* block */)preCompletionHandler;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentAirDrop;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (bool)receivedInitialConfiguration;
- (id)requestMetadataValues;
- (id)requestRefreshedCustomizationGroups;
- (id)resolvedActivityItemsForCurrentActivity;
- (id)secondaryContentNavigationController;
- (id)secondaryContentViewController;
- (void)selectedActionWithIdentifier:(id)arg1;
- (void)selectedAppWithIdentifier:(id)arg1;
- (void)selectedPersonWithIdentifier:(id)arg1;
- (void)sendConfigurationToDaemonSynchronously:(bool)arg1;
- (id)sessionID;
- (void)setActivitiesByUUID:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)setActivityAlertCancelAction:(id)arg1;
- (void)setActivityAlertController:(id)arg1;
- (void)setActivityHelper:(id)arg1;
- (void)setActivityItemProviderOperationQueue:(id)arg1;
- (void)setActivityItemProviderOperations:(id)arg1;
- (void)setActivityItems:(id)arg1;
- (void)setActivityTypeOrder:(id)arg1;
- (void)setActivityTypesToCreateInShareService:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setActivityViewControllerConfiguration:(id)arg1;
- (void)setAirDropDelegate:(id)arg1;
- (void)setAirDropOnly:(bool)arg1;
- (void)setAirDropViewController:(id)arg1;
- (void)setAllowsCustomPresentationStyle:(bool)arg1;
- (void)setAllowsEmbedding:(bool)arg1;
- (void)setApplicationActivities:(id)arg1;
- (void)setBackgroundTaskIdentifier:(unsigned long long)arg1;
- (void)setBlurViewHeightConstraint:(id)arg1;
- (void)setCarouselViewController:(id)arg1;
- (void)setCompletedProviderCount:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setConfigureForCloudSharing:(bool)arg1;
- (void)setConfigureForPhotosEdit:(bool)arg1;
- (void)setConnectedToDaemon:(bool)arg1;
- (void)setContentNavigationController:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setCustomizationViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDismissalDetectionOfViewControllerForSelectedActivityShouldAutoCancel:(bool)arg1;
- (void)setEnableNewDesignInPhotos:(bool)arg1;
- (void)setExcludedActivityCategories:(long long)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setIdentifierToProgress:(id)arg1;
- (void)setIdentifierToPulse:(id)arg1;
- (void)setIdentifierToSubtitle:(id)arg1;
- (void)setIncludedActivityTypes:(id)arg1;
- (void)setInitialSocialText:(id)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setLinkViewController:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setObjectManipulationDelegate:(id)arg1;
- (void)setPerformActivityForStateRestoration:(bool)arg1;
- (void)setPhotosCarouselViewController:(id)arg1;
- (void)setPhotosDelegate:(id)arg1;
- (void)setPhotosHeaderMetadata:(id)arg1;
- (void)setPhotosStackViewController:(id)arg1;
- (void)setPreCompletionHandler:(id /* block */)arg1;
- (void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(bool)arg6;
- (void)setReceivedInitialConfiguration:(bool)arg1;
- (void)setSecondaryContentNavigationController:(id)arg1;
- (void)setSecondaryContentViewController:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setSharingStyle:(long long)arg1;
- (void)setShouldMatchOnlyUserElectedExtensions:(bool)arg1;
- (void)setShouldSkipPeopleSuggestions:(bool)arg1;
- (void)setShowKeyboardAutomatically:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setStartedConnectingToDaemon:(bool)arg1;
- (void)setSubject:(id)arg1;
- (void)setTotalProviderCount:(long long)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setUserDefaultsIdentifier:(id)arg1;
- (void)setUserDefaultsNavigationController:(id)arg1;
- (void)setWaitingForInitialLayoutPass:(bool)arg1;
- (void)setWhitelistActionActivitiesOnly:(bool)arg1;
- (void)setWillDismissActivityViewController:(bool)arg1;
- (void)set_popoverDismissalAction:(id /* block */)arg1;
- (id)shadowView;
- (long long)sharingStyle;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldMatchOnlyUserElectedExtensions;
- (bool)shouldSkipPeopleSuggestions;
- (bool)showKeyboardAutomatically;
- (void)showScreenTimeRestrictedAlert;
- (bool)sourceIsManaged;
- (bool)startedConnectingToDaemon;
- (id)subject;
- (long long)totalProviderCount;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentViewControllerHeader;
- (void)updateSheetPresentationController:(id)arg1;
- (id)userDefaults;
- (id)userDefaultsIdentifier;
- (id)userDefaultsNavigationController;
- (void)userDefaultsViewController:(id)arg1 didFavoriteActivity:(bool)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4;
- (void)userDefaultsViewController:(id)arg1 didSelectActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)userDefaultsViewController:(id)arg1 didToggleActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)userDefaultsViewController:(id)arg1 didUpdateFavoritesProxies:(id)arg2 activityCategory:(long long)arg3;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)waitingForInitialLayoutPass;
- (bool)whitelistActionActivitiesOnly;
- (bool)willDismissActivityViewController;
- (void)willEnterForeground:(id)arg1;
- (void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/AccessibilityBundles/ShareSheet.axbundle/ShareSheet

+ (Class)safeCategoryBaseClass;

- (bool)accessibilityPerformEscape;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id /* block */)dismissCompletionHandler;
- (void)setDismissCompletionHandler:(id /* block */)arg1;

@end
