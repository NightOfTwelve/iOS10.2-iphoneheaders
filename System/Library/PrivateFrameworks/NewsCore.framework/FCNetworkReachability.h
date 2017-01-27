/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSString, Reachability;

@interface FCNetworkReachability : NSObject {

	BOOL _isNetworkReachable;
	BOOL _isNetworkReachableViaWiFi;
	BOOL _isNetworkReachableViaCellular;
	BOOL _isCloudKitAccessAllowed;
	BOOL _accessRestrictedBecauseOfAppVersion;
	BOOL _accessRestrictedBecauseOfOSVersion;
	BOOL _accessRestrictedBecauseOfCountry;
	BOOL _accessRestrictedBecauseOfDeviceAbandoned;
	long long _offlineReason;
	NSHashTable* _observers;
	long long _currentRadioAccessTechnology;
	NSString* _currentCellularCarrierName;
	Reachability* _internetReachability;

}

@property (nonatomic,retain) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachable;                                    //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachableViaWiFi;                             //@synthesize isNetworkReachableViaWiFi=_isNetworkReachableViaWiFi - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachableViaCellular;                         //@synthesize isNetworkReachableViaCellular=_isNetworkReachableViaCellular - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitAccessAllowed;                               //@synthesize isCloudKitAccessAllowed=_isCloudKitAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL accessRestrictedBecauseOfAppVersion;                   //@synthesize accessRestrictedBecauseOfAppVersion=_accessRestrictedBecauseOfAppVersion - In the implementation block
@property (assign,nonatomic) BOOL accessRestrictedBecauseOfOSVersion;                    //@synthesize accessRestrictedBecauseOfOSVersion=_accessRestrictedBecauseOfOSVersion - In the implementation block
@property (assign,nonatomic) BOOL accessRestrictedBecauseOfCountry;                      //@synthesize accessRestrictedBecauseOfCountry=_accessRestrictedBecauseOfCountry - In the implementation block
@property (assign,nonatomic) BOOL accessRestrictedBecauseOfDeviceAbandoned;              //@synthesize accessRestrictedBecauseOfDeviceAbandoned=_accessRestrictedBecauseOfDeviceAbandoned - In the implementation block
@property (assign,nonatomic) long long currentRadioAccessTechnology;                     //@synthesize currentRadioAccessTechnology=_currentRadioAccessTechnology - In the implementation block
@property (nonatomic,retain) NSString * currentCellularCarrierName;                      //@synthesize currentCellularCarrierName=_currentCellularCarrierName - In the implementation block
@property (nonatomic,retain) Reachability * internetReachability;                        //@synthesize internetReachability=_internetReachability - In the implementation block
@property (nonatomic,readonly) BOOL isNetworkOnlyReachableViaCellular; 
@property (nonatomic,readonly) long long cellularRadioAccessTechnology; 
@property (nonatomic,readonly) NSString * cellularCarrierName; 
@property (nonatomic,readonly) BOOL isCloudKitReachable; 
@property (assign,nonatomic) long long offlineReason;                                    //@synthesize offlineReason=_offlineReason - In the implementation block
+(id)sharedNetworkReachability;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_reachabilityChanged:(id)arg1 ;
-(BOOL)isNetworkReachable;
-(void)_updateReachability;
-(void)setInternetReachability:(Reachability *)arg1 ;
-(Reachability *)internetReachability;
-(BOOL)isNetworkReachableViaWiFi;
-(long long)cellularRadioAccessTechnology;
-(BOOL)isCloudKitReachable;
-(long long)offlineReason;
-(long long)currentRadioAccessTechnology;
-(NSString *)currentCellularCarrierName;
-(BOOL)isNetworkReachableViaCellular;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
-(void)setIsNetworkReachableViaWiFi:(BOOL)arg1 ;
-(void)setIsNetworkReachableViaCellular:(BOOL)arg1 ;
-(long long)_cellularRadioAccessTechnologyFromString:(id)arg1 ;
-(void)setCurrentRadioAccessTechnology:(long long)arg1 ;
-(void)setCurrentCellularCarrierName:(NSString *)arg1 ;
-(BOOL)accessRestrictedBecauseOfAppVersion;
-(BOOL)accessRestrictedBecauseOfCountry;
-(BOOL)accessRestrictedBecauseOfOSVersion;
-(BOOL)accessRestrictedBecauseOfDeviceAbandoned;
-(void)setIsCloudKitAccessAllowed:(BOOL)arg1 ;
-(BOOL)isCloudKitAccessAllowed;
-(NSString *)cellularCarrierName;
-(BOOL)isNetworkOnlyReachableViaCellular;
-(void)setAccessRestrictedBecauseOfAppVersion:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfCountry:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfOSVersion:(BOOL)arg1 ;
-(void)setAccessRestrictedBecauseOfDeviceAbandoned:(BOOL)arg1 ;
-(void)setOfflineReason:(long long)arg1 ;
@end
