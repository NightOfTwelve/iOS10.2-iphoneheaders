/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBModalViewControllerStackDelegate;
@class UIViewController, NSMutableArray, _SBModalViewControllerStackTransition, NSArray;

@interface SBModalViewControllerStack : NSObject {

	id<SBModalViewControllerStackDelegate> _delegate;
	UIViewController* _presentingViewController;
	NSMutableArray* _viewControllerStack;
	_SBModalViewControllerStackTransition* _currentTransition;
	NSMutableArray* _pendingTransitions;

}

@property (assign,nonatomic,__weak) id<SBModalViewControllerStackDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * viewControllers; 
@property (nonatomic,readonly) UIViewController * topViewController; 
-(void)addViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queuePendingTransition:(id)arg1 ;
-(void)_performPendingTransitionIfNecessary;
-(void)_removePendingTransition:(id)arg1 forSuccess:(BOOL)arg2 ;
-(void)_addPendingTransition:(id)arg1 ;
-(id)_popNextPendingTransition;
-(void)_setCurrentTransition:(id)arg1 ;
-(void)_addViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_noteWillPresentViewController:(id)arg1 ;
-(void)_noteDidPresentViewController:(id)arg1 ;
-(void)_noteWillDismissViewController:(id)arg1 ;
-(void)_noteDidDismissViewController:(id)arg1 ;
-(void)removeViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<SBModalViewControllerStackDelegate>)arg1 ;
-(id<SBModalViewControllerStackDelegate>)delegate;
-(UIViewController *)topViewController;
-(NSArray *)viewControllers;
-(id)initWithPresentingViewController:(id)arg1 ;
@end

