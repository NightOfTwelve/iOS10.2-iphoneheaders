/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIEventFetcherSink.h>

@class UIEventEnvironment, UIEventFetcher;

@interface UIEventDispatcher : NSObject <UIEventFetcherSink> {

	UIEventEnvironment* _mainEnvironment;
	UIEventFetcher* _eventFetcher;
	CFRunLoopSourceRef _handleEventQueueRunLoopSource;
	CFRunLoopSourceRef _collectHIDEventsRunLoopSource;
	CFRunLoopRef _runLoop;

}

@property (nonatomic,retain) UIEventEnvironment * mainEnvironment;              //@synthesize mainEnvironment=_mainEnvironment - In the implementation block
-(void)dealloc;
-(id)initWithApplication:(id)arg1 ;
-(void)_installEventRunLoopSources:(CFRunLoopRef)arg1 ;
-(UIEventEnvironment *)mainEnvironment;
-(void)eventFetcherDidReceiveEvents:(id)arg1 ;
-(void)signalNextDelivery;
-(void)setMainEnvironment:(UIEventEnvironment *)arg1 ;
@end

