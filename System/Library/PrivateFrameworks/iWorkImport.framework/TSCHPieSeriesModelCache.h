/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSCHChartModel, TSCHChartInfo, TSCHChartSeries, NSString, TSWPParagraphStyle, TSDShadow, TSDStroke, TSDFill, TSCHChartAxis;

@interface TSCHPieSeriesModelCache : NSObject {

	TSCHChartModel* mChartModel;
	TSCHChartInfo* mChartInfo;
	BOOL mIsSingleCircleSpecialCase;
	TSCHChartSeries* mSingleCircleSeriesElement;
	unsigned long long mNumberOfSeries;
	double mTotalValue;
	TSCHChartSeries* mCurrentSeries;
	unsigned long long mCurrentSeriesIndex;
	double mCurrentSeriesAxisValue;
	double mCurrentSeriesPercentage;
	double mCurrentSeriesStartAngle;
	double mCurrentSeriesAngleSweep;
	BOOL mCurrentSeriesNullData;
	double mMidAngle;
	double mEndAngle;
	float mWedgeExplosion;
	float mLabelExplosion;
	float mEffectiveWedgeExplosion;
	float mEffectiveLabelExplosion;
	NSString* mLabelString;
	TSWPParagraphStyle* mParagraphStyle;
	TSDShadow* mSeriesShadow;
	TSDStroke* mSeriesStroke;
	TSDFill* mSeriesFill;
	double mSeriesOpacity;
	BOOL mGroupedShadow;
	TSCHChartAxis* mAxis;

}

@property (readonly) TSCHChartAxis * axis; 
@property (readonly) TSCHChartSeries * series; 
@property (readonly) unsigned long long seriesIndex; 
@property (readonly) double totalValue; 
@property (readonly) double seriesAxisValue; 
@property (readonly) double startAngle; 
@property (readonly) double midAngle; 
@property (readonly) double endAngle; 
@property (readonly) double percentage; 
@property (readonly) BOOL nullData; 
@property (readonly) float wedgeExplosion; 
@property (readonly) float labelExplosion; 
@property (readonly) float effectiveWedgeExplosion; 
@property (readonly) float effectiveLabelExplosion; 
@property (readonly) BOOL shouldRenderLabel; 
@property (readonly) NSString * labelString; 
@property (readonly) TSWPParagraphStyle * paragraphStyle; 
@property (readonly) TSDShadow * seriesShadow; 
@property (readonly) TSDStroke * seriesStroke; 
@property (readonly) TSDFill * seriesFill; 
@property (readonly) BOOL groupedShadow; 
@property (readonly) double seriesOpacity; 
-(double)midAngle;
-(BOOL)shouldRenderLabel;
-(float)effectiveLabelExplosion;
-(double)seriesAxisValue;
-(TSDFill *)seriesFill;
-(TSDShadow *)seriesShadow;
-(TSDStroke *)seriesStroke;
-(double)seriesOpacity;
-(float)effectiveWedgeExplosion;
-(BOOL)nullData;
-(id)initWithPrior:(id)arg1 orChartModel:(id)arg2 forSeries:(unsigned long long)arg3 ;
-(double)totalValue;
-(float)wedgeExplosion;
-(float)labelExplosion;
-(BOOL)groupedShadow;
-(id)init;
-(void)dealloc;
-(TSCHChartAxis *)axis;
-(double)startAngle;
-(NSString *)labelString;
-(TSCHChartSeries *)series;
-(double)percentage;
-(double)endAngle;
-(TSWPParagraphStyle *)paragraphStyle;
-(unsigned long long)seriesIndex;
@end

