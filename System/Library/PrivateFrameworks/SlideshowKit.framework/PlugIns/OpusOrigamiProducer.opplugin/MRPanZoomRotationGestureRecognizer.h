/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRGestureRecognizer.h>

@class NSString;

@interface MRPanZoomRotationGestureRecognizer : MRGestureRecognizer {

	NSString* _type;
	double _factor;
	unsigned char _direction;
	BOOL _isMaster;
	double _trackingBoxRadius;
	double _progressThreshold;
	double _velocityThreshold;

}

@property (readonly) unsigned char direction;                       //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double trackingBoxRadius;              //@synthesize trackingBoxRadius=_trackingBoxRadius - In the implementation block
@property (assign,nonatomic) double progressThreshold;              //@synthesize progressThreshold=_progressThreshold - In the implementation block
@property (assign,nonatomic) double velocityThreshold;              //@synthesize velocityThreshold=_velocityThreshold - In the implementation block
-(void)setProgressThreshold:(double)arg1 ;
-(void)_addSpecificObjectToAction:(id)arg1 ;
-(void)touchEnded:(id)arg1 ;
-(void)_postProcess;
-(void)recognize;
-(id)initWithRenderer:(id)arg1 masterAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4 ;
-(id)initWithRenderer:(id)arg1 startAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4 ;
-(id)initWithRenderer:(id)arg1 endAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4 ;
-(void)setTrackingBoxRadius:(double)arg1 ;
-(double)trackingBoxRadius;
-(double)progressThreshold;
-(double)velocityThreshold;
-(void)dealloc;
-(unsigned char)direction;
-(void)touchMoved:(id)arg1 ;
-(void)setVelocityThreshold:(double)arg1 ;
@end

