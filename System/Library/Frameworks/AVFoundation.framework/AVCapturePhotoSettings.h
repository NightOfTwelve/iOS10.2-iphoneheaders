/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCapturePhotoSettingsInternal, NSDictionary, NSURL, NSArray;

@interface AVCapturePhotoSettings : NSObject <NSCopying> {

	AVCapturePhotoSettingsInternal* _internal;

}

@property (readonly) long long uniqueID; 
@property (copy,readonly) NSDictionary * format; 
@property (readonly) unsigned rawPhotoPixelFormatType; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,getter=isAutoDualCameraFusionEnabled,nonatomic) BOOL autoDualCameraFusionEnabled; 
@property (assign,getter=isHighResolutionPhotoEnabled,nonatomic) BOOL highResolutionPhotoEnabled; 
@property (nonatomic,copy) NSURL * livePhotoMovieFileURL; 
@property (nonatomic,copy) NSArray * livePhotoMovieMetadata; 
@property (nonatomic,readonly) NSArray * availablePreviewPhotoPixelFormatTypes; 
@property (nonatomic,copy) NSDictionary * previewPhotoFormat; 
+(id)photoSettingsWithFormat:(id)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 ;
+(id)photoSettingsFromPhotoSettings:(id)arg1 ;
+(long long)uniqueID;
+(id)photoSettings;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)format;
-(id)_description;
-(unsigned)formatFourCC;
-(unsigned)rawPhotoPixelFormatType;
-(id)livePhotoMovieFileURLForOriginalPhoto;
-(NSArray *)livePhotoMovieMetadata;
-(id)livePhotoMovieMetadataForOriginalPhoto;
-(unsigned)shutterSound;
-(id)livePhotoContentIdentifier;
-(id)livePhotoContentIdentifierForOriginalPhoto;
-(id)_initWithFormat:(id)arg1 rawPixelFormatType:(unsigned)arg2 uniqueID:(long long)arg3 exceptionReason:(id*)arg4 ;
-(void)setTurboModeEnabled:(BOOL)arg1 ;
-(void)setLivePhotoContentIdentifier:(id)arg1 ;
-(void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1 ;
-(id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)isAutoDualCameraFusionEnabled;
-(BOOL)isTurboModeEnabled;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(BOOL)isHighResolutionPhotoEnabled;
-(NSDictionary *)previewPhotoFormat;
-(BOOL)isSquareCropEnabled;
-(BOOL)isAutoBravoImageFusionEnabled;
-(void)setAutoBravoImageFusionEnabled:(BOOL)arg1 ;
-(unsigned)previewFormatFourCC;
-(CGSize)previewCGSize;
-(long long)uniqueID;
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(long long)HDRMode;
-(void)setHDRMode:(long long)arg1 ;
-(void)setOriginalPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURL:(NSURL *)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(NSArray *)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(NSURL *)livePhotoMovieFileURL;
-(void)setHighResolutionPhotoEnabled:(BOOL)arg1 ;
-(void)setAutoShallowDepthOfFieldEffectEnabled:(BOOL)arg1 ;
-(BOOL)isAutoShallowDepthOfFieldEffectEnabled;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setAutoDualCameraFusionEnabled:(BOOL)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(BOOL)isOriginalPhotoDeliveryEnabled;
-(NSArray *)availablePreviewPhotoPixelFormatTypes;
-(void)setPreviewPhotoFormat:(NSDictionary *)arg1 ;
@end

