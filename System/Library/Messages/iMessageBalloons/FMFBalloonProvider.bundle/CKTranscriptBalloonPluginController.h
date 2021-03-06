/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/FMFBalloonProvider.bundle/FMFBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol CKTranscriptBalloonPluginController <CKTranscriptPluginViewReuseDelegate,IMBalloonPluginController>
@property (nonatomic,readonly) UIView*<CKTranscriptPluginView> pluginContentView; 
@property (nonatomic,copy) id updateSnapshot; 
@property (nonatomic,readonly) BOOL isInteractive; 
@property (nonatomic,readonly) BOOL wantsTranscriptTimestampDrawer; 
@property (nonatomic,readonly) BOOL wantsTranscriptGroupMonograms; 
@property (nonatomic,readonly) BOOL wantsBalloonGradient; 
@property (nonatomic,readonly) BOOL wantsOutline; 
@property (nonatomic,readonly) UIViewController * contentViewController; 
@optional
-(id)updateSnapshot;
-(void)relinquishDataSource;
-(void)configureWithDataSource:(id)arg1 isFromMe:(BOOL)arg2;
-(BOOL)isInteractive;
-(UIViewController *)contentViewController;
-(BOOL)handlePresentationAction;
-(void)pluginContentViewWillAppear;
-(BOOL)wantsTranscriptGroupMonograms;
-(void)setUpdateSnapshot:(/*^block*/id)arg1;
-(BOOL)wantsOutline;
-(BOOL)wantsBalloonGradient;
-(BOOL)wantsTranscriptTimestampDrawer;
-(void)pluginContentViewWillDisappear;

@required
-(UIView*<CKTranscriptPluginView>)pluginContentView;

@end

