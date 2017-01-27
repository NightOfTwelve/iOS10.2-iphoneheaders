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

@class NSString;

@interface NTPBWidgetConfig : PBCodable <NSCopying> {

	double _alternativeButlerWidgetConfigPopulationCeiling;
	double _alternativeButlerWidgetConfigPopulationFloor;
	long long _backgroundMinimumUpdateInterval;
	long long _forYouBackgroundMinimumUpdateInterval;
	long long _forYouCutoffTime;
	long long _forYouForegroundMinimumUpdateInterval;
	long long _foregroundMinimumUpdateInterval;
	double _parsecPopulationCeiling;
	double _parsecPopulationFloor;
	long long _parsecTrendingCutoffTime;
	long long _topStoriesBackgroundMinimumUpdateInterval;
	long long _topStoriesCutoffTime;
	long long _topStoriesForegroundMinimumUpdateInterval;
	long long _trendingBackgroundMinimumUpdateInterval;
	long long _trendingCutoffTime;
	long long _trendingForegroundMinimumUpdateInterval;
	unsigned _enabledSections;
	NSString* _identifier;
	SCD_Struct_NT13 _has;

}

@property (assign,nonatomic) BOOL hasTopStoriesCutoffTime; 
@property (assign,nonatomic) long long topStoriesCutoffTime;                                      //@synthesize topStoriesCutoffTime=_topStoriesCutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasForYouCutoffTime; 
@property (assign,nonatomic) long long forYouCutoffTime;                                          //@synthesize forYouCutoffTime=_forYouCutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingCutoffTime; 
@property (assign,nonatomic) long long trendingCutoffTime;                                        //@synthesize trendingCutoffTime=_trendingCutoffTime - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledSections; 
@property (assign,nonatomic) unsigned enabledSections;                                            //@synthesize enabledSections=_enabledSections - In the implementation block
@property (assign,nonatomic) BOOL hasParsecPopulationFloor; 
@property (assign,nonatomic) double parsecPopulationFloor;                                        //@synthesize parsecPopulationFloor=_parsecPopulationFloor - In the implementation block
@property (assign,nonatomic) BOOL hasParsecPopulationCeiling; 
@property (assign,nonatomic) double parsecPopulationCeiling;                                      //@synthesize parsecPopulationCeiling=_parsecPopulationCeiling - In the implementation block
@property (assign,nonatomic) BOOL hasForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long foregroundMinimumUpdateInterval;                           //@synthesize foregroundMinimumUpdateInterval=_foregroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long backgroundMinimumUpdateInterval;                           //@synthesize backgroundMinimumUpdateInterval=_backgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoriesForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long topStoriesForegroundMinimumUpdateInterval;                 //@synthesize topStoriesForegroundMinimumUpdateInterval=_topStoriesForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoriesBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long topStoriesBackgroundMinimumUpdateInterval;                 //@synthesize topStoriesBackgroundMinimumUpdateInterval=_topStoriesBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasForYouForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long forYouForegroundMinimumUpdateInterval;                     //@synthesize forYouForegroundMinimumUpdateInterval=_forYouForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasForYouBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long forYouBackgroundMinimumUpdateInterval;                     //@synthesize forYouBackgroundMinimumUpdateInterval=_forYouBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingForegroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long trendingForegroundMinimumUpdateInterval;                   //@synthesize trendingForegroundMinimumUpdateInterval=_trendingForegroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTrendingBackgroundMinimumUpdateInterval; 
@property (assign,nonatomic) long long trendingBackgroundMinimumUpdateInterval;                   //@synthesize trendingBackgroundMinimumUpdateInterval=_trendingBackgroundMinimumUpdateInterval - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationFloor; 
@property (assign,nonatomic) double alternativeButlerWidgetConfigPopulationFloor;                 //@synthesize alternativeButlerWidgetConfigPopulationFloor=_alternativeButlerWidgetConfigPopulationFloor - In the implementation block
@property (assign,nonatomic) BOOL hasAlternativeButlerWidgetConfigPopulationCeiling; 
@property (assign,nonatomic) double alternativeButlerWidgetConfigPopulationCeiling;               //@synthesize alternativeButlerWidgetConfigPopulationCeiling=_alternativeButlerWidgetConfigPopulationCeiling - In the implementation block
@property (assign,nonatomic) BOOL hasParsecTrendingCutoffTime; 
@property (assign,nonatomic) long long parsecTrendingCutoffTime;                                  //@synthesize parsecTrendingCutoffTime=_parsecTrendingCutoffTime - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setForYouCutoffTime:(long long)arg1 ;
-(long long)forYouCutoffTime;
-(BOOL)hasParsecPopulationFloor;
-(double)parsecPopulationFloor;
-(BOOL)hasParsecPopulationCeiling;
-(double)parsecPopulationCeiling;
-(long long)topStoriesCutoffTime;
-(void)setTopStoriesCutoffTime:(long long)arg1 ;
-(void)setHasTopStoriesCutoffTime:(BOOL)arg1 ;
-(BOOL)hasTopStoriesCutoffTime;
-(void)setHasForYouCutoffTime:(BOOL)arg1 ;
-(BOOL)hasForYouCutoffTime;
-(long long)trendingCutoffTime;
-(void)setTrendingCutoffTime:(long long)arg1 ;
-(void)setHasTrendingCutoffTime:(BOOL)arg1 ;
-(BOOL)hasTrendingCutoffTime;
-(unsigned)enabledSections;
-(void)setEnabledSections:(unsigned)arg1 ;
-(void)setHasEnabledSections:(BOOL)arg1 ;
-(BOOL)hasEnabledSections;
-(void)setParsecPopulationFloor:(double)arg1 ;
-(void)setHasParsecPopulationFloor:(BOOL)arg1 ;
-(void)setParsecPopulationCeiling:(double)arg1 ;
-(void)setHasParsecPopulationCeiling:(BOOL)arg1 ;
-(long long)foregroundMinimumUpdateInterval;
-(void)setForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasForegroundMinimumUpdateInterval;
-(long long)backgroundMinimumUpdateInterval;
-(void)setBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasBackgroundMinimumUpdateInterval;
-(long long)topStoriesForegroundMinimumUpdateInterval;
-(void)setTopStoriesForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTopStoriesForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTopStoriesForegroundMinimumUpdateInterval;
-(long long)topStoriesBackgroundMinimumUpdateInterval;
-(void)setTopStoriesBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTopStoriesBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTopStoriesBackgroundMinimumUpdateInterval;
-(long long)forYouForegroundMinimumUpdateInterval;
-(void)setForYouForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasForYouForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasForYouForegroundMinimumUpdateInterval;
-(long long)forYouBackgroundMinimumUpdateInterval;
-(void)setForYouBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasForYouBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasForYouBackgroundMinimumUpdateInterval;
-(long long)trendingForegroundMinimumUpdateInterval;
-(void)setTrendingForegroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTrendingForegroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTrendingForegroundMinimumUpdateInterval;
-(long long)trendingBackgroundMinimumUpdateInterval;
-(void)setTrendingBackgroundMinimumUpdateInterval:(long long)arg1 ;
-(void)setHasTrendingBackgroundMinimumUpdateInterval:(BOOL)arg1 ;
-(BOOL)hasTrendingBackgroundMinimumUpdateInterval;
-(double)alternativeButlerWidgetConfigPopulationFloor;
-(void)setAlternativeButlerWidgetConfigPopulationFloor:(double)arg1 ;
-(void)setHasAlternativeButlerWidgetConfigPopulationFloor:(BOOL)arg1 ;
-(BOOL)hasAlternativeButlerWidgetConfigPopulationFloor;
-(double)alternativeButlerWidgetConfigPopulationCeiling;
-(void)setAlternativeButlerWidgetConfigPopulationCeiling:(double)arg1 ;
-(void)setHasAlternativeButlerWidgetConfigPopulationCeiling:(BOOL)arg1 ;
-(BOOL)hasAlternativeButlerWidgetConfigPopulationCeiling;
-(long long)parsecTrendingCutoffTime;
-(void)setParsecTrendingCutoffTime:(long long)arg1 ;
-(void)setHasParsecTrendingCutoffTime:(BOOL)arg1 ;
-(BOOL)hasParsecTrendingCutoffTime;
@end
