/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBPersonalizationBucket : PBCodable <NSCopying> {

	long long _maximum;
	long long _minimum;
	long long _treatmentId;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasMinimum; 
@property (assign,nonatomic) long long minimum;                  //@synthesize minimum=_minimum - In the implementation block
@property (assign,nonatomic) BOOL hasMaximum; 
@property (assign,nonatomic) long long maximum;                  //@synthesize maximum=_maximum - In the implementation block
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (assign,nonatomic) long long treatmentId;              //@synthesize treatmentId=_treatmentId - In the implementation block
-(void)setMinimum:(long long)arg1 ;
-(void)setMaximum:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTreatmentId;
-(long long)treatmentId;
-(long long)minimum;
-(long long)maximum;
-(void)setHasMinimum:(BOOL)arg1 ;
-(BOOL)hasMinimum;
-(void)setHasMaximum:(BOOL)arg1 ;
-(BOOL)hasMaximum;
-(void)setTreatmentId:(long long)arg1 ;
-(void)setHasTreatmentId:(BOOL)arg1 ;
@end
