/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface DDScanServerDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _scanners;
	BOOL _tearDownRequested;

}
-(id)init;
-(void)dealloc;
-(id)scannerListForType:(int)arg1 ;
-(void)scannerType:(int)arg1 sync:(BOOL)arg2 runTask:(/*^block*/id)arg3 ;
-(void)recycleScanner:(id)arg1 fromList:(id)arg2 ;
@end

