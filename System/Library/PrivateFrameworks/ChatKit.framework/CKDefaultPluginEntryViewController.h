/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CKPluginEntryViewController.h>

@protocol CKTranscriptBalloonPluginController;
@class IMBalloonPluginDataSource, UIViewController, CKBalloonView, IMBalloonPlugin, NSString;

@interface CKDefaultPluginEntryViewController : UIViewController <CKPluginEntryViewController> {

	IMBalloonPluginDataSource* _datasource;
	UIViewController*<CKTranscriptBalloonPluginController> _pluginBubbleViewController;
	CKBalloonView* _balloonView;
	IMBalloonPlugin* _plugin;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * datasource;                                                         //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) UIViewController*<CKTranscriptBalloonPluginController> pluginBubbleViewController;              //@synthesize pluginBubbleViewController=_pluginBubbleViewController - In the implementation block
@property (nonatomic,retain) CKBalloonView * balloonView;                                                                    //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * plugin;                                                                       //@synthesize plugin=_plugin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL wantsClearButton; 
@property (readonly) BOOL wantsEdgeToEdgeLayout; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(IMBalloonPlugin *)plugin;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(void)setDatasource:(IMBalloonPluginDataSource *)arg1 ;
-(IMBalloonPluginDataSource *)datasource;
-(CKBalloonView *)balloonView;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)setPluginBubbleViewController:(UIViewController*<CKTranscriptBalloonPluginController>)arg1 ;
-(void)_loadBalloonView;
-(id)_imageBalloon;
-(id)_transcriptPluginBalloon;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 ;
-(id)payloadWillSend;
-(BOOL)wantsClearButton;
-(BOOL)wantsEdgeToEdgeLayout;
-(id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 andPlugin:(id)arg3 ;
-(UIViewController*<CKTranscriptBalloonPluginController>)pluginBubbleViewController;
@end

