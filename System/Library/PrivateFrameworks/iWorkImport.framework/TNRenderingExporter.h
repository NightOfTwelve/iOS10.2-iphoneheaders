/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporter.h>

@class TNPageController, TNPdfHyperlinkController, NSMutableArray;

@interface TNRenderingExporter : TSARenderingExporter {

	unsigned long long mSheetIndex;
	unsigned long long mPageIndex;
	unsigned long long mTotalPagesCount;
	vector<unsigned long, std::__1::allocator<unsigned long> >* mSheetPageCountArray;
	vector<unsigned long, std::__1::allocator<unsigned long> >* mSheetPageStartArray;
	TNPageController* mPageController;
	TNPdfHyperlinkController* mHyperlinkController;
	NSMutableArray* mCanvasBasedSheets;
	BOOL _renderingAllSheets;

}

@property (assign,getter=isRenderingAllSheets,nonatomic) BOOL renderingAllSheets;              //@synthesize renderingAllSheets=_renderingAllSheets - In the implementation block
-(id)initWithDocumentRoot:(id)arg1 ;
-(CGRect)boundsRect;
-(id)currentInfos;
-(double)totalProgess;
-(CGRect)unscaledClipRect;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4 ;
-(BOOL)incrementPage;
-(BOOL)preparePage:(unsigned long long)arg1 ;
-(void)drawAllPagesWithContext:(CGContextRef)arg1 returnSuccess:(BOOL*)arg2 ;
-(void)drawCurrentPageWithContext:(CGContextRef)arg1 returnSuccess:(BOOL*)arg2 ;
-(double)progressForCurrentPage;
-(CGRect)p_boundsRectForFirstPage;
-(BOOL)p_isActiveSheetForm;
-(id)p_canvasBasedSheets;
-(unsigned long long)numberOfCanvasBasedSheets;
-(BOOL)isRenderingAllSheets;
-(vector<unsigned long, std::__1::allocator<unsigned long> >*)p_pageCountArray;
-(vector<unsigned long, std::__1::allocator<unsigned long> >*)p_pageStartArray;
-(unsigned long long)sheetIndexForPage:(unsigned long long)arg1 ;
-(unsigned long long)inSheetPageIndexForPage:(unsigned long long)arg1 ;
-(void)setSheetIndex:(unsigned long long)arg1 andPageIndex:(unsigned long long)arg2 ;
-(id)p_activeSheet;
-(id)quickLookSheets;
-(BOOL)isPageInPortraitOrientation:(unsigned long long)arg1 ;
-(long long)pageIndexFromQuickLookSheet:(id)arg1 ;
-(void)setRenderingAllSheets:(BOOL)arg1 ;
-(void)dealloc;
-(void)teardown;
-(unsigned long long)pageCount;
-(id)pageController;
-(void)setup;
@end

