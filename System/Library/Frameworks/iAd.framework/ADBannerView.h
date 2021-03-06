/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/ADAdRecipient.h>
#import <libobjc.A.dylib/ADDimmerViewDelegate.h>

@protocol ADBannerViewDelegate, ADBannerViewInternalDelegate;
@class UIView, UIViewController, NSString, NSTimer, ADPrivacyButton, NSURL, ADAdSpace, ADDimmerView;

@interface ADBannerView : UIView <ADAdRecipient, ADDimmerViewDelegate> {

	id<ADBannerViewDelegate> _weakDelegate;
	id<ADBannerViewInternalDelegate> _weakInternalDelegate;
	BOOL _bannerViewActionInProgress;
	BOOL _createdForIBInternal;
	BOOL _dimmed;
	BOOL _determiningConstraintBasedWidth;
	BOOL _inSecondConstraintsPass;
	BOOL _displayed;
	BOOL _scrolling;
	BOOL _debugHighlightEnabled;
	BOOL _imageUpdateEnabled;
	int _internalAdType;
	int _displayMode;
	int _state;
	long long _options;
	long long _adType;
	NSString* _advertisingSection;
	UIView* _highlightClippedView;
	UIView* _highlightHittableView;
	NSTimer* _highlightUpdateTimer;
	ADPrivacyButton* _privacyButton;
	NSString* _authenticationUserName;
	NSURL* _serverURL;
	ADAdSpace* _adSpace;
	ADDimmerView* _dimmerView;
	double _constraintBasedWidth;
	/*^block*/id _stateChangedBlock;

}

