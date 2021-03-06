/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebFixedPositionContent : NSObject {

	WebFixedPositionContentData* _private;

}
-(void)setViewportConstrainedLayers:(HashMap<CALayer *, std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> >, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<std::__1::unique_ptr<WebCore::ViewportConstraints, std::__1::default_delete<WebCore::ViewportConstraints> > > >*)arg1 stickyContainerMap:(HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> >*)arg2 ;
-(double)minimumOffsetFromFixedPositionLayersToAnchorEdge:(long long)arg1 ofRect:(CGRect)arg2 inLayer:(id)arg3 ;
-(void)dealloc;
-(BOOL)hasFixedOrStickyPositionLayers;
-(void)scrollOrZoomChanged:(CGRect)arg1 ;
-(void)didFinishScrollingOrZooming;
-(void)overflowScrollPositionForLayer:(id)arg1 changedTo:(CGPoint)arg2 ;
-(id)initWithWebView:(id)arg1 ;
@end

