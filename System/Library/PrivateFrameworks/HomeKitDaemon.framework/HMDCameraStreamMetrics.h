/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDCameraMetricsStreamLogEvent, NSError;

@interface HMDCameraStreamMetrics : NSObject {

	HMDCameraMetricsStreamLogEvent* _cameraStreamMetricsLogEvent;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCameraMetricsStreamLogEvent * cameraStreamMetricsLogEvent;              //@synthesize cameraStreamMetricsLogEvent=_cameraStreamMetricsLogEvent - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 ;
-(HMDCameraMetricsStreamLogEvent *)cameraStreamMetricsLogEvent;
@end

