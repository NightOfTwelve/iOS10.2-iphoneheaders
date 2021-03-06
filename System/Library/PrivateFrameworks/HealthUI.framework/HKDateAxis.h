/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKAxis.h>

@class HKDateIntervalCache, NSArray, HKValueRange;

@interface HKDateAxis : HKAxis {

	HKDateIntervalCache* _intervalCache;
	NSArray* _cachedAxisLabels;
	HKValueRange* _chartableDateRange;

}

@property (nonatomic,retain) HKValueRange * chartableDateRange;              //@synthesize chartableDateRange=_chartableDateRange - In the implementation block
-(id)init;
-(HKValueRange *)chartableDateRange;
-(id)labelsForChartRange:(HKRange)arg1 zoomScale:(double)arg2 ;
-(void)setChartableDateRange:(HKValueRange *)arg1 ;
-(id)dateZoomScale;
-(id)dateRangeForChartRect:(CGRect)arg1 zoomScale:(double)arg2 contentOffset:(CGPoint)arg3 ;
-(long long)dateZoomForZoomScale:(double)arg1 ;
-(void)offsetForDateRange:(id)arg1 chartRect:(CGRect)arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(CGPoint*)arg4 ;
-(void)enumerateTickCoordinatesInChartRange:(HKRange)arg1 zoomScale:(double)arg2 handler:(/*^block*/id)arg3 ;
-(id)_formattedStringForDate:(id)arg1 zoom:(long long)arg2 ;
-(void)_updateIntervalCacheWithRange:(HKRange)arg1 zoomScale:(double)arg2 ;
-(id)_axisLabelsWithChartRange:(HKRange)arg1 zoom:(long long)arg2 ;
-(id)stringForDate:(id)arg1 chartRange:(HKRange)arg2 zoom:(long long)arg3 isMajorTick:(BOOL)arg4 ;
-(void)_enumerateCachedCoordinatesWithHandler:(/*^block*/id)arg1 ;
-(id)_dateRangeForChartRange:(HKRange)arg1 zoomScale:(double)arg2 ;
-(unsigned long long)_anchorUnitForZoom:(long long)arg1 ;
-(void)_clearCachedAxisLabels;
@end