@property (nonatomic,retain) UIView * highlightClippedView;                                                    //@synthesize highlightClippedView=_highlightClippedView - In the implementation block
@property (nonatomic,retain) UIView * highlightHittableView;                                                   //@synthesize highlightHittableView=_highlightHittableView - In the implementation block
@property (nonatomic,retain) NSTimer * highlightUpdateTimer;                                                   //@synthesize highlightUpdateTimer=_highlightUpdateTimer - In the implementation block
@property (nonatomic,retain) ADPrivacyButton * privacyButton;                                                  //@synthesize privacyButton=_privacyButton - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                  //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                  //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,readonly) BOOL createdForIBInternal;                                                      //@synthesize createdForIBInternal=_createdForIBInternal - In the implementation block
@property (assign,getter=isBannerViewActionInProgress,nonatomic) BOOL bannerViewActionInProgress;              //@synthesize bannerViewActionInProgress=_bannerViewActionInProgress - In the implementation block
@property (nonatomic,retain) ADAdSpace * adSpace;                                                              //@synthesize adSpace=_adSpace - In the implementation block
@property (nonatomic,retain) ADDimmerView * dimmerView;                                                        //@synthesize dimmerView=_dimmerView - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                                      //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL determiningConstraintBasedWidth;                                             //@synthesize determiningConstraintBasedWidth=_determiningConstraintBasedWidth - In the implementation block
@property (assign,nonatomic) double constraintBasedWidth;                                                      //@synthesize constraintBasedWidth=_constraintBasedWidth - In the implementation block
@property (assign,nonatomic) BOOL inSecondConstraintsPass;                                                     //@synthesize inSecondConstraintsPass=_inSecondConstraintsPass - In the implementation block
@property (assign,nonatomic) BOOL displayed;                                                                   //@synthesize displayed=_displayed - In the implementation block
@property (assign,nonatomic) BOOL scrolling;                                                                   //@synthesize scrolling=_scrolling - In the implementation block
@property (assign,nonatomic) BOOL debugHighlightEnabled;                                                       //@synthesize debugHighlightEnabled=_debugHighlightEnabled - In the implementation block
@property (assign,nonatomic) BOOL imageUpdateEnabled;                                                          //@synthesize imageUpdateEnabled=_imageUpdateEnabled - In the implementation block
@property (assign,nonatomic) int displayMode;                                                                  //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) int state;                                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedBlock;                                                               //@synthesize stateChangedBlock=_stateChangedBlock - In the implementation block
@property (nonatomic,readonly) long long adType;                                                               //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic,__weak) id<ADBannerViewDelegate> delegate; 
@property (getter=isBannerLoaded,nonatomic,readonly) BOOL bannerLoaded; 
@property (nonatomic,copy) NSString * advertisingSection;                                                      //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int internalAdType;                                                             //@synthesize internalAdType=_internalAdType - In the implementation block
@property (nonatomic,readonly) long long options;                                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
+(BOOL)requiresConstraintBasedLayout;
+(CGSize)_sizeThatFitsSize:(CGSize)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3 ;
+(CGSize)sizeFromBannerContentSizeIdentifier:(id)arg1 ;
+(CGSize)_landscapeBannerSize;
+(CGSize)_portraitBannerSize;
+(CGRect)_frameThatFits:(CGRect)arg1 adType:(int)arg2 statusBarOrientationIsPortrait:(BOOL)arg3 ;
+(CGRect)_adWindowBounds;
+(void)setServerURL:(id)arg1 ;
-(NSURL *)serverURL;
-(BOOL)scrolling;
-(void)setScrolling:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<ADBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setAlpha:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<ADBannerViewDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)identifier;
-(UIViewController *)presentingViewController;
-(int)action;
-(void)_commonInit;
-(void)setCenter:(CGPoint)arg1 ;
-(id)context;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)setIdentifier:(id)arg1 ;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(BOOL)displayed;
-(long long)options;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(void)setContext:(id)arg1 ;
-(BOOL)hasAction;
-(void)setDisplayed:(BOOL)arg1 ;
-(int)displayMode;
-(id)uniqueIdentifier;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(id)initFromIBWithFrame:(CGRect)arg1 ;
-(id)_accessibilityUserTestingElementAttributes;
-(id)audioURL;
-(double)skipThreshold;
-(ADAdSpace *)adSpace;
-(id)_initWithInternalAdType:(int)arg1 options:(long long)arg2 ;
-(id)initFromIBWithFrame:(CGRect)arg1 adType:(long long)arg2 ;
-(int)internalAdType;
-(void)setDimmerView:(ADDimmerView *)arg1 ;
-(ADDimmerView *)dimmerView;
-(void)setPrivacyButton:(ADPrivacyButton *)arg1 ;
-(ADPrivacyButton *)privacyButton;
-(void)privacyButtonWasTapped;
-(BOOL)debugHighlightEnabled;
-(void)_resetHighlightTimer;
-(void)bannerTappedAtPoint:(CGPoint)arg1 ;
-(BOOL)isiAdContentServer;
-(void)setBannerViewActionInProgress:(BOOL)arg1 ;
-(void)reportNativeClickEvent;
-(void)_updateHighlight:(id)arg1 ;
-(BOOL)hasTransparencyDetails;
-(void)_forwardErrorToDelegate:(id)arg1 ;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)cancelBannerViewAction;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(id)stateChangedBlock;
-(void)updatePlaceholderImage;
-(void)setDeterminingConstraintBasedWidth:(BOOL)arg1 ;
-(void)setConstraintBasedWidth:(double)arg1 ;
-(BOOL)determiningConstraintBasedWidth;
-(double)constraintBasedWidth;
-(void)setInSecondConstraintsPass:(BOOL)arg1 ;
-(id)videoAssets;
-(id)staticImageURL;
-(id)logoImageURL;
-(id)headlineForLCD;
-(id)descriptionForLCD;
-(void)playbackStartedForImpressionSource:(int)arg1 ;
-(id)publicImpressionAttributes;
-(id)nativeMetadata;
-(void)loadAd:(id)arg1 ;
-(void)changeBannerViewState:(int)arg1 ;
-(void)serverBannerViewWillLoad;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1 ;
-(void)serverStoryboardDidTransitionOut;
-(void)storyboardViewControllerDidPresent;
-(void)pauseBannerMedia;
-(void)resumeBannerMedia;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(UIView *)adSpaceView;
-(void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(CGPoint)arg2 ;
-(BOOL)enableDimmerView:(id)arg1 ;
-(id)initWithAdType:(long long)arg1 ;
-(void)cycleImpressionImmediately;
-(BOOL)isBannerLoaded;
-(void)prerollDidStart;
-(void)prerollDidStop;
-(void)beginAction;
-(void)setRequiredContentSizeIdentifiers:(id)arg1 ;
-(id)requiredContentSizeIdentifiers;
-(void)setCurrentContentSizeIdentifier:(id)arg1 ;
-(id)currentContentSizeIdentifier;
-(void)suspendImpressionCycling;
-(void)resumeImpressionCycling;
-(void)playbackStarted;
-(void)playbackPaused;
-(void)playbackResumed;
-(void)playbackFinished:(id)arg1 ;
-(void)playbackFailed:(id)arg1 ;
-(void)bannerDidAppear;
-(void)bannerDidDisappear;
-(void)cancelScheduledAd;
-(void)scheduleAd;
-(void)userDidSkipPreroll;
-(long long)adType;
-(BOOL)isBannerViewActionInProgress;
-(NSString *)advertisingSection;
-(UIView *)highlightClippedView;
-(void)setHighlightClippedView:(UIView *)arg1 ;
-(UIView *)highlightHittableView;
-(void)setHighlightHittableView:(UIView *)arg1 ;
-(NSTimer *)highlightUpdateTimer;
-(void)setHighlightUpdateTimer:(NSTimer *)arg1 ;
-(NSString *)authenticationUserName;
-(BOOL)createdForIBInternal;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(BOOL)inSecondConstraintsPass;
-(void)setDebugHighlightEnabled:(BOOL)arg1 ;
-(BOOL)imageUpdateEnabled;
-(void)setImageUpdateEnabled:(BOOL)arg1 ;
-(void)setStateChangedBlock:(id)arg1 ;
-(void)setDisplayMode:(int)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
-(void)setServerURL:(NSURL *)arg1 ;
@end

