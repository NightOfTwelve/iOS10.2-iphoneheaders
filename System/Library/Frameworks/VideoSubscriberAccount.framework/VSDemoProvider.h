/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray, VSDemoProviderServer, VSCookieServer;

@interface VSDemoProvider : NSObject {

	BOOL _prohibited;
	NSString* _appIdentifier;
	NSURL* _appStoreRoomURL;
	NSString* _providerIdentifier;
	NSString* _vendorIdentifier;
	NSArray* _authTemplates;
	NSArray* _authProtocols;
	VSDemoProviderServer* _server;
	VSCookieServer* _cookieServer;

}

@property (nonatomic,retain) VSDemoProviderServer * server;                    //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) VSCookieServer * cookieServer;                    //@synthesize cookieServer=_cookieServer - In the implementation block
@property (nonatomic,copy,readonly) NSURL * authURL; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * appIdentifier;                           //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * appStoreRoomURL;                            //@synthesize appStoreRoomURL=_appStoreRoomURL - In the implementation block
@property (nonatomic,copy) NSString * providerIdentifier;                      //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                        //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (assign,getter=isProhibited,nonatomic) BOOL prohibited;              //@synthesize prohibited=_prohibited - In the implementation block
@property (nonatomic,copy) NSArray * authTemplates;                            //@synthesize authTemplates=_authTemplates - In the implementation block
@property (nonatomic,copy) NSArray * authProtocols;                            //@synthesize authProtocols=_authProtocols - In the implementation block
+(id)defaultDemoProviders;
+(id)deafultDemoProvidersStoreResponse;
-(id)init;
-(VSDemoProviderServer *)server;
-(NSString *)providerIdentifier;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSURL *)authURL;
-(NSString *)vendorIdentifier;
-(void)setServer:(VSDemoProviderServer *)arg1 ;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(NSURL *)appStoreRoomURL;
-(void)setAppStoreRoomURL:(NSURL *)arg1 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(void)setAuthTemplates:(NSArray *)arg1 ;
-(void)setProhibited:(BOOL)arg1 ;
-(void)setAuthProtocols:(NSArray *)arg1 ;
-(BOOL)isProhibited;
-(NSArray *)authTemplates;
-(NSArray *)authProtocols;
-(VSCookieServer *)cookieServer;
-(void)setCookieServer:(VSCookieServer *)arg1 ;
@end
