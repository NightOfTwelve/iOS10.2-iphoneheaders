/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentAuthorizationDataModel, NSString;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {

	long long _type;
	long long _status;
	PKPaymentAuthorizationDataModel* _model;

}

@property (assign,nonatomic,__weak) PKPaymentAuthorizationDataModel * model;              //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) long long type;                                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long status;                                            //@synthesize status=_status - In the implementation block
@property (getter=isRejected,nonatomic,readonly) BOOL rejected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)dataType;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(PKPaymentAuthorizationDataModel *)model;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(BOOL)isRejected;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(PKPaymentAuthorizationDataModel *)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

