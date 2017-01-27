/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosExtras/VideosExtrasTemplateViewController.h>

@class VideosExtrasBannerController, VideosExtrasGridElementViewController;

@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController {

	VideosExtrasBannerController* _bannerController;
	VideosExtrasGridElementViewController* _gridViewController;
	unsigned long long _selectedItemIndex;

}

@property (assign,nonatomic) unsigned long long selectedItemIndex;              //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
-(id)contentScrollView;
-(void)viewDidLoad;
-(BOOL)showsPlaceholder;
-(id)templateElement;
-(unsigned long long)selectedItemIndex;
-(void)setSelectedItemIndex:(unsigned long long)arg1 ;
-(void)_prepareLayout;
@end
