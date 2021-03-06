/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadError.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface DownloadGenericError : DownloadError <NSCopying> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(BOOL)canCoalesceWithError:(id)arg1 ;
-(void)performActionForResponseFlags:(unsigned long long)arg1 ;
-(BOOL)_isInstallError:(id)arg1 ;
-(id)_notificationTitle;
-(id)_notificationBody;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyUserNotification;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
@end

