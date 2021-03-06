/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _CDContextualChangeRegistration;

@interface RTDuetHelperRegistrationRecord : NSObject {

	NSString* _registrationIdentifier;
	_CDContextualChangeRegistration* _registration;
	/*^block*/id _eventReceivedBlock;
	/*^block*/id _contextChangeBlock;

}

@property (nonatomic,retain) NSString * registrationIdentifier;                           //@synthesize registrationIdentifier=_registrationIdentifier - In the implementation block
@property (nonatomic,retain) _CDContextualChangeRegistration * registration;              //@synthesize registration=_registration - In the implementation block
@property (nonatomic,copy) id eventReceivedBlock;                                         //@synthesize eventReceivedBlock=_eventReceivedBlock - In the implementation block
@property (nonatomic,copy) id contextChangeBlock;                                         //@synthesize contextChangeBlock=_contextChangeBlock - In the implementation block
+(id)contextStoreRegistrationIdentifierForNotificationName:(id)arg1 ;
-(id)initWithRegistrationIdentifier:(id)arg1 contextStoreRegistration:(id)arg2 contextChangeBlock:(/*^block*/id)arg3 eventReceivedBlock:(/*^block*/id)arg4 ;
-(NSString *)registrationIdentifier;
-(void)setRegistrationIdentifier:(NSString *)arg1 ;
-(_CDContextualChangeRegistration *)registration;
-(void)setRegistration:(_CDContextualChangeRegistration *)arg1 ;
-(id)eventReceivedBlock;
-(void)setEventReceivedBlock:(id)arg1 ;
-(id)contextChangeBlock;
-(void)setContextChangeBlock:(id)arg1 ;
@end

