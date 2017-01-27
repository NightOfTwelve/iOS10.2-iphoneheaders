/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUILayoutCacheDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIContentUnavailableView, SKUIViewElementLayoutContext, SKUIContentUnavailableTemplateElement, SKUILayoutCache, NSString;

@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {

	SKUIContentUnavailableView* _contentUnavailableView;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIContentUnavailableTemplateElement* _templateElement;
	SKUILayoutCache* _textLayoutCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIEdgeInsets)_contentInsets;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_layoutContext;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)documentDidUpdate:(id)arg1 ;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_reloadContentUnavailableView:(id)arg1 width:(double)arg2 ;
@end
