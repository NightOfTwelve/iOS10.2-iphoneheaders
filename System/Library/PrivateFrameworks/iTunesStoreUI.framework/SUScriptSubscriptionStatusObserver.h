/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSNumber, SUScriptSubscriptionStatusResponse;

@interface SUScriptSubscriptionStatusObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSNumber* _lastKnownActiveAccountUniqueIdentifier;
	SUScriptSubscriptionStatusResponse* _lastKnownSubscriptionStatusResponse;

}
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(void)_handleSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
@end

