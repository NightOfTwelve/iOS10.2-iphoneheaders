/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUAppPurgingNotification.h>

@protocol SUAppPurgingNotification <NSObject>
@optional
+(void)postAppPurgingNotificationWithAppsToPurge:(id)arg1 completion:(/*^block*/id)arg2;

@end


@class NSString;

@interface SUAppPurgingNotification : NSObject <SUAppPurgingNotification>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)postAppPurgingNotificationWithAppsToPurge:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

