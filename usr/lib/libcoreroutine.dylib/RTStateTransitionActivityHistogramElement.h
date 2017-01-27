/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMMotionActivity;

@interface RTStateTransitionActivityHistogramElement : NSObject <NSCopying> {

	CMMotionActivity* _activity;
	double _interval;

}

@property (nonatomic,retain) CMMotionActivity * activity;              //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) double interval;                          //@synthesize interval=_interval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CMMotionActivity *)activity;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)setActivity:(CMMotionActivity *)arg1 ;
-(id)initWithActivity:(id)arg1 ;
@end
