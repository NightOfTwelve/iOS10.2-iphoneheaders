/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ISSoftwareMap : NSObject {

	NSArray* _applications;

}

@property (nonatomic,readonly) NSArray * applications; 
+(id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2 ;
+(BOOL)currentMapIsValid;
+(void)setCurrentMap:(id)arg1 ;
+(id)currentMap;
+(id)applicationForPluginBundleIdentifier:(id)arg1 extensionType:(id)arg2 ;
+(id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2 ;
+(id)_newSoftwareUpdateDictionaryForApplication:(id)arg1 ;
+(id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3 ;
+(void)enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)haveApplicationsOfType:(id)arg1 ;
+(id)applicationForPluginBundleIdentifier:(id)arg1 ;
+(void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)removableSystemApplicationsWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)_startWatchingInstallationNotifications;
+(id)loadedMap;
+(id)applicationForBundleIdentifier:(id)arg1 ;
+(void)startObservingNotifications;
+(void)invalidateCurrentMap;
-(id)init;
-(void)dealloc;
-(void)_loadFromMobileInstallation;
-(id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1 ;
-(id)copySoftwareUpdatesPropertyList;
-(id)applicationForItemIdentifier:(id)arg1 ;
-(id)applicationForBundleIdentifier:(id)arg1 ;
-(NSArray *)applications;
@end

