/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompanionSync/CompanionSync-Structs.h>
@interface SYStateProvider : NSObject {

	unsigned _type;
	unsigned long long _handle;
	id _state;
	os_unfair_lock_s _lock;
	/*^block*/id _encoder;

}

@property (nonatomic,copy) id encoder;              //@synthesize encoder=_encoder - In the implementation block
+(id)stateProviderWithName:(id)arg1 type:(unsigned)arg2 typeName:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 typeName:(id)arg3 ;
-(void)setEncoder:(id)arg1 ;
-(id)_encodedState;
-(id)encoder;
-(void)updateState:(id)arg1 ;
@end
