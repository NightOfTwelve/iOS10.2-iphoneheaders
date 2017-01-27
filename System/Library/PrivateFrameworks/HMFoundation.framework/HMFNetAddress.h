/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HMFoundation/HMFoundation-Structs.h>
@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : NSObject {

	HMFNetAddressInternal* _internal;

}

@property (nonatomic,readonly) HMFNetAddressInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) unsigned long long addressFamily; 
@property (nonatomic,copy,readonly) NSString * addressString; 
+(id)shortDescription;
+(id)localAddress;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)shortDescription;
-(NSString *)addressString;
-(unsigned long long)addressFamily;
-(HMFNetAddressInternal *)internal;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
-(id)initWithHostname:(id)arg1 ;
@end
