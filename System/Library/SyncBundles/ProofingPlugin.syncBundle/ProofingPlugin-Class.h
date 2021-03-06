/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATClient.h>

@class PRDNCSession, NSMutableArray, NSString;

@interface ProofingPlugin : NSObject <ATClient> {

	BOOL _unitTesting;
	PRDNCSession* _dncSession;
	NSMutableArray* _clientManifest;

}

@property (nonatomic,retain) NSMutableArray * clientManifest;              //@synthesize clientManifest=_clientManifest - In the implementation block
@property (nonatomic,readonly) PRDNCSession * dncSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)clientManifest;
-(void)setClientManifest:(NSMutableArray *)arg1 ;
-(PRDNCSession *)dncSession;
-(id)init;
-(void)dealloc;
-(id)supportedDataclasses;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)registerMessageHandlersWithLink:(id)arg1 ;
-(id)currentSyncAnchor;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1 ;
-(id)installedAssetMetrics;
@end

