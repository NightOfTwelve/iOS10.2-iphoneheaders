/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableDictionary, GEONavdClientInfo;

@interface GEONavdPeer : NSObject {

	NSXPCConnection* _connection;
	NSMutableDictionary* _entitlementCache;
	GEONavdClientInfo* _clientInfo;
	BOOL _expectingUpdates;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) GEONavdClientInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) BOOL expectingUpdates;                         //@synthesize expectingUpdates=_expectingUpdates - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)connection;
-(id)initWithXPCConnection:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(GEONavdClientInfo *)clientInfo;
-(BOOL)expectingUpdates;
-(void)setExpectingUpdates:(BOOL)arg1 ;
@end

