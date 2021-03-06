/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FUFlightFactory.h>
#import <libobjc.A.dylib/FUFlightFactoryInternalProtocol.h>

@class NSString;

@interface FUFlightFactory_FlightStats : FUFlightFactory <FUFlightFactoryInternalProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)statusFromString:(id)arg1 ;
+(void)loadFlightDataWithFlightNumber:(long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)extractTimeGate:(id)arg1 runwayTime:(id)arg2 ;
+(void)extractTimeForFlightStep:(id)arg1 fromTimes:(id)arg2 departure:(BOOL)arg3 ;
+(void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)parseFlightData:(id)arg1 withError:(id*)arg2 ;
@end

