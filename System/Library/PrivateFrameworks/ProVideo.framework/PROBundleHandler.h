/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROPlugInDelegate.h>
#import <libobjc.A.dylib/PROPlugInFirewallErrorHandler.h>
#import <libobjc.A.dylib/PROAPIAccessing.h>

@protocol PROPlugInRegistering, PROBundleHandlerDelegate, PROVersionedAPIAccess, PKPlugIn;
@class NSBundle, NSMutableArray, NSMutableDictionary, NSArray, PROPlugInFirewall, NSString;

@interface PROBundleHandler : NSObject <PROPlugInDelegate, PROPlugInFirewallErrorHandler, PROAPIAccessing> {

	NSBundle* bundle;
	NSMutableArray* plugIns;
	NSMutableDictionary* groups;
	id<PROPlugInRegistering> principalClassInstance;
	struct {
		unsigned canCreateInstances : 1;
		unsigned askedAboutCreatingInstances : 1;
		unsigned  : 30;
	}  bundleFlags;
	NSArray* requestedProtocols;
	id<PROBundleHandlerDelegate> delegate;
	id<PROVersionedAPIAccess> apiManager;
	PROPlugInFirewall* apiAccessPoint;
	id<PKPlugIn> pluginKitPlug;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)delegate;
-(id)initWithBundle:(id)arg1 ;
-(id)plugIns;
-(void)addPlugIn:(id)arg1 ;
-(void)setAPIManager:(id)arg1 ;
-(void)setPluginKitPlug:(id)arg1 ;
-(void)registerPlugIns;
-(id)groupsDictionary;
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1 ;
-(BOOL)isEqualToBundleHandler:(id)arg1 ;
-(id)principalClassInstance;
-(BOOL)_plugInHasReservedUUID:(id)arg1 ;
-(BOOL)isPrincipalClassAvailable;
-(void)plugInCouldNotInitialize:(id)arg1 ;
-(void)plugIn:(id)arg1 didError:(id)arg2 ;
-(BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1 ;
-(id)apiManagerForPlugInInstances;
-(void)plugInFirewall:(id)arg1 receivedBadMessage:(SEL)arg2 ;
-(id)apiManager;
-(id)apiForProtocol:(id)arg1 ;
-(id)pluginKitPlug;
-(void)reportError:(id)arg1 ;
@end

