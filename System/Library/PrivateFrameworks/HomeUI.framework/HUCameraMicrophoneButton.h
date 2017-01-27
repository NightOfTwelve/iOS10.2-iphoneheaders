/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIControl.h>

@class UIImage;

@interface HUCameraMicrophoneButton : UIControl {

	BOOL _on;
	UIImage* _microphoneImage;

}

@property (nonatomic,retain) UIImage * microphoneImage;              //@synthesize microphoneImage=_microphoneImage - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                    //@synthesize on=_on - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)_updateImage;
-(void)_updateAlpha;
-(void)setMicrophoneImage:(UIImage *)arg1 ;
-(UIImage *)microphoneImage;
-(id)_circleColor;
@end
