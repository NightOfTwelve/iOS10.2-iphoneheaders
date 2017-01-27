/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIMainScreenAnimationController.h>

@interface SBUIPresentSwitcherAnimationController : SBUIMainScreenAnimationController {

	BOOL _isInteractive;

}
-(id)_getTransitionWindow;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(void)endInteractionWithCommitment:(BOOL)arg1 ;
-(BOOL)canTransitionWithTranslation;
-(id)initWithTransitionContextProvider:(id)arg1 interactive:(BOOL)arg2 ;
-(void)endTransition:(BOOL)arg1 withSuccess:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)animationSettings;
-(void)_startAnimation;
@end
