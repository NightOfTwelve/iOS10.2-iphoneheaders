/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFHardwareBoosterInfo : NSObject <NSSecureCoding> {

	unsigned long long _siliconVersion;
	NSData* _staticConfig;
	NSData* _dynamicConfig;

}

@property (nonatomic,readonly) unsigned long long siliconVersion;              //@synthesize siliconVersion=_siliconVersion - In the implementation block
@property (nonatomic,readonly) NSData * staticConfig;                          //@synthesize staticConfig=_staticConfig - In the implementation block
@property (nonatomic,readonly) NSData * dynamicConfig;                         //@synthesize dynamicConfig=_dynamicConfig - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)siliconVersion;
-(NSData *)staticConfig;
-(NSData *)dynamicConfig;
@end
