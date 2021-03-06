/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPKTransientPassAssertionConnection, NSString;

@interface NPKTransientPassRequest : NSObject {

	BOOL _serviceModeRequested;
	NPKTransientPassAssertionConnection* _owningConnection;
	NSString* _uniqueID;

}

@property (assign,nonatomic,__weak) NPKTransientPassAssertionConnection * owningConnection;              //@synthesize owningConnection=_owningConnection - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL serviceModeRequested;                                                  //@synthesize serviceModeRequested=_serviceModeRequested - In the implementation block
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(NPKTransientPassAssertionConnection *)owningConnection;
-(void)setOwningConnection:(NPKTransientPassAssertionConnection *)arg1 ;
-(BOOL)serviceModeRequested;
-(void)setServiceModeRequested:(BOOL)arg1 ;
@end

