/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSNumber;

@interface IDSMessageContext : NSObject {

	NSMutableDictionary* _dict;
	id _boostContext;
	NSObject*<OS_dispatch_queue> _ivarQueue;

}

@property (assign,nonatomic) BOOL wantsAppAck; 
@property (nonatomic,copy) NSString * storageGuid; 
@property (assign,nonatomic) NSNumber * originalCommand; 
@property (assign,nonatomic) NSNumber * broadcastTime; 
@property (assign,nonatomic) NSNumber * priority; 
@property (nonatomic,retain) id boostContext; 
@property (assign,nonatomic) long long broadcastID; 
@property (assign,nonatomic) long long connectionType; 
@property (nonatomic,copy) NSString * outgoingResponseIdentifier; 
@property (nonatomic,copy) NSString * incomingResponseIdentifier; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSString * fromID; 
@property (nonatomic,copy) NSString * toID; 
@property (nonatomic,copy) NSString * originalDestinationDevice; 
@property (assign,nonatomic) BOOL expectsPeerResponse; 
@property (assign,nonatomic) BOOL wantsManualAck; 
@property (assign,nonatomic) BOOL fromServerStorage; 
-(id)npkDescription;
-(id)pkDescription;
-(id)pbDescription;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)priority;
-(void)setPriority:(NSNumber *)arg1 ;
-(long long)connectionType;
-(void)setConnectionType:(long long)arg1 ;
-(void)setStorageGuid:(NSString *)arg1 ;
-(void)setToID:(NSString *)arg1 ;
-(NSString *)toID;
-(void)setOriginalDestinationDevice:(NSString *)arg1 ;
-(NSString *)originalDestinationDevice;
-(void)setOriginalCommand:(NSNumber *)arg1 ;
-(NSNumber *)originalCommand;
-(void)setBroadcastTime:(NSNumber *)arg1 ;
-(void)setBroadcastID:(long long)arg1 ;
-(BOOL)wantsManualAck;
-(void)setFromServerStorage:(BOOL)arg1 ;
-(BOOL)fromServerStorage;
-(void)setFromID:(NSString *)arg1 ;
-(void)setWantsAppAck:(BOOL)arg1 ;
-(void)setExpectsPeerResponse:(BOOL)arg1 ;
-(NSNumber *)broadcastTime;
-(long long)broadcastID;
-(BOOL)wantsAppAck;
-(void)setWantsManualAck:(BOOL)arg1 ;
-(void)setBoostContext:(id)arg1 ;
-(NSString *)fromID;
-(id)boostContext;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 boostContext:(id)arg2 ;
-(void)setOutgoingResponseIdentifier:(NSString *)arg1 ;
-(void)setIncomingResponseIdentifier:(NSString *)arg1 ;
-(NSString *)storageGuid;
-(NSString *)outgoingResponseIdentifier;
-(NSString *)serviceIdentifier;
-(NSString *)incomingResponseIdentifier;
-(BOOL)expectsPeerResponse;
@end

