/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDXPCMessageHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSTimer, MRDPhoneCallObserver, MRDNowPlayingDataSource, NSArray, NSString;

@interface MRDRemoteControlServer : NSObject <MRDXPCMessageHandling> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _commandQueuesForDisplayIDs;
	NSMutableDictionary* _remoteControlContexts;
	NSTimer* _queuedCommandsTimeoutTimer;
	unsigned long long _playCommandsBeingProcessed;
	MRDPhoneCallObserver* _callObserver;
	MRDNowPlayingDataSource* _nowPlayingDataSource;

}

@property (nonatomic,readonly) MRDNowPlayingDataSource * nowPlayingDataSource;                         //@synthesize nowPlayingDataSource=_nowPlayingDataSource - In the implementation block
@property (getter=isProcessingPlayCommand,nonatomic,readonly) BOOL processingPlayCommand; 
@property (nonatomic,readonly) NSArray * remoteControlClients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clientCanBeNowPlayingAppNotification:(id)arg1 ;
-(id)initWithNowPlayingDataSource:(id)arg1 ;
-(void)sendRemoteControlCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendLocalCommand:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_sendExternalCommand:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)broadcastRemoteControlCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)remoteControlClients;
-(void)sendRemoteControlCommand:(id)arg1 toClients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendRemoteControlCommand:(id)arg1 toDestinationClient:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_shouldIgnoreCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleSendCommandMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleBroadcastCommandMessage:(id)arg1 fromClient:(id)arg2 ;
-(id)_clientForSupportedCommandsMessage:(id)arg1 ;
-(void)_notifySupportedCommandsDidChangeForOrigin:(MROriginRef)arg1 ;
-(void)_sendQueuedCommandsForDestinationClient:(id)arg1 ;
-(id)_resolvedLocalDeviceDestinationAppDisplayIdentifierForCommand:(id)arg1 ;
-(id)_destinationClientForRemoteControlCommand:(id)arg1 ;
-(void)_enqueueCommand:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_remoteControlContextForCommand:(id)arg1 ;
-(void)_enqueueCommand:(id)arg1 forUnavailableApplicationWithDisplayID:(id)arg2 ;
-(BOOL)_applicationIsRunning:(id)arg1 ;
-(void)_clearQueuedCommandsForApplicationWithDisplayID:(id)arg1 ;
-(void)_sendQueuedCommands:(id)arg1 toClient:(id)arg2 retry:(BOOL)arg3 ;
-(void)_sendQueuedPlayCommand:(id)arg1 remainingCommands:(id)arg2 client:(id)arg3 ;
-(id)_contextuallyAwareDestinationAppDisplayIDForCommand:(id)arg1 ;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)sendRemoteControlCommand:(id)arg1 ;
-(void)broadcastRemoteControlCommand:(id)arg1 ;
-(void)clearContextsForClient:(id)arg1 ;
-(BOOL)isProcessingPlayCommand;
-(MRDNowPlayingDataSource *)nowPlayingDataSource;
-(id)init;
-(void)dealloc;
@end

