/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NetworkInterfaceUtils : NSObject {

	BOOL _hasCellPrimaryInterface;
	BOOL _isWifiTrafficEligible;
	long long _wifiLinkQuality;

}

@property (nonatomic,readonly) BOOL hasCellPrimaryInterface;              //@synthesize hasCellPrimaryInterface=_hasCellPrimaryInterface - In the implementation block
@property (nonatomic,readonly) BOOL isWifiTrafficEligible;                //@synthesize isWifiTrafficEligible=_isWifiTrafficEligible - In the implementation block
@property (nonatomic,readonly) long long wifiLinkQuality;                 //@synthesize wifiLinkQuality=_wifiLinkQuality - In the implementation block
+(id)sharedInstance;
-(BOOL)hasCellPrimaryInterface;
-(BOOL)isWifiTrafficEligible;
-(long long)wifiLinkQuality;
@end
