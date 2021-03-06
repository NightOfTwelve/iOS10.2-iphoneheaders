/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSString, NSMutableString;

@interface VPNTableCell : PSTableCell {

	NSString* _alert;
	NSString* _subtitle;
	NSMutableString* _detailText;

}

@property (retain) NSMutableString * detailText;              //@synthesize detailText=_detailText - In the implementation block
@property (retain) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) NSString * alert;                          //@synthesize alert=_alert - In the implementation block
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSMutableString *)detailText;
-(void)setDetailText:(NSMutableString *)arg1 ;
-(NSString *)alert;
-(void)setAlert:(NSString *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

