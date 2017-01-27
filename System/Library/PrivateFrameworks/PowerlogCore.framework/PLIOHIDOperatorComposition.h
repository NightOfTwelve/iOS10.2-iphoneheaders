/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PowerlogCore/PowerlogCore-Structs.h>
@class NSArray, NSString, PLOperator;

@interface PLIOHIDOperatorComposition : NSObject {

	IOHIDEventSystemClientRef _eventSystemClient;
	NSArray* _serviceClients;
	NSString* _serviceName;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;

}

@property (retain) PLOperator * operator;                                    //@synthesize operator=_operator - In the implementation block
@property (assign) IOHIDEventSystemClientRef eventSystemClient;              //@synthesize eventSystemClient=_eventSystemClient - In the implementation block
@property (retain) NSArray * serviceClients;                                 //@synthesize serviceClients=_serviceClients - In the implementation block
@property (retain) NSString * serviceName;                                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) id operatorBlock;                                 //@synthesize operatorBlock=_operatorBlock - In the implementation block
-(void)dealloc;
-(id)dictionaryForKey:(id)arg1 ;
-(PLOperator *)operator;
-(IOHIDEventSystemClientRef)eventSystemClient;
-(void)setEventSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(void)setOperator:(PLOperator *)arg1 ;
-(NSArray *)serviceClients;
-(void)setServiceClients:(NSArray *)arg1 ;
-(id)initWithOperator:(id)arg1 forService:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithOperator:(id)arg1 forService:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
@end
