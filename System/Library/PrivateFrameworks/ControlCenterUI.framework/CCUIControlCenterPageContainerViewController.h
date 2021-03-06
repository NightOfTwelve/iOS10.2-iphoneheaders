/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CCUIControlCenterPageContentViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterPagePlatterViewDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterObserver.h>

@protocol CCUIControlCenterPageContentProviding, CCUIControlCenterPageContainerViewControllerDelegate;
@class UIViewController, NSMutableSet, NSString;

@interface CCUIControlCenterPageContainerViewController : UIViewController <CCUIControlCenterPageContentViewControllerDelegate, CCUIControlCenterPagePlatterViewDelegate, CCUIControlCenterObserver> {

	UIViewController*<CCUIControlCenterPageContentProviding> _contentViewController;
	double _revealPercentage;
	NSMutableSet* _punchOutMaskCachingSuppressionReasons;
	id<CCUIControlCenterPageContainerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) id<CCUIControlCenterPageContainerViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIControlCenterPageContentProviding> contentViewController; 
@property (assign,nonatomic) double revealPercentage; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldSuppressPunchOutMaskCaching; 
-(void)setDelegate:(id<CCUIControlCenterPageContainerViewControllerDelegate>)arg1 ;
-(id<CCUIControlCenterPageContainerViewControllerDelegate>)delegate;
-(void)loadView;
-(UIViewController*<CCUIControlCenterPageContentProviding>)contentViewController;
-(void)viewDidLoad;
-(long long)layoutStyle;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(double)revealPercentage;
-(void)setRevealPercentage:(double)arg1 ;
-(id)initWithContentViewController:(id)arg1 delegate:(id)arg2 ;
-(void)contentViewControllerWantsDismissal:(id)arg1 ;
-(id)_pagePlatterView;
-(BOOL)shouldSuppressPunchOutMaskCaching;
-(id)_platterView;
-(id)controlCenterSystemAgent;
-(void)visibilityPreferenceChangedForContentViewController:(id)arg1 ;
-(void)beginSuppressingPunchOutMaskCachingForReason:(id)arg1 ;
-(void)endSuppressingPunchOutMaskCachingForReason:(id)arg1 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillFinishTransitionOpen:(BOOL)arg1 withDuration:(double)arg2 ;
@end

