/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, CAShapeLayer;

@interface CMKPanoramaArrowView : UIView {

	UIImageView* _arrowHead;
	UIView* _arrowTail;
	CAShapeLayer* _arrowTailPiecesLayer;
	CGPathRef _currentTailPiecesPath;
	CGRect _arrowTailRect;
	double _currentNormalizedSpeed;
	double _tailBiggestDelta;
	double _tailBigDelta;
	double _tailMediumDelta;
	double _tailSmallDelta;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)resetArrow;
-(void)animateArrowSpeedWithNormalizedSpeed:(double)arg1 duration:(double)arg2 ;
-(void)_updateTailWithAnimationDuration:(double)arg1 ;
-(CGPathRef)_newTailPiecesPathOfWidth:(double*)arg1 ;
@end

