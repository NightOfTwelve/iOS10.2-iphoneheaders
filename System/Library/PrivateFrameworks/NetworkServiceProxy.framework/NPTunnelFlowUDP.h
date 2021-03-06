/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NPTunnelFlow.h>

@class NSMutableArray, NWUDPSession, NSDate;

@interface NPTunnelFlowUDP : NPTunnelFlow {

	NSMutableArray* _savedDirectData;
	unsigned long long _savedDataSize;
	NWUDPSession* _directSession;
	NSDate* _firstPacketDate;

}

@property (retain) NSMutableArray * savedDirectData;              //@synthesize savedDirectData=_savedDirectData - In the implementation block
@property (assign) unsigned long long savedDataSize;              //@synthesize savedDataSize=_savedDataSize - In the implementation block
@property (retain) NWUDPSession * directSession;                  //@synthesize directSession=_directSession - In the implementation block
@property (retain) NSDate * firstPacketDate;                      //@synthesize firstPacketDate=_firstPacketDate - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)sendDataOnDirectSession:(id)arg1 ;
-(void)setFirstPacketDate:(NSDate *)arg1 ;
-(void)setDirectSession:(NWUDPSession *)arg1 ;
-(NWUDPSession *)directSession;
-(void)setSavedDirectData:(NSMutableArray *)arg1 ;
-(void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2 ;
-(void)handleIncomingData:(id)arg1 andError:(id)arg2 ;
-(void)handleAppData:(id)arg1 andError:(id)arg2 ;
-(void)readDataFromClient;
-(NSMutableArray *)savedDirectData;
-(unsigned long long)savedDataSize;
-(void)setSavedDataSize:(unsigned long long)arg1 ;
-(NSDate *)firstPacketDate;
-(void)startHandlingIncomingData;
-(void)startDirectConnection;
-(void)stopDirectConnection;
-(unsigned long long)currentMaxSendDataSize;
@end

