/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DDParsecHostVCInterface.h>

@protocol DDParsecHostVCInterface;
@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {

	BOOL _receivedInteractionDidFinish;
	id<DDParsecHostVCInterface> _hostSideDelegate;

}

@property (__weak) id<DDParsecHostVCInterface> hostSideDelegate;              //@synthesize hostSideDelegate=_hostSideDelegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(BOOL)canBecomeFirstResponder;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)interactionEnded;
-(void)interactionEndedWithPunchout:(BOOL)arg1 ;
-(void)showingErrorView:(BOOL)arg1 ;
-(void)showingFTE:(BOOL)arg1 ;
-(void)openParsecURL:(id)arg1 ;
-(void)getStatusBarHidden:(/*^block*/id)arg1 ;
-(void)openTrailerPunchout:(id)arg1 ;
-(id<DDParsecHostVCInterface>)hostSideDelegate;
-(void)setHostSideDelegate:(id<DDParsecHostVCInterface>)arg1 ;
@end

