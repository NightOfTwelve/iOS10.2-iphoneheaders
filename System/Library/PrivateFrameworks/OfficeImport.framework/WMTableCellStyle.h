/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WMStyle.h>

@interface WMTableCellStyle : WMStyle {

	double mLeftPadding;
	double mRightPadding;

}
+(id)dominantColorOf:(id)arg1 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3 ;
+(float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3 ;
-(double)rightPadding;
-(void)addTableCellStyleProperties:(id)arg1 ;
-(void)addTableCellProperties:(id)arg1 ;
-(double)leftPadding;
-(id)initWithTableCellProperties:(id)arg1 ;
@end

