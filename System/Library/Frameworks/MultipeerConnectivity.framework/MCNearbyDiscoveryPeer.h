/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCPeerID, NSNetService, MCNearbyDiscoveryPeerConnection, NSMutableArray;

@interface MCNearbyDiscoveryPeer : NSObject {

	MCPeerID* _peerID;
	NSNetService* _netService;
	int _state;
	MCNearbyDiscoveryPeerConnection* _connection;
	MCNearbyDiscoveryPeerConnection* _trialConnection;
	NSMutableArray* _sendDataBuffer;

}

@property (nonatomic,retain) NSMutableArray * sendDataBuffer;                                //@synthesize sendDataBuffer=_sendDataBuffer - In the implementation block
@property (nonatomic,retain) MCNearbyDiscoveryPeerConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) MCPeerID * peerID;                                                //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) int state;                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                                      //@synthesize netService=_netService - In the implementation block
@property (nonatomic,retain) MCNearbyDiscoveryPeerConnection * trialConnection;              //@synthesize trialConnection=_trialConnection - In the implementation block
-(MCPeerID *)peerID;
-(void)setPeerID:(MCPeerID *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)invalidate;
-(id)stringForState:(int)arg1 ;
-(MCNearbyDiscoveryPeerConnection *)connection;
-(void)setConnection:(MCNearbyDiscoveryPeerConnection *)arg1 ;
-(void)closeConnection;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)flushDataBuffer;
-(MCNearbyDiscoveryPeerConnection *)trialConnection;
-(void)setTrialConnection:(MCNearbyDiscoveryPeerConnection *)arg1 ;
-(NSMutableArray *)sendDataBuffer;
-(void)setSendDataBuffer:(NSMutableArray *)arg1 ;
-(void)attachConnection:(id)arg1 ;
-(id)initWithPeerID:(id)arg1 ;
-(NSNetService *)netService;
@end
