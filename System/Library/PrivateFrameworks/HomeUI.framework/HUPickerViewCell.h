/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class NSArray, UIPickerView, NSString;

@interface HUPickerViewCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource> {

	BOOL _shouldPostNotifications;
	NSArray* _data;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) NSArray * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) UIPickerView * pickerView;                 //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,readonly) id selectedValue; 
@property (assign,nonatomic) BOOL shouldPostNotifications;              //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(void)prepareForReuse;
-(id)_setupPickerView;
-(void)_resizeCellForPickerView;
-(void)setShouldPostNotifications:(BOOL)arg1 ;
-(BOOL)shouldPostNotifications;
-(id)selectedValue;
@end
