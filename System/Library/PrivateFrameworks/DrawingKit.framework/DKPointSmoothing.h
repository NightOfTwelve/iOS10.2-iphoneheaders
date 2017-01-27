/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIPointFIFO, UIBoxcarFilterPointFIFO, UIQuadCurvePointFIFO;

@interface DKPointSmoothing : NSObject {

	unsigned long long _width;
	float _spacing;
	float _unitScale;
	BOOL _emitInterpolatedPoints;
	UIPointFIFO* _strokeFIFO;
	UIBoxcarFilterPointFIFO* _boxcarFIFO;
	UIQuadCurvePointFIFO* _interpolatingFIFO;

}

@property (nonatomic,retain) UIPointFIFO * strokeFIFO;                              //@synthesize strokeFIFO=_strokeFIFO - In the implementation block
@property (nonatomic,retain) UIBoxcarFilterPointFIFO * boxcarFIFO;                  //@synthesize boxcarFIFO=_boxcarFIFO - In the implementation block
@property (nonatomic,retain) UIQuadCurvePointFIFO * interpolatingFIFO;              //@synthesize interpolatingFIFO=_interpolatingFIFO - In the implementation block
@property (assign,nonatomic) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                                         //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) float unitScale;                                       //@synthesize unitScale=_unitScale - In the implementation block
@property (assign,nonatomic) BOOL emitInterpolatedPoints;                           //@synthesize emitInterpolatedPoints=_emitInterpolatedPoints - In the implementation block
@property (nonatomic,copy) id emissionHandler; 
+(6)interpolateFromPoint:(float)arg1 ;
+(void)_interpolateFromPoint:(float)arg1 toPoint:(/*^block*/id)arg2 ;
-(float)unitScale;
-(BOOL)emitInterpolatedPoints;
-(id)init;
-(void)flush;
-(unsigned long long)width;
-(void)addPoint:;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)clear;
-(void)setSpacing:(float)arg1 ;
-(float)spacing;
-(void)setInterpolatingFIFO:(UIQuadCurvePointFIFO *)arg1 ;
-(UIQuadCurvePointFIFO *)interpolatingFIFO;
-(void)setEmissionHandler:(id)arg1 ;
-(void)setStrokeFIFO:(UIPointFIFO *)arg1 ;
-(UIPointFIFO *)strokeFIFO;
-(void)emitPoint:;
-(id)emissionHandler;
-(void)setEmitInterpolatedPoints:(BOOL)arg1 ;
-(void)setUnitScale:(float)arg1 ;
-(void)setBoxcarFIFO:(UIBoxcarFilterPointFIFO *)arg1 ;
-(UIBoxcarFilterPointFIFO *)boxcarFIFO;
-(id)initWithWidth:(unsigned long long)arg1 spacing:(float)arg2 ;
@end
