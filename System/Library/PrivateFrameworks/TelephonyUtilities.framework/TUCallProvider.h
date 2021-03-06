/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSURL, NSArray, TUSandboxExtendedURL, NSData;

@interface TUCallProvider : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsAudioOnly;
	BOOL _supportsAudioAndVideo;
	BOOL _supportsEmergency;
	BOOL _supportsVoicemail;
	unsigned _audioSessionID;
	NSString* _identifier;
	NSString* _localizedName;
	NSSet* _supportedHandleTypes;
	NSURL* _bundleURL;
	NSString* _bundleIdentifier;
	NSArray* _emergencyLabeledHandles;
	NSString* _URLScheme;
	NSArray* _handoffIdentifiers;
	TUSandboxExtendedURL* _sandboxExtendedRingtoneSoundURL;
	NSURL* _originalRingtoneSoundURL;
	NSData* _iconTemplateImageData;
	unsigned long long _maximumCallGroups;
	unsigned long long _maximumCallsPerCallGroup;

}

@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * supportedHandleTypes;                                          //@synthesize supportedHandleTypes=_supportedHandleTypes - In the implementation block
@property (nonatomic,copy) NSArray * emergencyLabeledHandles;                                     //@synthesize emergencyLabeledHandles=_emergencyLabeledHandles - In the implementation block
@property (nonatomic,copy) NSString * URLScheme;                                                  //@synthesize URLScheme=_URLScheme - In the implementation block
@property (nonatomic,copy) NSArray * handoffIdentifiers;                                          //@synthesize handoffIdentifiers=_handoffIdentifiers - In the implementation block
@property (nonatomic,retain) NSURL * ringtoneSoundURL; 
@property (nonatomic,retain) TUSandboxExtendedURL * sandboxExtendedRingtoneSoundURL;              //@synthesize sandboxExtendedRingtoneSoundURL=_sandboxExtendedRingtoneSoundURL - In the implementation block
@property (nonatomic,retain) NSURL * originalRingtoneSoundURL;                                    //@synthesize originalRingtoneSoundURL=_originalRingtoneSoundURL - In the implementation block
@property (nonatomic,copy) NSData * iconTemplateImageData;                                        //@synthesize iconTemplateImageData=_iconTemplateImageData - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallGroups;                                //@synthesize maximumCallGroups=_maximumCallGroups - In the implementation block
@property (assign,nonatomic) unsigned long long maximumCallsPerCallGroup;                         //@synthesize maximumCallsPerCallGroup=_maximumCallsPerCallGroup - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioOnly;                                              //@synthesize supportsAudioOnly=_supportsAudioOnly - In the implementation block
@property (assign,nonatomic) BOOL supportsAudioAndVideo;                                          //@synthesize supportsAudioAndVideo=_supportsAudioAndVideo - In the implementation block
@property (assign,nonatomic) BOOL supportsEmergency;                                              //@synthesize supportsEmergency=_supportsEmergency - In the implementation block
@property (assign,nonatomic) BOOL supportsVoicemail;                                              //@synthesize supportsVoicemail=_supportsVoicemail - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                                             //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (getter=isTelephonyProvider,nonatomic,readonly) BOOL telephonyProvider; 
@property (getter=isFaceTimeProvider,nonatomic,readonly) BOOL faceTimeProvider; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)localizedName;
-(id)initWithIdentifier:(id)arg1 ;
-(id)bundle;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned)audioSessionID;
-(BOOL)isFaceTimeProvider;
-(BOOL)isTelephonyProvider;
-(BOOL)supportsAudioAndVideo;
-(void)setSupportsAudioOnly:(BOOL)arg1 ;
-(void)setSupportsEmergency:(BOOL)arg1 ;
-(void)setSupportsVoicemail:(BOOL)arg1 ;
-(void)setSupportedHandleTypes:(NSSet *)arg1 ;
-(void)setSupportsAudioAndVideo:(BOOL)arg1 ;
-(NSString *)URLScheme;
-(NSURL *)ringtoneSoundURL;
-(NSURL *)originalRingtoneSoundURL;
-(NSData *)iconTemplateImageData;
-(unsigned long long)maximumCallGroups;
-(unsigned long long)maximumCallsPerCallGroup;
-(BOOL)supportsEmergency;
-(BOOL)supportsVoicemail;
-(NSSet *)supportedHandleTypes;
-(NSArray *)handoffIdentifiers;
-(NSArray *)emergencyLabeledHandles;
-(BOOL)isSystemProvider;
-(TUSandboxExtendedURL *)sandboxExtendedRingtoneSoundURL;
-(void)setSandboxExtendedRingtoneSoundURL:(TUSandboxExtendedURL *)arg1 ;
-(BOOL)isEqualToCallProvider:(id)arg1 ;
-(void)setEmergencyLabeledHandles:(NSArray *)arg1 ;
-(void)setURLScheme:(NSString *)arg1 ;
-(void)setHandoffIdentifiers:(NSArray *)arg1 ;
-(void)setRingtoneSoundURL:(NSURL *)arg1 ;
-(void)setOriginalRingtoneSoundURL:(NSURL *)arg1 ;
-(void)setIconTemplateImageData:(NSData *)arg1 ;
-(void)setMaximumCallGroups:(unsigned long long)arg1 ;
-(void)setMaximumCallsPerCallGroup:(unsigned long long)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(BOOL)supportsHandleType:(long long)arg1 ;
-(BOOL)supportsShowingInCallUI;
-(BOOL)prefersShowingInCallUI;
-(BOOL)hasRestrictionsInRetailEnvironment;
-(id)displayAppBundleIdentifier;
-(id)inCallUIBundleIdentifier;
-(void)setBundleURL:(NSURL *)arg1 ;
-(BOOL)supportsAudioOnly;
-(void)setLocalizedName:(NSString *)arg1 ;
@end

