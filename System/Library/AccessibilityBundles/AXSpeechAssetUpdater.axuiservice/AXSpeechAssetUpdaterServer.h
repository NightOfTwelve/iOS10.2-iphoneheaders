/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:53:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/AXSpeechAssetUpdater.axuiservice/AXSpeechAssetUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpeechAssetUpdater/AXUIService.h>
#import <AXSpeechAssetUpdater/AFAssistantUIService.h>
#import <AXSpeechAssetUpdater/AFSpeechDelegate.h>
#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol OS_dispatch_queue;
@class AXDispatchTimer, AFDictationConnection, NSObject, NSString;

@interface AXSpeechAssetUpdaterServer : NSObject <AXUIService, AFAssistantUIService, AFSpeechDelegate, AFDictationDelegate> {

	double _lastTTSVoiceAssetUpdate;
	AXDispatchTimer* _pronunciationiCloudPusher;
	BOOL _isUpdatingCachedTTSVoices;
	AFDictationConnection* _dictationConnection;
	BOOL _isRecording;
	NSObject*<OS_dispatch_queue> _assetWorkQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned long long)arg1 ;
-(void)_customPronunicationsSettingsChanged;
-(id)_vocalizerAssets:(BOOL)arg1 ;
-(id)_siriAssets;
-(void)_checkForVocalizerAssetUpdates;
-(void)_saveCustomPronuciationsToExternals;
-(void)_handleFailureForSpeechPronunciation:(id)arg1 ;
-(void)_beginDownloadIfNecessaryForAssets:(id)arg1 ;
-(id)_vocalizerAssetsForLanguage:(id)arg1 ;
-(void)_handleExtantVoices;
-(void)_cancelPronunciationSession;
-(void)_stopPronunciationSession;
-(BOOL)_isVocalizerAsset:(id)arg1 ;
-(void)_downloadAssetsForSelectedVoices;
-(void)_checkForMacinTalkAssetUpdates;
-(void)_monitoriCloudPronunciations;
-(void)_updateCachedTTSVoiceAssets;
-(id)_alexAssets;
-(float)_pronunciationAudioLevel;
-(void)_updateAsset:(id)arg1 existingAsset:(id)arg2 ;
-(void)_checkForAssets:(BOOL)arg1 ;
-(void)_startPronunciationSession:(id)arg1 ;
-(void)_iCloudReconcileDataStore:(id)arg1 ;
-(void)_syncToWatch;
-(void)_handleAssetProgress:(id)arg1 error:(id)arg2 asset:(id)arg3 installedAsset:(id)arg4 ;
-(void)_addToDownloadQueue:(id)arg1 ;
-(void)_purgeExistingAsset:(id)arg1 inFavorOfAsset:(id)arg2 ;
-(id)_languageForAsset:(id)arg1 ;
-(id)_combinedVocalizerAssets:(BOOL)arg1 ;
-(void)_icloudDataChanged:(id)arg1 ;
-(id)init;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizeTranscriptionObjects:(id)arg2 languageModel:(id)arg3 ;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)_mobileAssetDownloadOptions;
@end
