/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBRootIconListView.h>

@interface SBDockIconListView : SBRootIconListView
+(unsigned long long)iconColumnsOrRows;
+(unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1 ;
+(unsigned long long)iconRowsForInterfaceOrientation:(long long)arg1 ;
+(double)defaultHeight;
-(id)initWithModel:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 ;
-(double)bottomIconInset;
-(double)sideIconInset;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned long long*)arg2 proposedOrder:(int*)arg3 grabbedIcon:(id)arg4 ;
-(unsigned long long)rowAtPoint:(CGPoint)arg1 ;
-(unsigned long long)iconsInRowForSpacingCalculation;
-(unsigned long long)iconsInColumnForSpacingCalculation;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 ;
-(double)_additionalHorizontalInsetToCenterIcons;
-(double)_additionalVerticalInsetToCenterIcons;
-(double)topIconInset;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(int)iconLocation;
-(unsigned long long)columnAtPoint:(CGPoint)arg1 ;
@end
