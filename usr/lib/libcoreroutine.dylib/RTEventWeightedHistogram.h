/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEventHistogramBase.h>
#import <libobjc.A.dylib/RTEventHistogram.h>

@class NSMutableDictionary, NSString;

@interface RTEventWeightedHistogram : RTEventHistogramBase <RTEventHistogram> {

	NSMutableDictionary* _weightedEventModel;

}

@property (nonatomic,retain) NSMutableDictionary * weightedEventModel;              //@synthesize weightedEventModel=_weightedEventModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clear;
-(void)addEventId:(id)arg1 ;
-(id)allEventIds;
-(double)weightForEventId:(id)arg1 ;
-(void)addEvent:(id)arg1 weight:(double)arg2 ;
-(void)addEventId:(id)arg1 weight:(double)arg2 ;
-(void)scaleWeights:(double)arg1 ;
-(NSMutableDictionary *)weightedEventModel;
-(void)setWeightedEventModel:(NSMutableDictionary *)arg1 ;
-(void)addEvent:(id)arg1 ;
@end

