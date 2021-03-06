/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ASDJobManagerClient.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSArray, NSXPCListener, ASDJobManagerClientConnection, NSHashTable, ASDJobManagerOptions, NSMutableSet, NSString;

@interface ASDJobManager : ASDBaseClient <NSXPCListenerDelegate, ASDJobManagerClient> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _connection;
	NSArray* _jobs;
	int _launchNotificationToken;
	NSXPCListener* _listener;
	ASDJobManagerClientConnection* _clientConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	ASDJobManagerOptions* _options;
	NSMutableSet* _removedJobs;
	NSObject*<OS_dispatch_queue> _xpcQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishJobs:(id)arg1 ;
-(void)resumeJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)pauseJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getJobsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_connectToDaemon;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_setupConnection;
-(void)cancelJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getJobsUsingBlock:(/*^block*/id)arg1 ;
-(void)didChangeJobs:(id)arg1 ;
-(void)didCompleteJobs:(id)arg1 finalPhases:(id)arg2 ;
-(void)didUpdateProgress:(id)arg1 ;
-(void)didUpdateStates:(id)arg1 ;
-(void)_willFinishJobs:(id)arg1 ;
-(void)_finishJobsWithIDs:(id)arg1 ;
-(void)_getJobsUsingBlock:(/*^block*/id)arg1 ;
-(void)_getJobsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_sendJobsChanged:(id)arg1 ;
-(void)_sendJobsCompleted:(id)arg1 ;
-(void)_applyUpdates:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_sendProgressUpdated:(id)arg1 ;
-(void)_registerManagerWithOptions:(id)arg1 ;
-(BOOL)_shouldAutomaticallyReconnect;
-(void)_handleInvalidatedConnection:(id)arg1 ;
-(void)_handleInterruptedConnection:(id)arg1 ;
-(void)didCompleteJobs:(id)arg1 ;
-(void)_sendStatesUpdated:(id)arg1 ;
@end

