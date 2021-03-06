/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UIActivityIndicatorView, UIImage;

@interface HUWallpaperPhotoCell : UICollectionViewCell {

	BOOL _busy;
	NSString* _assetIdentifier;
	UIImageView* _imageView;
	UIActivityIndicatorView* _spinnerView;

}

@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinnerView;              //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * assetIdentifier;                           //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (assign,nonatomic) BOOL busy;                                          //@synthesize busy=_busy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(UIActivityIndicatorView *)spinnerView;
-(void)setSpinnerView:(UIActivityIndicatorView *)arg1 ;
-(void)setBusy:(BOOL)arg1 ;
-(BOOL)busy;
@end

