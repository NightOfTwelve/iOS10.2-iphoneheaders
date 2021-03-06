/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface ISAdvancedLocaleController : PSListController {

	BOOL _automaticLocaleDisabled;

}

@property (assign,nonatomic) BOOL automaticLocaleDisabled;              //@synthesize automaticLocaleDisabled=_automaticLocaleDisabled - In the implementation block
-(void)setAutomatic:(id)arg1 specifier:(id)arg2 ;
-(BOOL)automaticLocaleDisabled;
-(void)setAutomaticLocaleDisabled:(BOOL)arg1 ;
-(id)automatic:(id)arg1 ;
-(void)reloadLocale;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
@end

