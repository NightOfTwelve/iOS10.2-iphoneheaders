/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface KCellularPmicHwStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _activeDurMs;
	unsigned _durationMs;
	unsigned _gsmCa5ActiveDurMs;
	unsigned _highVoltActiveDurMs;
	unsigned _lowVoltActiveDurMs;
	unsigned _lteActiveDurMs;
	unsigned _midVoltActiveDurMs;
	unsigned _sleepDurMs;
	unsigned _sleepEntryCount;
	unsigned _tdscdmaActiveDurMs;
	unsigned _wcdmaActiveDurMs;
	SCD_Struct_KC49 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) unsigned durationMs;                       //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasSleepDurMs; 
@property (assign,nonatomic) unsigned sleepDurMs;                       //@synthesize sleepDurMs=_sleepDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasActiveDurMs; 
@property (assign,nonatomic) unsigned activeDurMs;                      //@synthesize activeDurMs=_activeDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasSleepEntryCount; 
@property (assign,nonatomic) unsigned sleepEntryCount;                  //@synthesize sleepEntryCount=_sleepEntryCount - In the implementation block
@property (assign,nonatomic) BOOL hasLowVoltActiveDurMs; 
@property (assign,nonatomic) unsigned lowVoltActiveDurMs;               //@synthesize lowVoltActiveDurMs=_lowVoltActiveDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasMidVoltActiveDurMs; 
@property (assign,nonatomic) unsigned midVoltActiveDurMs;               //@synthesize midVoltActiveDurMs=_midVoltActiveDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasHighVoltActiveDurMs; 
@property (assign,nonatomic) unsigned highVoltActiveDurMs;              //@synthesize highVoltActiveDurMs=_highVoltActiveDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasGsmCa5ActiveDurMs; 
@property (assign,nonatomic) unsigned gsmCa5ActiveDurMs;                //@synthesize gsmCa5ActiveDurMs=_gsmCa5ActiveDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasLteActiveDurMs; 
@property (assign,nonatomic) unsigned lteActiveDurMs;                   //@synthesize lteActiveDurMs=_lteActiveDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasWcdmaActiveDurMs; 
@property (assign,nonatomic) unsigned wcdmaActiveDurMs;                 //@synthesize wcdmaActiveDurMs=_wcdmaActiveDurMs - In the implementation block
@property (assign,nonatomic) BOOL hasTdscdmaActiveDurMs; 
@property (assign,nonatomic) unsigned tdscdmaActiveDurMs;               //@synthesize tdscdmaActiveDurMs=_tdscdmaActiveDurMs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setActiveDurMs:(unsigned)arg1 ;
-(void)setHasActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasActiveDurMs;
-(unsigned)activeDurMs;
-(void)setSleepDurMs:(unsigned)arg1 ;
-(void)setHasSleepDurMs:(BOOL)arg1 ;
-(BOOL)hasSleepDurMs;
-(void)setSleepEntryCount:(unsigned)arg1 ;
-(void)setHasSleepEntryCount:(BOOL)arg1 ;
-(BOOL)hasSleepEntryCount;
-(unsigned)sleepDurMs;
-(unsigned)sleepEntryCount;
-(void)setLowVoltActiveDurMs:(unsigned)arg1 ;
-(void)setHasLowVoltActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasLowVoltActiveDurMs;
-(void)setMidVoltActiveDurMs:(unsigned)arg1 ;
-(void)setHasMidVoltActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasMidVoltActiveDurMs;
-(void)setHighVoltActiveDurMs:(unsigned)arg1 ;
-(void)setHasHighVoltActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasHighVoltActiveDurMs;
-(void)setGsmCa5ActiveDurMs:(unsigned)arg1 ;
-(void)setHasGsmCa5ActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasGsmCa5ActiveDurMs;
-(void)setLteActiveDurMs:(unsigned)arg1 ;
-(void)setHasLteActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasLteActiveDurMs;
-(void)setWcdmaActiveDurMs:(unsigned)arg1 ;
-(void)setHasWcdmaActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasWcdmaActiveDurMs;
-(void)setTdscdmaActiveDurMs:(unsigned)arg1 ;
-(void)setHasTdscdmaActiveDurMs:(BOOL)arg1 ;
-(BOOL)hasTdscdmaActiveDurMs;
-(unsigned)lowVoltActiveDurMs;
-(unsigned)midVoltActiveDurMs;
-(unsigned)highVoltActiveDurMs;
-(unsigned)gsmCa5ActiveDurMs;
-(unsigned)lteActiveDurMs;
-(unsigned)wcdmaActiveDurMs;
-(unsigned)tdscdmaActiveDurMs;
-(void)setDurationMs:(unsigned)arg1 ;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(unsigned)durationMs;
@end

