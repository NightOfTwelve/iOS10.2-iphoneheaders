/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISObservable.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/ISWrappedAVPlayerDelegate.h>

@protocol ISBasePlayerDelegate;
@class ISPlayerItem, NSHashTable, ISLayerPlayer, ISBehavior, ISPlayerState, NSMutableSet, ISWrappedAVPlayer, NSString;

@interface ISBasePlayer : ISObservable <ISChangeObserver, ISWrappedAVPlayerDelegate> {

	BOOL _audioEnabled;
	BOOL __audioEnabledInternal;
	float _audioVolume;
	float __videoVolume;
	ISPlayerItem* _playerItem;
	long long _status;
	id<ISBasePlayerDelegate> _delegate;
	NSHashTable* __outputs;
	ISLayerPlayer* _crossfadePlayer;
	ISBehavior* _activeBehavior;
	id __videoWillPlayToEndObserver;
	ISPlayerState* _lastAppliedLayoutInfo;
	id __playerItemDidPlayToEndObserver;
	NSMutableSet* __audioDisabledReasons;
	ISWrappedAVPlayer* _videoPlayer;
	SCD_Struct_IS4 __videoForwardPlaybackEndTime;

}

@property (nonatomic,readonly) NSHashTable * _outputs;                                                                         //@synthesize _outputs=__outputs - In the implementation block
@property (nonatomic,readonly) ISLayerPlayer * crossfadePlayer;                                                                //@synthesize crossfadePlayer=_crossfadePlayer - In the implementation block
@property (setter=setActiveBehavior:,nonatomic,retain) ISBehavior * activeBehavior;                                            //@synthesize activeBehavior=_activeBehavior - In the implementation block
@property (setter=_setVideoWillPlayToEndObserver:,nonatomic,retain) id _videoWillPlayToEndObserver;                            //@synthesize _videoWillPlayToEndObserver=__videoWillPlayToEndObserver - In the implementation block
@property (setter=_setLastAppliedLayoutInfo:,nonatomic,retain) ISPlayerState * lastAppliedLayoutInfo;                          //@synthesize lastAppliedLayoutInfo=_lastAppliedLayoutInfo - In the implementation block
@property (assign,setter=_setStatus:,nonatomic) long long status;                                                              //@synthesize status=_status - In the implementation block
@property (assign,setter=_setVideoVolume:,nonatomic) float _videoVolume;                                                       //@synthesize _videoVolume=__videoVolume - In the implementation block
@property (assign,setter=_setVideoForwardPlaybackEndTime:,nonatomic) SCD_Struct_IS4 _videoForwardPlaybackEndTime;              //@synthesize _videoForwardPlaybackEndTime=__videoForwardPlaybackEndTime - In the implementation block
@property (setter=_setPlayerItemDidPlayToEndObserver:,nonatomic,retain) id _playerItemDidPlayToEndObserver;                    //@synthesize _playerItemDidPlayToEndObserver=__playerItemDidPlayToEndObserver - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _audioDisabledReasons;                                                           //@synthesize _audioDisabledReasons=__audioDisabledReasons - In the implementation block
@property (assign,setter=_setAudioEnabledInternal:,nonatomic) BOOL _audioEnabledInternal;                                      //@synthesize _audioEnabledInternal=__audioEnabledInternal - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;                                                                //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) ISPlayerItem * playerItem;                                                                        //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) float audioVolume;                                                                                //@synthesize audioVolume=_audioVolume - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                                                          //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<ISBasePlayerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)statusDidChange;
-(id)init;
-(void)setDelegate:(id<ISBasePlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<ISBasePlayerDelegate>)delegate;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(long long)status;
-(void)_handleError:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(id)initWithVideoPlayer:(id)arg1 ;
-(void)_setStatus:(long long)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(void)playerItemDidChange;
-(ISPlayerItem *)playerItem;
-(id)mutableChangeObject;
-(void)_setVideoPlayer:(id)arg1 ;
-(void)setPlayerItem:(ISPlayerItem *)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(void)addOutput:(id)arg1 ;
-(double)currentCrossfadeTime;
-(ISLayerPlayer *)crossfadePlayer;
-(void)setActiveBehavior:(ISBehavior *)arg1 ;
-(void)_updateVideoPlayerVolume;
-(id)_playerItemDidPlayToEndObserver;
-(id)_videoWillPlayToEndObserver;
-(void)configurePlayerItem;
-(void)_updateContentFromPlayerItem;
-(void)_updateStatus;
-(void)_updateWillPlayToEndObserver;
-(void)_updatePlayerItemAudioEnabled;
-(NSHashTable *)_outputs;
-(void)didAddOutput:(id)arg1 ;
-(void)willRemoveOutput:(id)arg1 ;
-(void)_configureNewOutput:(id)arg1 ;
-(ISBehavior *)activeBehavior;
-(void)_setAudioDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)activeBehaviorDidChange;
-(void)_setLastAppliedLayoutInfo:(id)arg1 ;
-(void)enumerateOutputsWithBlock:(/*^block*/id)arg1 ;
-(ISPlayerState *)lastAppliedLayoutInfo;
-(NSMutableSet *)_audioDisabledReasons;
-(void)_setAudioEnabledInternal:(BOOL)arg1 ;
-(void)_videoDidPlayToEnd;
-(void)_playerItemDidPlayToEnd:(id)arg1 ;
-(void)_setPlayerItemDidPlayToEndObserver:(id)arg1 ;
-(SCD_Struct_IS4)_videoForwardPlaybackEndTime;
-(double)videoWillPlayToEndInterval;
-(void)_videoWillPlayToEnd;
-(void)_setVideoWillPlayToEndObserver:(id)arg1 ;
-(BOOL)_audioEnabledInternal;
-(void)_handleErrorsIfNeeded;
-(float)_videoVolume;
-(void)_handleMediaServicesReset;
-(void)applyOutputInfo:(id)arg1 fromBehavior:(id)arg2 withTransitionOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setForwardPlaybackEndTime:(SCD_Struct_IS4)arg1 ;
-(void)_setVideoVolume:(float)arg1 ;
-(void)avPlayer:(id)arg1 didChangeToStatus:(long long)arg2 ;
-(void)avPlayer:(id)arg1 didChangeToItem:(id)arg2 ;
-(void)avPlayer:(id)arg1 item:(id)arg2 didChangeToStatus:(long long)arg3 ;
-(void)_audioEnabledInternal:(BOOL)arg1 ;
-(void)behavior:(id)arg1 didSetOutputInfo:(id)arg2 withTransitionOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)behavior:(id)arg1 setVideoPlayRate:(float)arg2 ;
-(BOOL)behavior:(id)arg1 seekVideoPlayerToTime:(SCD_Struct_IS4)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)behavior:(id)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)behavior:(id)arg1 setVideoForwardPlaybackEndTime:(SCD_Struct_IS4)arg2 ;
-(void)behavior:(id)arg1 setVideoVolume:(float)arg2 ;
-(void)behavior:(id)arg1 setAudioEnabled:(BOOL)arg2 ;
-(void)behavior:(id)arg1 seekCrossfadeToTime:(double)arg2 ;
-(void)behavior:(id)arg1 setCrossfadePlayRate:(float)arg2 ;
-(void)_setVideoForwardPlaybackEndTime:(SCD_Struct_IS4)arg1 ;
@end
