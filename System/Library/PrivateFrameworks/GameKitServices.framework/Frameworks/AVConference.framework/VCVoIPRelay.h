/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCVoIPRelayInternal;

@interface VCVoIPRelay : NSObject {

	VCVoIPRelayInternal* _internal;

}

@property (nonatomic,readonly) AudioStreamBasicDescription audioFormat; 
@property (nonatomic,readonly) unsigned long long blockSizeSamples; 
-(void)dealloc;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(AudioStreamBasicDescription)audioFormat;
-(unsigned long long)blockSizeSamples;
-(id)initWithCaptureBlock:(/*^block*/id)arg1 renderBlock:(/*^block*/id)arg2 ;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
@end

