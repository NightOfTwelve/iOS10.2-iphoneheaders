/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSArray, NSData;

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction <NSSecureCoding> {

	NSLocale* _locale;
	unsigned short _resultSW;
	unsigned long long _PINCompletion;
	NSArray* _PINMessageIndices;
	NSData* _resultData;

}

@property (assign) unsigned long long PINCompletion;              //@synthesize PINCompletion=_PINCompletion - In the implementation block
@property (retain) NSArray * PINMessageIndices;                   //@synthesize PINMessageIndices=_PINMessageIndices - In the implementation block
@property (retain) NSLocale * locale; 
@property (assign) unsigned short resultSW;                       //@synthesize resultSW=_resultSW - In the implementation block
@property (retain) NSData * resultData;                           //@synthesize resultData=_resultData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(NSData *)resultData;
-(void)setResultData:(NSData *)arg1 ;
-(unsigned long long)PINCompletion;
-(void)setPINCompletion:(unsigned long long)arg1 ;
-(NSArray *)PINMessageIndices;
-(void)setPINMessageIndices:(NSArray *)arg1 ;
-(unsigned short)resultSW;
-(void)setResultSW:(unsigned short)arg1 ;
@end
