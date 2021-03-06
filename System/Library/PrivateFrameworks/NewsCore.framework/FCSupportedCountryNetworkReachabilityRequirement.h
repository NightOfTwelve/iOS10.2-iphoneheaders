/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNetworkReachabilityRequirement.h>

@protocol FCNetworkReachabilityRequirementObserving;
@class NSString;

@interface FCSupportedCountryNetworkReachabilityRequirement : NSObject <FCNetworkReachabilityRequirement> {

	BOOL _satisfied;
	id<FCNetworkReachabilityRequirementObserving> observer;

}

@property (assign,getter=isSatisfied,nonatomic) BOOL satisfied;                                          //@synthesize satisfied=_satisfied - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long offlineReason; 
@property (assign,nonatomic,__weak) id<FCNetworkReachabilityRequirementObserving> observer; 
-(id)init;
-(void)_update;
-(void)setObserver:(id<FCNetworkReachabilityRequirementObserving>)arg1 ;
-(id<FCNetworkReachabilityRequirementObserving>)observer;
-(long long)offlineReason;
-(BOOL)isSatisfied;
-(void)setSatisfied:(BOOL)arg1 ;
@end

