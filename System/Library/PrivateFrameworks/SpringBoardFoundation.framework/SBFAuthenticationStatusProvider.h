/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFAuthenticationStatusProvider <NSObject,SBFAuthenticationRevoker>
@required
-(BOOL)hasPasscodeSet;
-(BOOL)hasAuthenticatedAtLeastOnceSinceBoot;
-(BOOL)isAuthenticatedCached;
-(BOOL)isAuthenticated;

@end
