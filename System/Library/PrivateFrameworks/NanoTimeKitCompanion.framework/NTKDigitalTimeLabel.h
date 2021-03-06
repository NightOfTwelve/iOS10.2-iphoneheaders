/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/CLKUITimeLabel.h>
#import <libobjc.A.dylib/NTKColoringView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class UIColor, NTKDigitalTimeLabelStyle, NSString;

@interface NTKDigitalTimeLabel : CLKUITimeLabel <NTKColoringView, NTKTimeView> {

	BOOL _usesLegibility;
	BOOL _frozen;
	UIColor* _color;
	UIColor* _overrideColor;

}

@property (nonatomic,copy) NTKDigitalTimeLabelStyle * style; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color;                             //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                         //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                     //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                 //@synthesize frozen=_frozen - In the implementation block
-(void)setShadowColor:(id)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(BOOL)isFrozen;
-(void)setFrozen:(BOOL)arg1 ;
-(UIColor *)contentColor;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)setFrameUsingCurrentStyle;
-(UIColor *)overrideColor;
-(BOOL)usesLegibility;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)animateToStyle:(id)arg1 duration:(double)arg2 timingFunction:(id)arg3 additionalAnimation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_newUnderlyingLabel:(BOOL)arg1 ;
@end

