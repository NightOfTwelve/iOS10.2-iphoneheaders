/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/log/liblog_companionsync.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <liblog_companionsync.dylib/liblog_companionsync.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SYLogDeviceState : PBCodable <NSCopying> {

	NSString* _buildVersion;
	NSString* _deviceClass;
	NSString* _identifier;
	unsigned _state;
	SCD_Struct_SY3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceClass; 
@property (nonatomic,retain) NSString * deviceClass;               //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                       //@synthesize state=_state - In the implementation block
-(BOOL)hasBuildVersion;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setDeviceClass:(NSString *)arg1 ;
-(BOOL)hasDeviceClass;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSString *)deviceClass;
@end

