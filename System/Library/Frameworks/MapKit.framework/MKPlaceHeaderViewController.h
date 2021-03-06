/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class MKPlaceHeaderView;

@interface MKPlaceHeaderViewController : UIViewController {

	BOOL _compressedMode;
	BOOL _isTransitLine;

}

@property (nonatomic,readonly) MKPlaceHeaderView * headerView; 
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(MKPlaceHeaderView *)headerView;
-(id)initWithCompressedMode:(BOOL)arg1 isTransitLine:(BOOL)arg2 ;
@end

