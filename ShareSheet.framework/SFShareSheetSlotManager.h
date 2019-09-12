/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface SFShareSheetSlotManager : NSObject <NSXPCConnectionDelegate, SFShareSheetSlotObserverProtocol> {
    bool  _activateCalled;
    NSXPCConnection * _connection;
    <SFShareSheetSlotManagerDelegate> * _delegate;
    bool  _invalidateCalled;
    bool  _invalidateDone;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFShareSheetSlotManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg1;
- (void)activityViewControllerPerformEditActionsWithSessionID:(id)arg1;
- (void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg1;
- (void)activityViewControllerWithSessionID:(id)arg1 favoritedActivity:(bool)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4;
- (void)activityViewControllerWithSessionID:(id)arg1 performedActivityWithSuccess:(bool)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActionWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActivityWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedDefaultActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedPersonWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 toggledActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 updatedFavoritesProxies:(id)arg2 activityCategory:(long long)arg3;
- (void)connectToDaemonWithSessionID:(id)arg1 discoveryContext:(id)arg2 assetIdentifiers:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)connectionEstablished;
- (void)connectionInterrupted;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)arg1;
- (id)delegate;
- (void)ensureConnectionEstablished;
- (void)ensureXPCStarted;
- (id)exportedInterface;
- (id)init;
- (void)interrupted;
- (void)invalidate;
- (void)invalidated;
- (id)machServiceName;
- (void)performActivityInHostWithUUID:(id)arg1;
- (void)performExtensionActivityInHostWithBundleID:(id)arg1;
- (void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2;
- (void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (void)sendConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(bool)arg6;
- (bool)shouldEscapeXpcTryCatch;
- (void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(id /* block */)arg2;

@end
