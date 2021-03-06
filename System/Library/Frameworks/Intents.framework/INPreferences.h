/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _INVocabularyConnection, NSString;

@interface INPreferences : NSObject {

	_INVocabularyConnection* _assistantdConnection;
	NSString* _cachedSiriLanguageCode;

}

@property (setter=_setCachedSiriLanguageCode:,copy) NSString * _cachedSiriLanguageCode;              //@synthesize cachedSiriLanguageCode=_cachedSiriLanguageCode - In the implementation block
+(id)sharedPreferences;
+(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
+(long long)siriAuthorizationStatus;
+(id)siriLanguageCode;
-(id)init;
-(id)_init;
-(void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
-(void)_setCachedSiriLanguageCode:(id)arg1 ;
-(BOOL)_weAreRunningAsAnExtension;
-(void)assertThisProcessHasSiriEntitlement;
-(void)requestSiriAuthorization:(/*^block*/id)arg1 ;
-(long long)_siriAuthorizationStatus;
-(id)_siriLanguageCode;
-(void)_updateWithExtensionContext:(id)arg1 ;
-(NSString *)_cachedSiriLanguageCode;
@end

