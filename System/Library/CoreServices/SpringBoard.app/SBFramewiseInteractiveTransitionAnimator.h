/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBViewControllerInteractiveAnimatedTransitioning.h>

@protocol SBFramewiseInteractiveTransitionAnimatorDelegate;
@class NSString;

@interface SBFramewiseInteractiveTransitionAnimator : NSObject <SBViewControllerInteractiveAnimatedTransitioning> {

	double _percentComplete;
	BOOL _presenting;
	id<SBFramewiseInteractiveTransitionAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBFramewiseInteractiveTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                               //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,readonly) double percentVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)supportsRestarting;
-(double)percentVisible;
-(void)setDelegate:(id<SBFramewiseInteractiveTransitionAnimatorDelegate>)arg1 ;
-(id<SBFramewiseInteractiveTransitionAnimatorDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)percentComplete;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)isPresenting;
@end
