/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SATimerObject, CADisplayLink, TimerSnippetTimeView;

@interface MobileTimerAssistantTimerSnippetCell : SiriUIContentCollectionViewCell {

	SATimerObject* _timer;
	CADisplayLink* _displayLink;
	BOOL _stale;
	BOOL _deviceTimer;
	TimerSnippetTimeView* _timeView;

}

@property (nonatomic,retain) SATimerObject * timer;              //@synthesize timer=_timer - In the implementation block
-(BOOL)isDeviceTimer;
-(void)reloadTimerState;
-(void)handleTimerStateChanged;
-(void)markStale;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToSuperview;
-(id)reuseIdentifier;
-(SATimerObject *)timer;
-(void)setTimer:(SATimerObject *)arg1 ;
-(BOOL)isStale;
-(void)updateDisplay;
@end
