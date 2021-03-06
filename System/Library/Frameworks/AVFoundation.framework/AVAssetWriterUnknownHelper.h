/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {

	short _alternateGroupID;

}
-(long long)status;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV2)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_AV2)arg1 ;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(BOOL)_canAddInput:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)setMetadata:(id)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)cancelWriting;
-(void)startWriting;
@end

