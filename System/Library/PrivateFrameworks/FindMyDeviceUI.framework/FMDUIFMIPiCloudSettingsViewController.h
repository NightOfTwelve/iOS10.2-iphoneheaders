/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class ACAccount, PSSpecifier, RemoteUIController, UIProgressHUD;

@interface FMDUIFMIPiCloudSettingsViewController : PSListController {

	BOOL _firstTimeSetup;
	BOOL _togglingFMIPSwitch;
	BOOL _activityInProgress;
	ACAccount* _account;
	PSSpecifier* _fmipSpecifier;
	PSSpecifier* _sendLastLocationSpecifier;
	RemoteUIController* _ruiController;
	UIProgressHUD* _hud;

}

@property (nonatomic,retain) PSSpecifier * fmipSpecifier;                          //@synthesize fmipSpecifier=_fmipSpecifier - In the implementation block
@property (assign,nonatomic) BOOL togglingFMIPSwitch;                              //@synthesize togglingFMIPSwitch=_togglingFMIPSwitch - In the implementation block
@property (nonatomic,retain) PSSpecifier * sendLastLocationSpecifier;              //@synthesize sendLastLocationSpecifier=_sendLastLocationSpecifier - In the implementation block
@property (nonatomic,retain) RemoteUIController * ruiController;                   //@synthesize ruiController=_ruiController - In the implementation block
@property (nonatomic,retain) UIProgressHUD * hud;                                  //@synthesize hud=_hud - In the implementation block
@property (assign,nonatomic) BOOL activityInProgress;                              //@synthesize activityInProgress=_activityInProgress - In the implementation block
@property (assign,nonatomic) BOOL firstTimeSetup;                                  //@synthesize firstTimeSetup=_firstTimeSetup - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                  //@synthesize account=_account - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)hideActivityInProgressUI;
-(void)showActivityInProgressUIWithMessage:(id)arg1 ;
-(void)hideActivityInProgressUIWithDelay:(double)arg1 ;
-(BOOL)isShowingActivityInProgressUI;
-(void)setFirstTimeSetup:(BOOL)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)_fmipSettingsCacheDidUpdate:(id)arg1 ;
-(void)_reloadSpecifiersOnMainQueue;
-(id)_groupSpecifierForFMIP;
-(id)_specifierForFMIP;
-(void)setFmipSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)fmipSpecifier;
-(BOOL)firstTimeSetup;
-(id)_fmipSwitchOnForSpecifier:(id)arg1 ;
-(id)_specifierForSendLastLocation;
-(void)setSendLastLocationSpecifier:(PSSpecifier *)arg1 ;
-(id)_groupSpecifierForSendLastLocation;
-(PSSpecifier *)sendLastLocationSpecifier;
-(void)_setFMIPSwitchOn:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_setSendLastLocationSwitchOn:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_sendLastLocationSwitchOnForSpecifier:(id)arg1 ;
-(id)_userAgentHeader;
-(id)_clientInfoHeader;
-(void)setRuiController:(RemoteUIController *)arg1 ;
-(RemoteUIController *)ruiController;
-(BOOL)togglingFMIPSwitch;
-(void)setTogglingFMIPSwitch:(BOOL)arg1 ;
-(void)_enableFMIP;
-(void)_disableFMIP;
-(void)_showFMIPPrivacyPage;
-(UIProgressHUD *)hud;
-(void)setHud:(UIProgressHUD *)arg1 ;
-(BOOL)activityInProgress;
-(void)setActivityInProgress:(BOOL)arg1 ;
-(id)specifiers;
@end

