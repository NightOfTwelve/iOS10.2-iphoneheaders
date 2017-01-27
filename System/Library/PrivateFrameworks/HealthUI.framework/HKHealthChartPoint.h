/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface HKHealthChartPoint : NSObject <HKChartPoint> {

	NSDate* _date;
	NSNumber* _sum;
	NSNumber* _min;
	NSNumber* _max;
	NSNumber* _avg;
	id _userInfo;

}

@property (nonatomic,retain) id userInfo;                           //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)xValue;
-(id)yValue;
-(id)allYValues;
-(id)minXValue;
-(id)maxXValue;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(id)initWithStatistics:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 dataUnit:(id)arg4 ;
@end
