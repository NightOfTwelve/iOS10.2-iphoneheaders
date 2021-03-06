/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIViewReusePool, NSMutableArray, NSMapTable, NSArray;

@interface SKUIViewModification : NSObject {

	SKUIViewReusePool* _viewPool;
	NSMutableArray* _views;
	NSMapTable* _allViewTextProperties;

}

@property (nonatomic,copy,readonly) NSMapTable * allViewTextProperties;              //@synthesize allViewTextProperties=_allViewTextProperties - In the implementation block
@property (nonatomic,readonly) NSArray * views;                                      //@synthesize views=_views - In the implementation block
-(id)addReusableViewWithReuseIdentifier:(id)arg1 ;
-(id)addImageViewWithVideoElement:(id)arg1 context:(id)arg2 ;
-(id)addImageViewWithElement:(id)arg1 context:(id)arg2 ;
-(id)addButtonWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addLabelViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)initWithViewReusePool:(id)arg1 ;
-(NSArray *)views;
-(id)addBadgeViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addMenuButtonWithTitleItem:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)addView:(id)arg1 ;
-(id)addDividerWithElement:(id)arg1 context:(id)arg2 ;
-(id)addTabularLockupWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addHorizontalLockupWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addTomatoRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addStarRatingControlViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addStarRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addStackItemViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addHeaderViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addHorizontalListWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addOfferViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addStackListViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(void)setTextProperties:(id)arg1 forView:(id)arg2 ;
-(id)addImageDeckViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(NSMapTable *)allViewTextProperties;
-(id)addImageGridViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addLabelViewWithOrdinalElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)addTextViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)_attributedStringViewForLayout:(id)arg1 ;
-(id)_itemStateForButton:(id)arg1 ;
-(void)_styleItemOfferButton:(id)arg1 forElement:(id)arg2 context:(id)arg3 ;
-(id)_addImageViewWithReuseIdentifier:(id)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(id)addBarRatingWithElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
@end

