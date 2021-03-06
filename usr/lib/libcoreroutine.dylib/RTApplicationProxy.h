/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, LSApplicationProxy;

@interface RTApplicationProxy : NSObject {

	BOOL _installed;
	BOOL _restricted;
	BOOL _hidden;
	NSString* _bundleIdentifier;
	NSString* _localizedName;
	long long _capabilities;
	LSApplicationProxy* _appProxy;

}

@property (nonatomic,retain) LSApplicationProxy * appProxy;              //@synthesize appProxy=_appProxy - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) long long capabilities;                     //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL installed;                             //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL restricted;                            //@synthesize restricted=_restricted - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                //@synthesize hidden=_hidden - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(LSApplicationProxy *)appProxy;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hidden;
-(void)setInstalled:(BOOL)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(BOOL)installed;
-(long long)capabilities;
-(void)setCapabilities:(long long)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 applicationProxy:(id)arg2 capabilities:(long long)arg3 ;
-(BOOL)restricted;
-(void)setAppProxy:(LSApplicationProxy *)arg1 ;
@end

