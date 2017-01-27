/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPRouteInformationSource.h>

@class GEOComposedWaypoint, NSString;

@interface MSPRidesharingInformationSource : NSObject <MSPRouteInformationSource> {

	GEOComposedWaypoint* _startWaypoint;
	GEOComposedWaypoint* _endWaypoint;

}

@property (getter=_startWaypoint,nonatomic,readonly) GEOComposedWaypoint * startWaypoint;              //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (getter=_endWaypoint,nonatomic,readonly) GEOComposedWaypoint * endWaypoint;                  //@synthesize endWaypoint=_endWaypoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_endWaypoint;
-(id)_startWaypoint;
-(id)ifGEOStorageRouteRequestStorage;
-(id)ifRidesharingInformationSource;
-(id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2 ;
@end
