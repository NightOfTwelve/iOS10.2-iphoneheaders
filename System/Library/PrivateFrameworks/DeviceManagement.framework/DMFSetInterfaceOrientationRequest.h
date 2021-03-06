/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface DMFSetInterfaceOrientationRequest : CATTaskRequest {

	BOOL _lockOrientation;
	long long _interfaceOrientation;

}

@property (assign,nonatomic) BOOL lockOrientation;                        //@synthesize lockOrientation=_lockOrientation - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)lockOrientation;
-(void)setLockOrientation:(BOOL)arg1 ;
@end

