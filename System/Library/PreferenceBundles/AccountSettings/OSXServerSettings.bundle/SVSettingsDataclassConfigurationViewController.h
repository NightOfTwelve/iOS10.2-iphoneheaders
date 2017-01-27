/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@interface SVSettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController
-(id)VPNInstallationPromptReason;
-(void)discoverPropertiesForAccount;
-(id)enabledButTurnedOffDataclassSpecifiers;
-(void)addVPNConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)evaluateDeviceAuthenticationForReason:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)deleteVPNConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)displayedAccountTypeString;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)specifierForAccountSummaryCell;
-(id)otherSpecifiers;
-(BOOL)shouldShowDeleteAccountButton;
-(Class)accountInfoControllerClass;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)lastGroupSpecifierInSpecifiers:(id)arg1 ;
-(id)specifiers;
@end
