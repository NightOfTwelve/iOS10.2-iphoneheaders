/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKPolylineGroupOverlayObserver.h>
#import <libobjc.A.dylib/VKPolylineObserver.h>

@protocol VKRouteMatchedAnnotationPresentation, VKGlobeLineContainerDelegate;
@class NSMutableArray, VKPolylineOverlay, NSMutableSet, NSString;

@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver> {

	id<VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
	id<VKGlobeLineContainerDelegate> _delegate;
	NSMutableArray* _overlays;
	GlobeView* _globeView;
	map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, std::__1::allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData> > > >* _polylinesToRoutes;
	VKPolylineOverlay* _selectedPolyline;
	NSMutableSet* _persistentOverlays;
	VKGlobeRouteSplit* _routeSplit;

}

@property (nonatomic,retain) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation; 
@property (assign,nonatomic) id<VKGlobeLineContainerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<VKGlobeLineContainerDelegate>)arg1 ;
-(void)dealloc;
-(id<VKGlobeLineContainerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)update;
-(void)addLine:(id)arg1 ;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(id)persistentOverlays;
-(void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2 ;
-(void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2 ;
-(void)setNeedsLayoutForPolyline:(id)arg1 ;
-(void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3 ;
-(id)initWithGlobeView:(GlobeView*)arg1 stylesheet:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg2 ;
-(void)removeLine:(id)arg1 ;
-(void)clearLineSelection;
-(void)setSelected:(id)arg1 selected:(BOOL)arg2 ;
-(void)_updateRouteSplit;
-(void)_recreateLinesIfNeeded;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)setRouteLineSplitAnnotation:(id<VKRouteMatchedAnnotationPresentation>)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(void)removeOverlay:(id)arg1 ;
-(id)overlays;
@end
