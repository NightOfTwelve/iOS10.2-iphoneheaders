/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface AACloudKitDevicesListResponse : AAResponse {

	NSArray* _incompatibleDevices;
	NSArray* _needUpgradeDevices;
	NSArray* _incompatibleDeviceNames;
	NSArray* _needUpgradeDeviceNames;

}

@property (nonatomic,readonly) NSArray * incompatibleDevices;                  //@synthesize incompatibleDevices=_incompatibleDevices - In the implementation block
@property (nonatomic,readonly) NSArray * needUpgradeDevices;                   //@synthesize needUpgradeDevices=_needUpgradeDevices - In the implementation block
@property (nonatomic,readonly) NSArray * incompatibleDeviceNames;              //@synthesize incompatibleDeviceNames=_incompatibleDeviceNames - In the implementation block
@property (nonatomic,readonly) NSArray * needUpgradeDeviceNames;               //@synthesize needUpgradeDeviceNames=_needUpgradeDeviceNames - In the implementation block
-(NSArray *)incompatibleDevices;
-(NSArray *)needUpgradeDevices;
-(NSArray *)incompatibleDeviceNames;
-(NSArray *)needUpgradeDeviceNames;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

