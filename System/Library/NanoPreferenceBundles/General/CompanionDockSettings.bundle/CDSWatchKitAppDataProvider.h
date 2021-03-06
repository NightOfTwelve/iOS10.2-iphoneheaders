/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/General/CompanionDockSettings.bundle/CompanionDockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionDockSettings/CDSAppDataProvider.h>

@protocol CDSAppDataProviderDelegate;
@class NSString;

@interface CDSWatchKitAppDataProvider : NSObject <CDSAppDataProvider> {

	id<CDSAppDataProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CDSAppDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_appsDidChange;
-(void)loadAppsWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDelegate:(id<CDSAppDataProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<CDSAppDataProviderDelegate>)delegate;
@end

