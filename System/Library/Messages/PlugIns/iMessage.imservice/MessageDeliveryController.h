/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@class IMMultiQueue, NSMutableDictionary, IMTimer, IDSService, NSString;

@interface MessageDeliveryController : NSObject <IDSServiceDelegatePrivate> {

	IMMultiQueue* _deliveryQueues;
	NSMutableDictionary* _typingContext;
	IMTimer* _typingContextTimer;
	NSMutableDictionary* _activeDeviceForHandle;
	IDSService* _idsService;
	NSMutableDictionary* _pendingSends;
	NSMutableDictionary* _pendingWillSendBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)service:(id)arg1 account:(id)arg2 messageIdentifier:(id)arg3 alternateCallbackID:(id)arg4 updatedWithResponseCode:(long long)arg5 error:(id)arg6 lastCall:(BOOL)arg7 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 alternateCallbackID:(id)arg4 willSendToDestinations:(id)arg5 skippedDestinations:(id)arg6 registrationPropertyToDestinations:(id)arg7 ;
-(id)activeDeviceForHandle:(id)arg1 ;
-(void)updateLatestActiveDestination:(id)arg1 ForHandle:(id)arg2 incomingType:(unsigned char)arg3 ;
-(void)noteRecentMessageForPeople:(id)arg1 ;
-(void)sendMessageErrorWithInfo:(long long)arg1 toToken:(id)arg2 toID:(id)arg3 fromID:(id)arg4 fromAccount:(id)arg5 forMessageID:(id)arg6 additionalInfo:(id)arg7 fileSize:(id)arg8 failureTimeSeconds:(double)arg9 failReasonMessage:(id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)sendMessageDictionary:(id)arg1 fromID:(id)arg2 fromAccount:(id)arg3 toURIs:(id)arg4 priority:(long long)arg5 options:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)sendMessage:(id)arg1 context:(id)arg2 groupContext:(id)arg3 toPeople:(id)arg4 fromID:(id)arg5 fromAccount:(id)arg6 chatIdentifier:(id)arg7 originalPayload:(id)arg8 fakeSavedReceiptBlock:(/*^block*/id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)sendBubblePayloadMessageDictionary:(id)arg1 fromID:(id)arg2 fromAccount:(id)arg3 toURIs:(id)arg4 priority:(long long)arg5 options:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)sendMessageDictionary:(id)arg1 encryptDictionary:(BOOL)arg2 fromID:(id)arg3 fromAccount:(id)arg4 toURIs:(id)arg5 priority:(long long)arg6 options:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(id)_propertyForExpressiveSendStyle:(id)arg1 ;
-(void)_sendMessage:(id)arg1 context:(id)arg2 deliveryContext:(id)arg3 fromID:(id)arg4 fromAccount:(id)arg5 toID:(id)arg6 chatIdentifier:(id)arg7 toSessionToken:(id)arg8 toPeople:(id)arg9 originallyToPeople:(id)arg10 requiredRegProperties:(id)arg11 interestingRegProperties:(id)arg12 requiresLackOfRegProperties:(id)arg13 canInlineAttachments:(BOOL)arg14 type:(long long)arg15 msgPayloadUploadDictionary:(id)arg16 originalPayload:(id)arg17 willSendBlock:(/*^block*/id)arg18 completionBlock:(/*^block*/id)arg19 ;
-(BOOL)shouldSendAuxXML:(id)arg1 ;
-(id)_compressedAttributionInfoForMessage:(id)arg1 ;
-(BOOL)_enableBackwardsCompatibility;
-(id)_computeRegPropertiesForNewFeatures:(id)arg1 currentRegProperties:(id)arg2 currentInterestingProp:(id)arg3 ;
-(void)_enqueueUpdateBlock:(/*^block*/id)arg1 willSendBlock:(/*^block*/id)arg2 identifier:(id)arg3 callbackID:(id)arg4 ;
-(void)__pruneTypingContexts;
-(void)_setTimerForPruningTypingContext;
-(BOOL)_hasRecentlyMessaged:(id)arg1 ;
-(void)_enqueueSendMessageWorkBlock:(/*^block*/id)arg1 forURIs:(id)arg2 ;
-(void)sendMessageError:(long long)arg1 toToken:(id)arg2 toID:(id)arg3 fromID:(id)arg4 fromAccount:(id)arg5 forMessageID:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)sendToLocalPeers:(id)arg1 ;
-(id)localDevice;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
@end
