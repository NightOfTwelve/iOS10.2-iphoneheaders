/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {

	double _julianDay;
	CAARiseTransitSetDetails _riseTransitSet;
	NSDate* _sunrise;
	NSDate* _transit;
	NSDate* _sunset;

}

@property (nonatomic,readonly) double julianDay;                                     //@synthesize julianDay=_julianDay - In the implementation block
@property (nonatomic,readonly) CAARiseTransitSetDetails riseTransitSet;              //@synthesize riseTransitSet=_riseTransitSet - In the implementation block
@property (nonatomic,readonly) NSDate * sunrise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * sunset; 
-(void)dealloc;
-(NSDate *)transit;
-(id)initWithJulianDay:(double)arg1 riseTransitSet:(CAARiseTransitSetDetails)arg2 ;
-(id)_dateFromOffset:(double)arg1 ofJulianDay:(double)arg2 ;
-(NSDate *)sunrise;
-(NSDate *)sunset;
-(double)julianDay;
-(CAARiseTransitSetDetails)riseTransitSet;
@end

