/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class PDFViewPrivate, PDFDocument, PDFPage, PDFDestination, UIColor, PDFSelection, NSArray, UIView, NSString;

@interface PDFView : UIView <UIGestureRecognizerDelegate> {

	PDFViewPrivate* _private;

}

@property (nonatomic,retain) PDFDocument * document; 
@property (nonatomic,readonly) PDFPage * currentPage; 
@property (nonatomic,readonly) PDFDestination * currentDestination; 
@property (assign,nonatomic) long long displayMode; 
@property (assign,nonatomic) BOOL displaysPageBreaks; 
@property (assign,nonatomic) long long displayBox; 
@property (assign,nonatomic) BOOL displaysAsBook; 
@property (assign,nonatomic) BOOL shouldAntiAlias; 
@property (assign,nonatomic) double greekingThreshold; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) long long interpolationQuality; 
@property (assign,nonatomic,__weak) id<PDFViewDelegate> delegate; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) BOOL autoScales; 
@property (nonatomic,retain) PDFSelection * currentSelection; 
@property (nonatomic,retain) NSArray * highlightedSelections; 
@property (nonatomic,readonly) UIView * documentView; 
@property (assign,nonatomic) BOOL allowsDragging; 
@property (assign,nonatomic) BOOL enableDataDetectors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)drawPage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PDFViewDelegate>)arg1 ;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(id<PDFViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)panGestureRecognizer;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_commonInit;
-(BOOL)canBecomeFirstResponder;
-(void)scrollSelectionToVisible:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(PDFPage *)currentPage;
-(UIView *)documentView;
-(void)clearSelection;
-(double)scaleFactor;
-(void)goBack:(id)arg1 ;
-(void)goForward:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(PDFDocument *)document;
-(long long)displayMode;
-(double)gutterWidth;
-(void)setGutterWidth:(double)arg1 ;
-(id)longPressGestureRecognizer;
-(void)setScaleFactor:(double)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)setDocument:(PDFDocument *)arg1 ;
-(void)performAction:(id)arg1 ;
-(void)layoutDocumentView;
-(id)documentScrollView;
-(id)tapGestureRecognizer;
-(void)setDisplayMode:(long long)arg1 ;
-(BOOL)allowsDragging;
-(id)history;
-(BOOL)shouldAntiAlias;
-(BOOL)isForcingWebKitMainThread;
-(void)drawPage:(id)arg1 toContext:(CGContextRef)arg2 ;
-(void)drawPagePost:(id)arg1 toContext:(CGContextRef)arg2 ;
-(long long)displayBox;
-(void)setDisplayBox:(long long)arg1 ;
-(void)setShouldAntiAlias:(BOOL)arg1 ;
-(void)setEnablePageShadows:(BOOL)arg1 ;
-(void)forceWebKitMainThread:(BOOL)arg1 ;
-(id)PDFLayout;
-(PDFSelection *)currentSelection;
-(id)pageForPoint:(CGPoint)arg1 nearest:(BOOL)arg2 ;
-(void)syncPageIndexToScrollView;
-(id)pageViewForPageAtIndex:(unsigned long long)arg1 ;
-(void)setForcesTopAlignment:(BOOL)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(void)setCurrentSelection:(PDFSelection *)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 ;
-(void)touchPan:(id)arg1 ;
-(void)touchSwipe:(id)arg1 ;
-(void)documentWasUnlocked;
-(PDFMargins)pdfMargins;
-(BOOL)displaysAsBook;
-(BOOL)displaysSoloPagesCentered;
-(BOOL)displaysRTL;
-(BOOL)disableInterpageSpacing;
-(void)_doNotQueryScaleFactor;
-(CGRect)normalizedPageBounds:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
-(void)goToPage:(id)arg1 ;
-(BOOL)displaysPageBreaks;
-(BOOL)scrollingChangesPages;
-(double)greekingThreshold;
-(double)lineWidthThreshold;
-(long long)interpolationQuality;
-(id)popupManager;
-(void)setDocument:(id)arg1 waitDuration:(double)arg2 ;
-(void)appendPasswordUI;
-(void)_releaseDocument;
-(BOOL)canGoToFirstPage;
-(PDFDestination *)currentDestination;
-(void)pushDestination:(id)arg1 ;
-(void)goToPageNoPush:(id)arg1 ;
-(unsigned long long)lastPageIndex;
-(BOOL)canGoToLastPage;
-(id)nextPage;
-(id)previousPage;
-(void)goToDestinationNoPush:(id)arg1 ;
-(void)goToRect:(CGRect)arg1 onPage:(id)arg2 ;
-(BOOL)isRectVisible:(CGRect)arg1 onPage:(id)arg2 ;
-(void)goToDestination:(id)arg1 ;
-(double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2 ;
-(void)setAutoScales:(BOOL)arg1 ;
-(void)internalSetScaleFactor:(double)arg1 ;
-(BOOL)autoScales;
-(double)autoScaleFactor;
-(void)performBeep;
-(void)goToNextPage:(id)arg1 ;
-(void)goToPreviousPage:(id)arg1 ;
-(void)goToFirstPage:(id)arg1 ;
-(void)goToLastPage:(id)arg1 ;
-(BOOL)canZoomIn;
-(void)zoomIn:(id)arg1 ;
-(BOOL)canZoomOut;
-(void)zoomOut:(id)arg1 ;
-(void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2 ;
-(void)findVisiblePages;
-(void)resizeDisplayView:(id)arg1 ;
-(double)pageViewHeight:(id)arg1 ;
-(double)minScaleFactor;
-(double)maxScaleFactor;
-(void)installTileStats:(BOOL)arg1 ;
-(void)scrollViewSaysPageMayHaveChanged:(id)arg1 ;
-(void)gestureInit;
-(CGAffineTransform)_transformFromPageToPageView:(id)arg1 ;
-(void)tapPress:(id)arg1 ;
-(BOOL)isOverLinkAnnotation:(CGPoint)arg1 ;
-(void)positionInternalViews:(id)arg1 ;
-(void)updateCurrentPageUsingViewCenter;
-(id)determineCurrentPage;
-(void)constrainedScrollToPoint:(CGPoint)arg1 ;
-(BOOL)canGoToNextPage;
-(BOOL)canGoToPreviousPage;
-(CGPoint)scrollOriginForPageTopLeft:(id)arg1 ;
-(void)scrollVerticalBy:(double)arg1 ;
-(void)reflectNewPageOn;
-(double)autoScaleFactorForPage:(id)arg1 ;
-(void)goToSelection:(id)arg1 ;
-(void)setDisplaysPageBreaks:(BOOL)arg1 ;
-(void)setDisplaysAsBook:(BOOL)arg1 ;
-(void)setGreekingThreshold:(double)arg1 ;
-(void)takeBackgroundColorFrom:(id)arg1 ;
-(void)setInterpolationQuality:(long long)arg1 ;
-(long long)areaOfInterestForMouse:(id)arg1 ;
-(long long)areaOfInterestForPoint:(CGPoint)arg1 ;
-(void)setCursorForAreaOfInterest:(long long)arg1 ;
-(void)setCurrentSelection:(id)arg1 animate:(BOOL)arg2 ;
-(void)setHighlightedSelections:(NSArray *)arg1 ;
-(NSArray *)highlightedSelections;
-(void)takePasswordFrom:(id)arg1 ;
-(void)drawPagePost:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toPage:(id)arg2 ;
-(void)annotationsChangedOnPage:(id)arg1 ;
-(CGSize)rowSizeForPage:(id)arg1 ;
-(void)setAllowsDragging:(BOOL)arg1 ;
-(id)visiblePages;
-(void)setEnableDataDetectors:(BOOL)arg1 ;
-(BOOL)enableDataDetectors;
-(id)viewForPage:(id)arg1 ;
-(CGAffineTransform)_transformFromPageViewToPage:(id)arg1 ;
-(void)updateTileStats;
-(void)setDoPeriodicFlush:(BOOL)arg1 ;
-(BOOL)doPeriodicFlush;
-(void)setMaxScaleFactor:(double)arg1 ;
-(void)setMinScaleFactor:(double)arg1 ;
-(void)selfDidResize:(id)arg1 ;
-(CGSize)pageViewSizeForPage:(id)arg1 ;
-(void)scrollHorizontalBy:(double)arg1 ;
-(void)scrollByPage:(BOOL)arg1 ;
-(void)animateTransitionFromPage:(id)arg1 toPage:(id)arg2 ;
-(void)buildDebugDotFile;
-(void)setScaleFactor:(double)arg1 anchorPoint:(CGPoint)arg2 ;
-(long long)currentHistoryIndex;
-(void)setUsesPageLabels:(BOOL)arg1 ;
-(BOOL)usesPageLabels;
-(void)setDisplaysSoloPagesCentered:(BOOL)arg1 ;
-(void)setDisableInterpageSpacing:(BOOL)arg1 ;
-(void)setScrollingChangesPages:(BOOL)arg1 ;
-(void)setLineWidthThreshold:(double)arg1 ;
-(void)setPageColor:(id)arg1 ;
-(id)pageColor;
-(BOOL)displaysMarkupAnnotations;
-(void)setPopupManager:(id)arg1 ;
-(void)endEditingAnnotation;
-(double)defaultGutterWidth;
-(BOOL)automaticallyHandleGutter;
-(id)swipeGestureRecognizer;
@end

