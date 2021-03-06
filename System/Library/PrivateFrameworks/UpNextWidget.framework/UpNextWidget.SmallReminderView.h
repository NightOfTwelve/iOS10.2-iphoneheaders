/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSDate, UIColor;

@interface UpNextWidget.SmallReminderView : UIView {

	 title;
	 dueDate;
	 listColor;
	 label;
	 circleImageView;
	 circleDiameter;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSDate * dueDate; 
@property (retain,nonatomic) UIColor * listColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSDate *)dueDate;
-(double)lastBaselineOffsetFromBottom;
-(double)firstBaselineOffsetFromTop;
-(void)setDueDate:(NSDate *)arg1 ;
-(UIColor *)listColor;
-(void)setListColor:(UIColor *)arg1 ;
@end

