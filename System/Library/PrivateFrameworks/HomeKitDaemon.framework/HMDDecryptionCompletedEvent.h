/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDecryptionCompletedEvent : HMDLogEvent {

	BOOL _didDecryptionFail;

}

@property (assign,nonatomic) BOOL didDecryptionFail;              //@synthesize didDecryptionFail=_didDecryptionFail - In the implementation block
+(id)uuid;
+(id)decryptionCompletedWithFailure:(BOOL)arg1 ;
-(id)initWithFailure:(BOOL)arg1 ;
-(BOOL)didDecryptionFail;
-(void)setDidDecryptionFail:(BOOL)arg1 ;
@end

