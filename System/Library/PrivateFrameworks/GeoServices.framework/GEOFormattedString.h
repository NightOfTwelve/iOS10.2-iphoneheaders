/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormattedString.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSMutableArray;

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {

	NSMutableArray* _formatArguments;
	NSMutableArray* _formatStrings;
	NSMutableArray* _separators;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * formatStrings; 
@property (nonatomic,readonly) NSArray * formatTokens; 
@property (nonatomic,readonly) NSArray * separators; 
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,retain) NSMutableArray * formatStrings;                //@synthesize formatStrings=_formatStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * formatArguments;              //@synthesize formatArguments=_formatArguments - In the implementation block
@property (nonatomic,retain) NSMutableArray * separators;                   //@synthesize separators=_separators - In the implementation block
+(Class)formatStringType;
+(Class)formatArgumentType;
+(Class)separatorType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)formatString;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearFormatStrings;
-(void)addFormatString:(id)arg1 ;
-(unsigned long long)formatStringsCount;
-(id)formatStringAtIndex:(unsigned long long)arg1 ;
-(void)clearFormatArguments;
-(void)addFormatArgument:(id)arg1 ;
-(unsigned long long)formatArgumentsCount;
-(id)formatArgumentAtIndex:(unsigned long long)arg1 ;
-(void)clearSeparators;
-(void)addSeparator:(id)arg1 ;
-(unsigned long long)separatorsCount;
-(id)separatorAtIndex:(unsigned long long)arg1 ;
-(NSArray *)formatStrings;
-(void)setFormatStrings:(NSArray *)arg1 ;
-(NSMutableArray *)formatArguments;
-(void)setFormatArguments:(NSMutableArray *)arg1 ;
-(NSArray *)separators;
-(void)setSeparators:(NSArray *)arg1 ;
-(NSArray *)formatTokens;
@end

