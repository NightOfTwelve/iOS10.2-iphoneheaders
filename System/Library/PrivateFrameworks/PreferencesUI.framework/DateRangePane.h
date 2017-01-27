/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, UIDatePicker, PSTableCell, NSString;

@interface DateRangePane : PSEditingPane <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	UIDatePicker* _datePicker;
	PSTableCell* _fromCell;
	PSTableCell* _toCell;
	CFDateFormatterRef _timeFormatter;
	int _selectedIndex;

}

@property (nonatomic,retain) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (assign,nonatomic) int selectedIndex;                      //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(void)update;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
@end
