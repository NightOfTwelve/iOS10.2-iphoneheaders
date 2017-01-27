/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSyncSession.h>

@class HDNanoSyncStore;

@interface HDNanoSyncSession : HDSyncSession {

	BOOL _pullRequest;
	BOOL _requestedByRemote;
	/*^block*/id _completion;
	unsigned long long _messageCount;

}

@property (nonatomic,readonly) HDNanoSyncStore * nanoSyncStore; 
@property (getter=isPullRequest,nonatomic,readonly) BOOL pullRequest;                          //@synthesize pullRequest=_pullRequest - In the implementation block
@property (getter=isRequestedByRemote,nonatomic,readonly) BOOL requestedByRemote;              //@synthesize requestedByRemote=_requestedByRemote - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                             //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) unsigned long long messageCount;                                //@synthesize messageCount=_messageCount - In the implementation block
-(id)completion;
-(unsigned long long)messageCount;
-(id)initWithSyncStore:(id)arg1 attemptWhileLocking:(BOOL)arg2 pullRequest:(BOOL)arg3 requestedByRemote:(BOOL)arg4 reason:(id)arg5 delegate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)incrementMessageCount;
-(id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3 ;
-(BOOL)isPullRequest;
-(BOOL)isRequestedByRemote;
-(void)invokeCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(HDNanoSyncStore *)nanoSyncStore;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(id)predicateForSyncEntityClass:(Class)arg1 ;
-(long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1 ;
@end
