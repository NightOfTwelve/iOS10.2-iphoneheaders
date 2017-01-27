/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLObservation.h>

@class NSUUID, NSString, MPImageDescriptor, NSData;

@interface CVMLImageprintObservation : CVMLObservation {

	NSUUID* _identifier;
	NSString* _imageprintVersion;
	MPImageDescriptor* _imageprintDescriptor;
	NSString* _imageprintType;

}

@property (retain) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (retain) MPImageDescriptor * imageprintDescriptor;              //@synthesize imageprintDescriptor=_imageprintDescriptor - In the implementation block
@property (retain) NSString * imageprintType;                             //@synthesize imageprintType=_imageprintType - In the implementation block
@property (retain) NSString * imageprintVersion;                          //@synthesize imageprintVersion=_imageprintVersion - In the implementation block
@property (readonly) NSData * rawImageprintDescriptor; 
+(id)calculateDistanceBetweenImageprint1:(id)arg1 andImageprint2:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithData:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)serialize;
-(id)calculateDistanceFromImageprint:(id)arg1 ;
-(MPImageDescriptor *)imageprintDescriptor;
-(id)calculateDistanceFromImageprintObservation:(id)arg1 ;
-(id)isImageprintValid;
-(id)initWithRawImageprintDescriptor:(id)arg1 ;
-(NSData *)rawImageprintDescriptor;
-(NSString *)imageprintVersion;
-(void)setImageprintVersion:(NSString *)arg1 ;
-(void)setImageprintDescriptor:(MPImageDescriptor *)arg1 ;
-(NSString *)imageprintType;
-(void)setImageprintType:(NSString *)arg1 ;
@end
