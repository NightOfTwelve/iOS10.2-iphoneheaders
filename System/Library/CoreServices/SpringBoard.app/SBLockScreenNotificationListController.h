/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBLockScreenNotificationViewDelegate.h>
#import <SpringBoard/SBLockScreenNotificationModel.h>
#import <SpringBoard/SBVolumePressBandit.h>
#import <SpringBoard/SBUIBannerSource.h>
#import <SpringBoard/SBUIBannerTargetManagerObserver.h>
#import <SpringBoard/SBLockScreenActionHandler.h>
#import <SpringBoard/SBLockScreenNotificationBannerItemDelegate.h>
#import <SpringBoard/SBPresentingDelegate.h>
#import <SpringBoard/SBCoordinatedPresenting.h>
#import <SpringBoard/SBMotionGestureObserver.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <SpringBoard/SBLockScreenActionProvider.h>
#import <SpringBoard/SBAlertItemPresenter.h>

@protocol SBLockScreenNotificationListDelegate, SBUIBannerTarget, SBPresentingDelegate;
@class SBLockScreenNotificationListView, BBObserver, NSMutableArray, BSSerializedRequestQueue, SBLockScreenActionContext, SBLockScreenPlugin, SBLockScreenBounceAnimator, SBLockScreenNotificationCell, CMPocketStateManager, NSString, NSSet;

@interface SBLockScreenNotificationListController : UIViewController <SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel, SBVolumePressBandit, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBLockScreenActionHandler, SBLockScreenNotificationBannerItemDelegate, SBPresentingDelegate, SBCoordinatedPresenting, SBMotionGestureObserver, BBObserverDelegate, SBLockScreenActionProvider, SBAlertItemPresenter> {

	SBLockScreenNotificationListView* _notificationView;
	id<SBLockScreenNotificationListDelegate> _delegate;
	BBObserver* _observer;
	NSMutableArray* _listItems;
	NSMutableArray* _realertTimers;
	BSSerializedRequestQueue* _bulletinRequestQueue;
	BOOL _quietModeEnabled;
	BOOL _turnOnScreenForOutOfPocketEvent;
	/*^block*/id _deferredModelUpdateBlock;
	BOOL _hasDeferredUpdateToClearListItems;
	SBLockScreenActionContext* _actionContext;
	id<SBUIBannerTarget> _bannerTarget;
	NSMutableArray* _listItemsBannerQueue;
	SBLockScreenPlugin* _activePlugin;
	BOOL _isOnscreen;
	BOOL _hasMissedUnreadNotifications;
	long long _messagePrivacyRevealState;
	id<SBPresentingDelegate> _presentingDelegate;
	SBLockScreenBounceAnimator* _bounceAnimator;
	SBLockScreenNotificationCell* _hintingCell;
	CGPoint _hintingCellOriginalOffset;
	CMPocketStateManager* _pocketStateManager;
	NSString* _powerAssertionName;
	unsigned _powerAssertionID;
	BOOL _hasAnyContent;

}

