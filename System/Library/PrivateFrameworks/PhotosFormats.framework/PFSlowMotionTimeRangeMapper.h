/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PFSlowMotionTimeRangeMapper : NSObject {

	NSMutableArray* _originalLengths;
	NSMutableArray* _scaledLengths;
	NSMutableArray* _scaledRegions;

}
-(id)init;
-(float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3 ;
-(void)addNextRange:(float)arg1 scaledLength:(float)arg2 ;
-(float)scaledTimeForOriginalTime:(float)arg1 ;
-(float)originalTimeForScaledTime:(float)arg1 ;
-(void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5 ;
-(void)enumerateScaledRegionsUsingBlock:(/*^block*/id)arg1 ;
@end

