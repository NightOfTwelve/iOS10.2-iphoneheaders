/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKAbstractFixedAxisScalingRule.h>

@class HKValueRange, NSDictionary, HKUnit;

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule {

	HKValueRange* _defaultQuantityBounds;
	NSDictionary* _quantityBoundsOverrides;
	HKUnit* _unit;

}

@property (nonatomic,retain) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2 ;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
-(BOOL)isCompatibleWithQuantityType:(id)arg1 ;
-(void)_convertQuantityRanges;
-(id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2 ;
@end
