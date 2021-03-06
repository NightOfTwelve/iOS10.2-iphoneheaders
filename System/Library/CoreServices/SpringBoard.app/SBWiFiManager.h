/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <SpringBoard/SpringBoard-Structs.h>
@class NSRecursiveLock, NSString, NWSystemPathMonitor, NSObject;

@interface SBWiFiManager : NSObject {

	NSRecursiveLock* _lock;
	CFRunLoopRef _callbackRunLoop;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	NSString* _deviceInterfaceName;
	BOOL _mainThread_devicePresent;
	WiFiNetworkRef _currentNetwork;
	WiFiNetworkRef _previousNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _currentNetworkIsIOSHotspot;
	BOOL _currentNetworkIsIOSHotspotHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _mainThread_signalStrengthBars;
	int _mainThread_signalStrengthRSSI;
	BOOL _mainThread_signalStrengthHasBeenSet;
	NWSystemPathMonitor* _systemPathMonitor;
	NSObject*<OS_dispatch_source> _primaryInterfaceUpdateTimeoutSource;
	WiFiNetworkRef _primaryInterface;
	BOOL _primaryInterfaceHasBeenSet;
	BOOL _isPrimaryInterface;
	BOOL _isPrimaryInterfaceChanging;

}
+(id)sharedInstance;
-(BOOL)isPowered;
-(BOOL)isPrimaryInterface;
-(BOOL)isAssociated;
-(id)currentNetworkName;
-(int)signalStrengthBars;
-(WiFiManagerClientRef)_lock_manager;
-(void)_powerStateDidChange;
-(void)_linkDidChange;
-(void)updateDevicePresence;
-(void)_lock_spawnManagerCallbackThread;
-(void)_updateWiFiDevice;
-(void)_runManagerCallbackThread;
-(void)_updateCurrentNetwork;
-(void)updateSignalStrength;
-(void)_updateWiFiState;
-(void)_primaryInterfaceChanged:(BOOL)arg1 ;
-(BOOL)_cachedIsAssociated;
-(void)updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2 ;
-(void)_lock_setWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(BOOL)wifiSupported;
-(BOOL)devicePresent;
-(BOOL)isAssociatedToIOSHotspot;
-(void)clearWiFiPickerPreferences;
-(BOOL)wiFiEnabled;
-(int)signalStrengthRSSI;
-(void)resetSettings;
-(CFRunLoopRef)wifiRunLoopRef;
-(id)_wifiInterface;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setWiFiEnabled:(BOOL)arg1 ;
-(void)setPowered:(BOOL)arg1 ;
-(id)knownNetworks;
@end

