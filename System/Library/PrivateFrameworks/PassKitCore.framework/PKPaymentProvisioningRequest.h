/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentOverlayableRequest.h>

@class NSNumber, NSArray, PKPaymentDeviceProvisioningData, PKPaymentEligibilityResponse, NSString, NSData, PKDSPContext;

@interface PKPaymentProvisioningRequest : PKPaymentOverlayableRequest {

	NSNumber* _primaryJSBLSequenceCounter;
	NSArray* _certChain;
	BOOL _devSigned;
	PKPaymentDeviceProvisioningData* _deviceData;
	PKPaymentEligibilityResponse* _eligibilityResponse;
	NSString* _nonce;
	NSString* _cardholderName;
	NSString* _cardSecurityCode;
	NSData* _activationData;
	PKDSPContext* _context;

}

@property (nonatomic,retain) PKPaymentEligibilityResponse * eligibilityResponse;              //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (nonatomic,copy) NSString * nonce;                                                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                         //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * cardSecurityCode;                                       //@synthesize cardSecurityCode=_cardSecurityCode - In the implementation block
@property (nonatomic,copy) NSData * activationData;                                           //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,copy) PKDSPContext * context;                                            //@synthesize context=_context - In the implementation block
-(PKDSPContext *)context;
-(void)setContext:(PKDSPContext *)arg1 ;
-(void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_requestBodyWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deviceScoreWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateContextUsingWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)cardSecurityCode;
-(void)setEligibilityResponse:(PKPaymentEligibilityResponse *)arg1 ;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(NSString *)cardholderName;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(id)initWithEligibilityResponse:(id)arg1 ;
-(NSData *)activationData;
-(void)setActivationData:(NSData *)arg1 ;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setCardSecurityCode:(NSString *)arg1 ;
@end
