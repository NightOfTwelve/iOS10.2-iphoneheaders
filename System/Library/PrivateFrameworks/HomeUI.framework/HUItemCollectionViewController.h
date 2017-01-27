/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUCollectionViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HUItemManagerContainer.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class HFItemManager, NSHashTable, NSString;

@interface HUItemCollectionViewController : HUCollectionViewController <HFItemManagerDelegate, HUItemManagerContainer, HUPreloadableViewController> {

	BOOL _wantsPreferredContentSize;
	BOOL _hasFinishedInitialLoad;
	HFItemManager* _itemManager;
	NSHashTable* _childViewControllersAtViewWillAppearTime;
	NSHashTable* _childViewControllersAtViewWillDisappearTime;

}

@property (nonatomic,retain) HFItemManager * itemManager;                                            //@synthesize itemManager=_itemManager - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedInitialLoad;                                            //@synthesize hasFinishedInitialLoad=_hasFinishedInitialLoad - In the implementation block
@property (nonatomic,retain) NSHashTable * childViewControllersAtViewWillAppearTime;                 //@synthesize childViewControllersAtViewWillAppearTime=_childViewControllersAtViewWillAppearTime - In the implementation block
@property (nonatomic,retain) NSHashTable * childViewControllersAtViewWillDisappearTime;              //@synthesize childViewControllersAtViewWillDisappearTime=_childViewControllersAtViewWillDisappearTime - In the implementation block
@property (assign,nonatomic) BOOL wantsPreferredContentSize;                                         //@synthesize wantsPreferredContentSize=_wantsPreferredContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)updateMode;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_updateTitle;
-(id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(HFItemManager *)itemManager;
-(void)itemManager:(id)arg1 didInsertSections:(id)arg2 ;
-(void)itemManager:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)itemManager:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2 ;
-(id)hu_preloadContent;
-(id)allCellClasses;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)childViewControllersToPreload;
-(void)setChildViewControllersAtViewWillDisappearTime:(NSHashTable *)arg1 ;
-(void)setChildViewControllersAtViewWillAppearTime:(NSHashTable *)arg1 ;
-(NSHashTable *)childViewControllersAtViewWillAppearTime;
-(NSHashTable *)childViewControllersAtViewWillDisappearTime;
-(void)setItemManager:(HFItemManager *)arg1 ;
-(BOOL)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didChangeOverallLoadingState:(unsigned long long)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)itemManager:(id)arg1 didChangeSourceItem:(id)arg2 ;
-(void)setWantsPreferredContentSize:(BOOL)arg1 ;
-(BOOL)hasFinishedInitialLoad;
-(void)setHasFinishedInitialLoad:(BOOL)arg1 ;
-(BOOL)wantsPreferredContentSize;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)shouldCoalesceBatchUpdatesBeforeViewDidAppear;
@end
