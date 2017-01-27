/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem, NSArray;

@interface SafariAutoFillListController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	NSArray* _specifiersForAddItem;

}

@property (nonatomic,copy,readonly) NSArray * specifiersForAddItem; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateEditButton;
-(void)_addItem:(id)arg1 ;
-(id)_cancelBarButtonItem;
-(void)toggleEditing;
-(void)cancelEditing;
-(void)deleteButtonTapped;
-(NSArray *)specifiersForAddItem;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)updateDeleteButton;
-(BOOL)keychainSyncIsEnabled;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(id)titleForAddItem;
-(Class)controllerClassForAddItem;
-(id)_deleteBarButtonItem;
-(id)_editBarButtonItem;
-(unsigned long long)_autoFillItemCount;
-(void)_deleteSelectedItems;
-(BOOL)canBeShownFromSuspendedState;
@end
