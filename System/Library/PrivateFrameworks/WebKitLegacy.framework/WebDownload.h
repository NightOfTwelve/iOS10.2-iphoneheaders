/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLDownload.h>

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {

	WebDownloadInternal* _webInternal;

}
-(void)_setRealDelegate:(id)arg1 ;
-(id)_initWithLoadingConnection:(id)arg1 request:(id)arg2 response:(id)arg3 delegate:(id)arg4 proxy:(id)arg5 ;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 directory:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
@end
