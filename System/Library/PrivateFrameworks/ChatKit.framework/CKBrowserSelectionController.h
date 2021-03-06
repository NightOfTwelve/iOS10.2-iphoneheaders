/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/CKBrowserSelectionFlowLayoutDelegate.h>
#import <libobjc.A.dylib/CKBrowserCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKBrowserSelectionControllerDelegate;
@class CKBrowserSelectionFlowLayout, UIPageControl, UICollectionView, UIVisualEffectView, NSMutableArray, CKBrowserDummyCell, UIPanGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, NSIndexPath, NSString;

@interface CKBrowserSelectionController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKBrowserSelectionFlowLayoutDelegate, CKBrowserCellDelegate, UIGestureRecognizerDelegate> {

	BOOL _sectionNeedsAdjustmentDuringMovementOfItem;
	BOOL _endGesture;
	BOOL _deferringInteractiveMoveUntilGestureChange;
	id<CKBrowserSelectionControllerDelegate> _delegate;
	/*^block*/id _pendingCompletionBlock;
	CKBrowserSelectionFlowLayout* _layout;
	UIPageControl* _pageControl;
	UICollectionView* _collectionView;
	UIVisualEffectView* _backgroundView;
	NSMutableArray* _pluginEntries;
	CKBrowserDummyCell* _dummyCell;
	double _lastContentOffsetX;
	UIPanGestureRecognizer* _reorderGestureRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _endEditingTapRecognizer;
	NSIndexPath* _indexPathToDelete;
	long long _numberOfSectionsBeforeDeletion;
	NSIndexPath* _lastKnownProposedTargetIndexPath;
	NSIndexPath* _originalIndexPathOfPluginToMove;

}

@property (nonatomic,retain) UIPageControl * pageControl;                                                                                      //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSMutableArray * pluginEntries;                                                                                   //@synthesize pluginEntries=_pluginEntries - In the implementation block
@property (nonatomic,retain) CKBrowserDummyCell * dummyCell;                                                                                   //@synthesize dummyCell=_dummyCell - In the implementation block
@property (assign,nonatomic) double lastContentOffsetX;                                                                                        //@synthesize lastContentOffsetX=_lastContentOffsetX - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * reorderGestureRecognizer;                                                                //@synthesize reorderGestureRecognizer=_reorderGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;                                                               //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * endEditingTapRecognizer;                                                                 //@synthesize endEditingTapRecognizer=_endEditingTapRecognizer - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPathToDelete;                                                                                  //@synthesize indexPathToDelete=_indexPathToDelete - In the implementation block
@property (assign,nonatomic) long long numberOfSectionsBeforeDeletion;                                                                         //@synthesize numberOfSectionsBeforeDeletion=_numberOfSectionsBeforeDeletion - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastKnownProposedTargetIndexPath;                                                                   //@synthesize lastKnownProposedTargetIndexPath=_lastKnownProposedTargetIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * originalIndexPathOfPluginToMove;                                                                    //@synthesize originalIndexPathOfPluginToMove=_originalIndexPathOfPluginToMove - In the implementation block
@property (assign,nonatomic) BOOL sectionNeedsAdjustmentDuringMovementOfItem;                                                                  //@synthesize sectionNeedsAdjustmentDuringMovementOfItem=_sectionNeedsAdjustmentDuringMovementOfItem - In the implementation block
@property (assign,nonatomic) BOOL endGesture;                                                                                                  //@synthesize endGesture=_endGesture - In the implementation block
@property (assign,getter=isDeferringInteractiveMoveUntilGestureChange,nonatomic) BOOL deferringInteractiveMoveUntilGestureChange;              //@synthesize deferringInteractiveMoveUntilGestureChange=_deferringInteractiveMoveUntilGestureChange - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserSelectionControllerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id pendingCompletionBlock;                                                                                          //@synthesize pendingCompletionBlock=_pendingCompletionBlock - In the implementation block
@property (nonatomic,retain) CKBrowserSelectionFlowLayout * layout;                                                                            //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<CKBrowserSelectionControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<CKBrowserSelectionControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(long long)_numberOfSections;
-(void)setEditing:(BOOL)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(CKBrowserSelectionFlowLayout *)layout;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)setLayout:(CKBrowserSelectionFlowLayout *)arg1 ;
-(id)pendingCompletionBlock;
-(void)setPendingCompletionBlock:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UIPageControl *)pageControl;
-(long long)_numberOfItems;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)updateCollectionView:(id)arg1 ;
-(void)_handleAppInstallationsChanged:(id)arg1 ;
-(void)longPressRecognized:(id)arg1 ;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(NSIndexPath *)indexPathToDelete;
-(void)setIndexPathToDelete:(NSIndexPath *)arg1 ;
-(id)_modelItemsInSection:(long long)arg1 ;
-(long long)numberOfSectionsBeforeDeletion;
-(id)_modelItemAtIndexPath:(id)arg1 type:(long long*)arg2 ;
-(id)responderView;
-(UITapGestureRecognizer *)endEditingTapRecognizer;
-(UIPanGestureRecognizer *)reorderGestureRecognizer;
-(void)setEndEditingTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setReorderGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)_itemAtIndexPathIsInstalledPlugin:(id)arg1 ;
-(void)updateCurrentPageFromCollectionViewOffset;
-(void)setLastKnownProposedTargetIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)originalIndexPathOfPluginToMove;
-(long long)_indexOfSectionWithAvailableSpaceAtOrAfterSection:(long long)arg1 ;
-(void)setSectionNeedsAdjustmentDuringMovementOfItem:(BOOL)arg1 ;
-(BOOL)sectionNeedsAdjustmentDuringMovementOfItem;
-(void)setOriginalIndexPathOfPluginToMove:(NSIndexPath *)arg1 ;
-(void)setEndGesture:(BOOL)arg1 ;
-(BOOL)isDeferringInteractiveMoveUntilGestureChange;
-(void)interactionAfterTimer;
-(BOOL)_beginReorderingPluginsForGestureRecognizer:(id)arg1 ;
-(void)_handleReorderingPluginsEnded;
-(BOOL)endGesture;
-(void)setDeferringInteractiveMoveUntilGestureChange:(BOOL)arg1 ;
-(NSIndexPath *)lastKnownProposedTargetIndexPath;
-(void)handleEndEditingTap:(id)arg1 ;
-(void)handleReorderingForRecognizer:(id)arg1 ;
-(void)setNumberOfSectionsBeforeDeletion:(long long)arg1 ;
-(CKBrowserDummyCell *)dummyCell;
-(void)setDummyCell:(CKBrowserDummyCell *)arg1 ;
-(void)updatePageControl;
-(BOOL)canDeletePluginAtIndexPath:(id)arg1 ;
-(BOOL)shouldHidePluginAtIndexPath:(id)arg1 ;
-(BOOL)iconShouldJitterAtIndexPath:(id)arg1 ;
-(void)deleteButtonPressedForBrowserCell:(id)arg1 ;
-(void)runShowAnimation:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_indexPathOfModelItem:(id)arg1 ;
-(NSMutableArray *)pluginEntries;
-(void)setPluginEntries:(NSMutableArray *)arg1 ;
-(double)lastContentOffsetX;
-(void)setLastContentOffsetX:(double)arg1 ;
@end

