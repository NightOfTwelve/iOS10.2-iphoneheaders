/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEORouteHypothesizer, NSObject;

@interface GEORouteHypothesizerDelayer : NSObject {

	CFBinaryHeapRef _minHeap;
	GEORouteHypothesizer* _nextHypothesizer;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(void)checkin;
-(id)init;
-(void)dealloc;
-(void)_startValidHypothesizers;
-(void)_setNextHypothesizer:(id)arg1 ;
-(void)delayStartOfHypothesizer:(id)arg1 ;
@end
