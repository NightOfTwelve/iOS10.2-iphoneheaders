/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@class NSMapTable;

@interface HUCollectionViewController : UICollectionViewController {

	NSMapTable* _installedChildViewControllersKeyedByCell;

}

@property (nonatomic,retain) NSMapTable * installedChildViewControllersKeyedByCell;              //@synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell - In the implementation block
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(NSMapTable *)installedChildViewControllersKeyedByCell;
-(void)setInstalledChildViewControllersKeyedByCell:(NSMapTable *)arg1 ;
@end

