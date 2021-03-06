/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH2DChartLayout.h>

@class TSCH3DChartSceneAreaLayoutItem, TSCH3DScene;

@interface TSCH3DChartLayout : TSCH2DChartLayout

@property (nonatomic,readonly) TSCH3DChartSceneAreaLayoutItem * areaItem; 
@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (nonatomic,readonly) const ChartProjectedBoundsSpaces* projectedBounds; 
@property (nonatomic,readonly) BOOL hasProjectedBounds; 
+(id)propertiesThatInvalidateLayout;
+(id)p_propertiesThatResetSeriesStorage;
+(id)p_propertiesThatResetSceneProperties;
+(void)upgradeSceneDepthSettingsForChartInfo:(id)arg1 hasConstantDepth:(BOOL)arg2 willModifyBlock:(/*^block*/id)arg3 ;
+(id)p_allScaleProperties;
+(id)p_propertiesThatInvalidateShadows;
-(id)containingViewportVector;
-(void)setLayoutSettings:(SCD_Struct_TS478)arg1 ;
-(const ChartProjectedBoundsSpaces*)projectedBounds;
-(id)infoChartScale;
-(id)initWithChartInfo:(id)arg1 ;
-(CGRect)boundsForResize;
-(void)layoutForResizingSize:(CGSize)arg1 ;
-(id)p_layoutTree;
-(void)p_ensureValidForInwardLayout;
-(void)setSeriesIndexedPieWedgeExplosions:(id)arg1 ;
-(BOOL)p_shouldClearSceneForLayoutSettings:(SCD_Struct_TS478)arg1 ;
-(TSCH3DChartSceneAreaLayoutItem *)areaItem;
-(void)p_resetSceneProperties;
-(BOOL)hasProjectedBounds;
-(void)p_resetSeriesStorage;
-(void)modelInvalidated:(id)arg1 ;
-(void)dealloc;
-(TSCH3DScene *)scene;
@end

