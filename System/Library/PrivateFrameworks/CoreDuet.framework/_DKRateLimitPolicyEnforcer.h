/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _DKRateLimitPolicyEnforcer : NSObject {

	NSDictionary* _eventStreamRateLimiters;

}
+(id)rateLimitPolicyEnforcer;
-(id)init;
-(id)filterObjectsByEnforcingRateLimit:(id)arg1 ;
-(void)creditForDeletion:(id)arg1 ;
@end

