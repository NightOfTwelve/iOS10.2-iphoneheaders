/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionRequest : PKPaymentWebServiceRequest {

	NSString* _action;
	PKServiceProviderPurchase* _purchase;

}

@property (nonatomic,copy) NSString * action;                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;              //@synthesize purchase=_purchase - In the implementation block
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(PKServiceProviderPurchase *)purchase;
-(id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 ;
-(id)initWithAction:(id)arg1 purchase:(id)arg2 ;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
@end
