/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <itunesstored/itunesstored-Structs.h>
@class NSObject, NSMutableDictionary;

@interface DistributedNotificationCenter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _observers;

}
+(void)observeXPCServer:(id)arg1 ;
+(void)registerObserverWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)unregisterObserverWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)defaultCenter;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_addObserverWithPortName:(id)arg1 notificationName:(id)arg2 ;
-(void)_removeObserverWithPortName:(id)arg1 notificationName:(id)arg2 ;
-(void)_saveRegisteredPortNames;
-(id)init;
-(void)dealloc;
-(void)postNotificationName:(CFStringRef)arg1 ;
@end
