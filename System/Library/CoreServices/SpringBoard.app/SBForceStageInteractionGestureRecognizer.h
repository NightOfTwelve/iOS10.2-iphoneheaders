/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/UIInteractionProgressObserver.h>

@class UIForceStageInteractionProgress, NSString;

@interface SBForceStageInteractionGestureRecognizer : UIGestureRecognizer <UIInteractionProgressObserver> {

	BOOL _receivedFirstInteractionProgressUpdate;
	UIForceStageInteractionProgress* _forceStageInteractionProgress;

}

@property (nonatomic,readonly) UIForceStageInteractionProgress * forceStageInteractionProgress;              //@synthesize forceStageInteractionProgress=_forceStageInteractionProgress - In the implementation block
@property (nonatomic,readonly) double interactionProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIForceStageInteractionProgress *)forceStageInteractionProgress;
-(id)initWithForceStageInteractionProgress:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(double)interactionProgress;
@end
