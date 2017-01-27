/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, CMPocketStateDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSMutableArray;

@interface CMPocketStateManager : NSObject {

	NSObject*<OS_dispatch_source> fQueryTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;
	int fCachedState;
	Dispatcher* fDispatcher;
	double fMaxMonitorTime;
	NSMutableArray* fQueryBlocks;
	id<CMPocketStateDelegate> _delegate;

}

@property (assign,nonatomic) id<CMPocketStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(BOOL)isPocketStateAvailable;
-(id)init;
-(void)setDelegate:(id<CMPocketStateDelegate>)arg1 ;
-(void)dealloc;
-(id<CMPocketStateDelegate>)delegate;
-(void)onPocketStateUpdated:(int)arg1 ;
-(void)queryStateOntoQueue:(id)arg1 andMonitorFor:(double)arg2 withTimeout:(double)arg3 andHandler:(/*^block*/id)arg4 ;
-(void)addToAggdScalarWithName:(id)arg1 andScalar:(unsigned long long)arg2 ;
-(long long)translateInternalState:(int)arg1 ;
-(id)externalStateToString:(long long)arg1 ;
-(void)_disableDispatcher;
-(void)queryStateOntoQueue:(id)arg1 withTimeout:(double)arg2 andHandler:(/*^block*/id)arg3 ;
-(void)onNotification:(id)arg1 ;
@end
