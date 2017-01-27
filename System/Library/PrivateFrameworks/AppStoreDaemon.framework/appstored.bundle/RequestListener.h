/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/BaseListener.h>
#import <libobjc.A.dylib/ASDRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, ISOperationQueue, NSString;

@interface RequestListener : BaseListener <ASDRequest> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ISOperationQueue* _operationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initializeConnection:(id)arg1 ;
-(Class)_operationClassForRequestType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)startRequestType:(unsigned long long)arg1 withOptions:(id)arg2 ;
@end
