/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UIScrollView, UIImageView;

@interface PSUIRegulatoryPane : PSEditingPane {

	UIScrollView* _scrollView;
	UIImageView* _primaryImageView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldInsetContent;
-(void)viewDidBecomeVisible;
-(BOOL)handlesDoneButton;
@end

