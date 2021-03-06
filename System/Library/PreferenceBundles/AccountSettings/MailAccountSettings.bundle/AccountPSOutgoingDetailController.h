/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailAccountSettings/AccountPSDetailControllerBase.h>

@class MailAccount;

@interface AccountPSOutgoingDetailController : AccountPSDetailControllerBase {

	MailAccount* _viewingAccount;
	MailAccount* _primaryForAccount;
	unsigned _isPrimary : 1;
	unsigned _isDynamic : 1;
	unsigned _isCarrierAccount : 1;
	unsigned _enableAsAlternate : 1;
	unsigned _disableAsDynamic : 1;

}
+(id)outgoingSpecifiers;
+(id)outgoingGroupSpecifiers;
+(BOOL)shouldPresentAsModalSheet;
-(void)processValidationResult:(int)arg1 ;
-(void)setEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(void)handleValidAccount:(id)arg1 ;
-(void)didFinishSaveAccountAnywaysSheetWithResult:(BOOL)arg1 ;
-(void)handleInvalidAccount:(id)arg1 ;
-(id)specifiersForNewAccount;
-(void)validateForNewAccount;
-(void)_saveAccounts;
-(id)isEnabled:(id)arg1 ;
-(void)_finishedAccountSetup;
-(id)specifiersForExistingAccount;
-(void)_reallyDeleteOutgoingAccount;
-(id)authSchemeTitlesForSpecifier:(id)arg1 ;
-(void)validateForExistingAccount;
-(id)authSchemeValuesForSpecifier:(id)arg1 ;
-(void)_bottomDescriptionWithSpecifier:(id)arg1 ;
-(void)_resetDeliveryAccountsForViewingAccount;
-(void)deleteOutgoingAccount;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend;
-(void)viewDidLoad;
-(Class)accountClass;
-(void)saveAndDismiss;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)propertyValueChanged:(id)arg1 ;
-(void)_updateDoneButton;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)haveEnoughValues;
-(id)specifiers;
@end

