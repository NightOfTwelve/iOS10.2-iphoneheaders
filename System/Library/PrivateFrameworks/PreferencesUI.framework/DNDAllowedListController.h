/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSMutableArray;

@interface DNDAllowedListController : PSListController {

	NSArray* _presetGroups;
	NSMutableArray* _usersGroups;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)identifierForType:(unsigned long long)arg1 ;
-(void)setDisruptionGroup:(id)arg1 specifier:(id)arg2 ;
-(id)getGroupSelectionFromSpecifiers:(id)arg1 ;
-(id)specifiers;
@end
