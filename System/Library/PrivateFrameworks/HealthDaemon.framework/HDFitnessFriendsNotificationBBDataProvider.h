/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBRemoteDataProvider.h>
#import <libobjc.A.dylib/HDFitnessFriendsManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class BBDataProviderConnection, BBDataProviderProxy, HDFitnessFriendsManager, NSObject, NSMutableDictionary, NSString;

@interface HDFitnessFriendsNotificationBBDataProvider : NSObject <BBRemoteDataProvider, HDFitnessFriendsManagerReadyObserver> {

	BBDataProviderConnection* _dataProviderConnection;
	BBDataProviderProxy* _dataProviderProxy;
	HDFitnessFriendsManager* _fitnessFriendsManager;
	NSObject*<OS_dispatch_queue> _bulletinQueue;
	NSMutableDictionary* _bulletinByFriendID;
	int notifyGoalCompletionToken;
	int notifyAchievementToken;
	int notifyWorkoutToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)sortDescriptors;
-(void)fitnessFriendsManagerReady:(id)arg1 ;
-(void)showAchievementEarnedNotificationFromContact:(id)arg1 achievement:(id)arg2 ;
-(void)showWorkoutFinishedNotificationFromContact:(id)arg1 workout:(id)arg2 ;
-(void)showGoalCompletionNotificationFromContact:(id)arg1 activitySnapshot:(id)arg2 ;
-(id)sectionIdentifier;
-(void)_migrateSectionInfo;
-(id)defaultSectionInfo;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(void)dataProviderDidLoad;
-(void)handleBulletinActionResponse:(id)arg1 ;
-(id)universalSectionIdentifier;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(void)_showFakeGoalCompletionNotification;
-(void)_showFakeAchievementNotification;
-(void)_showFakeWorkoutNotification;
-(void)_showGoalCompletionNotificationFromContact:(id)arg1 activitySnapshot:(id)arg2 isFakedBulletin:(BOOL)arg3 ;
-(void)_showWorkoutFinishedNotificationFromContact:(id)arg1 workout:(id)arg2 isFakedBulletin:(BOOL)arg3 ;
-(void)_showAchievementEarnedNotificationFromContact:(id)arg1 achievement:(id)arg2 isFakedBulletin:(BOOL)arg3 ;
-(id)_contactWithName:(id)arg1 ;
-(id)_fakeSnapshotForDate:(id)arg1 ;
-(id)_fakeAchievementDuringDayStartingAtDate:(id)arg1 ;
-(id)_fakeOutdoorRunningWorkoutDuringDayStartingAtDate:(id)arg1 ;
-(id)_appleWatchSourceRevision;
-(id)_phoneNumberFromDefaults;
-(id)_newPrepopulatedBulletinRequestForContact:(id)arg1 ;
-(void)_queue_addBulletinRequest:(id)arg1 fromContact:(id)arg2 isFakedBulletin:(BOOL)arg3 ;
-(void)_queue_withdrawBulletinRequest:(id)arg1 fromFriendWithID:(id)arg2 ;
-(id)_fakeWorkoutDuringDayStartingAtDate:(id)arg1 ;
@end

