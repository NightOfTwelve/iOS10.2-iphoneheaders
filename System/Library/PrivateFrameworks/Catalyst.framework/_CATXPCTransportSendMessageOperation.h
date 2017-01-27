/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class CATXPCTransport, CATMessage;

@interface _CATXPCTransportSendMessageOperation : CATOperation {

	CATXPCTransport* _transport;
	CATMessage* _message;

}

@property (assign,nonatomic,__weak) CATXPCTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) CATMessage * message;                            //@synthesize message=_message - In the implementation block
-(void)setMessage:(CATMessage *)arg1 ;
-(CATMessage *)message;
-(void)main;
-(BOOL)isAsynchronous;
-(void)didFailWithError:(id)arg1 ;
-(void)didProcessMessage;
-(CATXPCTransport *)transport;
-(void)setTransport:(CATXPCTransport *)arg1 ;
@end