@property (assign,nonatomic,__weak) id<SBLockScreenNotificationListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasAnyContent;                                                    //@synthesize hasAnyContent=_hasAnyContent - In the implementation block
@property (nonatomic,retain) SBLockScreenActionContext * lockScreenActionContext;                   //@synthesize actionContext=_actionContext - In the implementation block
@property (nonatomic,readonly) BOOL quietModeEnabled;                                               //@synthesize quietModeEnabled=_quietModeEnabled - In the implementation block
@property (getter=isUsingBanners,nonatomic,readonly) BOOL usingBanners; 
@property (nonatomic,retain) SBLockScreenPlugin * activePlugin;                                     //@synthesize activePlugin=_activePlugin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) double hintDisplacement; 
@property (nonatomic,readonly) unsigned long long hintEdge; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
+(id)underlayPropertiesFactory;
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 wasCancelled:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 presentationBegunHandler:(/*^block*/id)arg2 ;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(BOOL)canPresentMultipleAlertItemsSimultaneously;
-(void)presentAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_handleClockNotificationUpdate:(id)arg1 ;
-(SBLockScreenActionContext *)lockScreenActionContext;
-(void)_addBounceAnimator;
-(BOOL)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(void)presentingControllerDidFinishPresentation:(id)arg1 ;
-(NSSet *)gestures;
-(NSSet *)tapExcludedViews;
-(void)cancelGestureRecognizer:(id)arg1 ;
-(void)reenableGestureRecognizer:(id)arg1 ;
-(BOOL)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(void)presentingController:(id)arg1 willHandleGesture:(id)arg2 ;
-(BOOL)isPresentingControllerTransitioning;
-(BOOL)shouldBeginHintForGesture:(id)arg1 ;
-(long long)coordinatedPresentingControllerIdentifier;
-(double)hintDisplacement;
-(unsigned long long)hintEdge;
-(NSSet *)conflictingGestures;
-(void)setLockScreenActionContext:(SBLockScreenActionContext *)arg1 ;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(void)bannerItemWasTapped:(id)arg1 ;
-(void)handleLockScreenActionWithContext:(id)arg1 ;
-(void)_updateMotionGestureObservation;
-(void)didReceiveRaiseGesture;
-(SBLockScreenPlugin *)activePlugin;
-(void)_scheduledClockPendingNotificationRequestsDidChange:(id)arg1 ;
-(void)setActivePlugin:(SBLockScreenPlugin *)arg1 ;
-(void)_setDeferredModelUpdateBlock:(/*^block*/id)arg1 ;
-(void)prepareForTeardown;
-(id)cellAtTouchLocation:(CGPoint)arg1 ;
-(id)_firstItemWantingFullscreenPresentation;
-(BOOL)isUsingBanners;
-(void)_presentFullscreenBulletinAlertIfNeeded;
-(void)concealForChangeInMessagePrivacy;
-(id)_newItemForBulletin:(id)arg1 shouldPlayLightsAndSirens:(BOOL)arg2 ;
-(BOOL)_shouldCacheBannerForBulletin:(id)arg1 ;
-(void)_addItem:(id)arg1 forBulletin:(id)arg2 playLightsAndSirens:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
-(id)_listItemContainingBulletinID:(id)arg1 ;
-(id)_coalescableListItemForNewBulletin:(id)arg1 ;
-(void)_updateModelAndViewForAdditionOfItem:(id)arg1 ;
-(void)_updateModelAndViewForModificationOfItem:(id)arg1 ;
-(void)_removeCachedBannerForBulletinID:(id)arg1 ;
-(void)_updateModelAndViewForRemovalOfItem:(id)arg1 ;
-(id)_listItemContainingSystemAlert:(id)arg1 ;
-(id)_listItemContainingCardItem:(id)arg1 ;
-(void)_activateOrUpdateCardItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_sortItemList:(id)arg1 ;
-(BOOL)_shouldAddBannerItem:(id)arg1 ;
-(void)_updateModelForRemovalOfItem:(id)arg1 updateView:(BOOL)arg2 ;
-(BOOL)removeLockScreenNotificationsPassingTest:(/*^block*/id)arg1 ;
-(void)_dismissBulletinsForActionContext:(id)arg1 ;
-(id)lockScreenScrollView;
-(void)_showTestBulletin;
-(BOOL)_firstBulletinHasRaiseAction;
-(id)_firstBulletin;
-(void)noteUnlockActionChanged:(id)arg1 ;
-(void)listViewDidBeginScrolling:(id)arg1 ;
-(void)listViewDidEndScrolling:(id)arg1 ;
-(void)listView:(id)arg1 cellDidBeginScrolling:(id)arg2 ;
-(void)listView:(id)arg1 cellDidEndScrolling:(id)arg2 ;
-(void)noteListViewReadyForModelUpdate;
-(id)listItemAtIndexPath:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(void)setIsOnscreen:(BOOL)arg1 ;
-(BOOL)hasMissedUnreadNotifications;
-(void)activateCardItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)deactivateCardItem:(id)arg1 ;
-(void)updateCardItem:(id)arg1 ;
-(void)_updateModelAndViewForReplacingItem:(id)arg1 withNewItem:(id)arg2 ;
-(BOOL)removeItemsForUnlock;
-(BOOL)removeItemsForNotificationCenterPresentation;
-(void)revealForChangeInMessagePrivacy;
-(void)lockScreenViewDidEndScrollingOnPage:(long long)arg1 ;
-(BOOL)quietModeEnabled;
-(void)setHasAnyContent:(BOOL)arg1 ;
-(void)setDelegate:(id<SBLockScreenNotificationListDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id<SBLockScreenNotificationListDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<SBPresentingDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<SBPresentingDelegate>)arg1 ;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
-(BOOL)hasAnyContent;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)abortAnimatedTransition;
@end

