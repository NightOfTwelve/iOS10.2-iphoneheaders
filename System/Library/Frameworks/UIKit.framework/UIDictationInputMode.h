/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardInputMode.h>

@class UITouch, UIKeyboardInputMode;

@interface UIDictationInputMode : UIKeyboardInputMode {

	UITouch* _triggeringTouch;
	UIKeyboardInputMode* _inputModeThatInvokedDictation;

}

@property (nonatomic,retain) UITouch * triggeringTouch;                                        //@synthesize triggeringTouch=_triggeringTouch - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * inputModeThatInvokedDictation;              //@synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass; 
+(BOOL)currentInputModeSupportsDictation;
-(void)dealloc;
-(void)setTriggeringTouch:(UITouch *)arg1 ;
-(UIKeyboardInputMode *)inputModeThatInvokedDictation;
-(Class)viewControllerClass;
-(UITouch *)triggeringTouch;
-(void)setInputModeThatInvokedDictation:(UIKeyboardInputMode *)arg1 ;
@end

