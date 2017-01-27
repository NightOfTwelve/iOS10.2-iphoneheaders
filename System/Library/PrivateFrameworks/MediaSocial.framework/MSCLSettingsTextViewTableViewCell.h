/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol MSCLTokenTextViewDelegate;
@class MSCLTokenTextView;

@interface MSCLSettingsTextViewTableViewCell : UITableViewCell {

	MSCLTokenTextView* _textView;
	id<MSCLTokenTextViewDelegate> _changeDelegate;

}

@property (nonatomic,readonly) MSCLTokenTextView * textView;                                   //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLTokenTextViewDelegate> changeDelegate;              //@synthesize changeDelegate=_changeDelegate - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MSCLTokenTextView *)textView;
-(id<MSCLTokenTextViewDelegate>)changeDelegate;
-(void)setChangeDelegate:(id<MSCLTokenTextViewDelegate>)arg1 ;
@end
