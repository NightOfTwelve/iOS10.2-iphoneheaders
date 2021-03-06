/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWTCPConnectionAuthenticationDelegate <NSObject>
@optional
-(BOOL)shouldProvideIdentityForConnection:(id)arg1;
-(void)provideIdentityForConnection:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)shouldEvaluateTrustForConnection:(id)arg1;
-(void)evaluateTrustForConnection:(id)arg1 peerCertificateChain:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

