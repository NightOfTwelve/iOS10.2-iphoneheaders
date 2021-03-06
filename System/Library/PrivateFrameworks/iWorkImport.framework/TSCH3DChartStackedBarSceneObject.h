/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartStackedColumnSceneObject.h>

@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject
+(id)chartSeriesType;
+(TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS478)arg2 ;
+(BOOL)isHorizontalChart;
+(BOOL)isStacked;
-(tvec2<float>)labelObjectSpacePosition:(unsigned)arg1 axisValue:(double)arg2 intercept:(double)arg3 ;
-(void)updateLightingEffectsState:(id)arg1 scene:(id)arg2 ;
@end

