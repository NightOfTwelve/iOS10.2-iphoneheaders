/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, NSArray, UIView, UIColor, IKImageElement;

@interface _TVDescriptiveAlertTemplateController : _TVBgImageLoadingViewController {

	IKViewElement* _templateElement;
	NSArray* _templateSubviews;
	NSArray* _templateSubcontrollers;
	UIView* _preferredFocusView;
	UIColor* _backgroundColor;
	IKImageElement* _bgImageElement;
	IKImageElement* _bgHeroImageElement;

}
-(void)loadView;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_normalizeButtonsInViews:(id)arg1 ;
@end

