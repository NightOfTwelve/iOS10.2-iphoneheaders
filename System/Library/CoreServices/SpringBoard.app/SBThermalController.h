/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBThermalWarningSuppressionAssertionDelegate.h>
#import <SpringBoard/SBThermalWarningAlertItemDelegate.h>
#import <SpringBoard/SBFThermalBlockProvider.h>

@class NSDictionary, NSMutableSet, NSHashTable, SBExternalWifiDefaults, SBThermalDefaults, SBSecurityDefaults, NSString;

@interface SBThermalController : NSObject <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate, SBFThermalBlockProvider> {

	BOOL _sampling;
	double _samplingStartTime;
	NSDictionary* _samplingStartCPUTimesByApp;
	int _sunlightStateToken;
	int _coldTempToken;
	int _warningAssertionToken;
	int _warningResponseToken;
	NSMutableSet* _warningSuppressionAssertions;
	long long _level;
	BOOL _inSunlight;
	NSHashTable* _observers;
	SBExternalWifiDefaults* _networkDefaults;
	SBThermalDefaults* _thermalDefaults;
	SBSecurityDefaults* _securityDefaults;

}

@property (assign,setter=_setLevel:,nonatomic) long long level;                  //@synthesize level=_level - In the implementation block
@property (getter=isInSunlight,nonatomic,readonly) BOOL inSunlight;              //@synthesize inSunlight=_inSunlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)logThermalEvent:(id)arg1 ;
+(id)sharedInstance;
-(void)startListeningForThermalEvents;
-(BOOL)captureWarningSuppressionAssertionWithPort:(unsigned)arg1 reason:(id)arg2 ;
-(void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2 ;
-(BOOL)_isBlocked;
-(void)_respondToCurrentThermalCondition;
-(void)_didReceiveWarningAction:(int)arg1 ;
-(BOOL)_isLevelBlocked:(long long)arg1 ;
-(void)_setBlocked:(BOOL)arg1 ;
-(void)_beginThermalJetsamCPUSampling;
-(void)_killThermallyActiveApplication;
-(void)_calculateAppsCPUTimesWithCompletion:(/*^block*/id)arg1 ;
-(void)_killThermallyActiveApplicationGivenCPUTimes:(id)arg1 ;
-(void)thermalWarningAssertionExpired:(id)arg1 ;
-(BOOL)isInSunlight;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(long long)level;
-(void)addThermalObserver:(id)arg1 ;
-(void)removeThermalObserver:(id)arg1 ;
-(BOOL)isThermalBlocked;
-(void)_setLevel:(long long)arg1 ;
@end

