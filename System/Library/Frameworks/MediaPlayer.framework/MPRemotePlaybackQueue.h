/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPCPlaybackContextCreating.h>

@class NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject <MPCPlaybackContextCreating> {

	MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue;
	NSDictionary* _userInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * userInfo;                                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (getter=isRequestingImmediatePlayback,nonatomic,readonly) BOOL requestingImmediatePlayback; 
@property (nonatomic,readonly) BOOL shouldOverrideManuallyCuratedQueue; 
+(id)queueWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
+(void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(BOOL)isRequestingImmediatePlayback;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(BOOL)verifyWithError:(id*)arg1 ;
@end

