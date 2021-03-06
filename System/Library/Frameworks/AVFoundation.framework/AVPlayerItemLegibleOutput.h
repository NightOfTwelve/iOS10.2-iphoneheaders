/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemLegibleOutputInternal;

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput {

	AVPlayerItemLegibleOutputInternal* _legibleOutputInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemLegibleOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id<AVPlayerItemLegibleOutputPushDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)suppressesPlayerRendering;
-(id)_figLegibleOutputsDictionaryOptions;
-(double)advanceIntervalForDelegateInvocation;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)_pushAttributedStrings:(id)arg1 andSampleBuffers:(id)arg2 atItemTime:(SCD_Struct_AV2)arg3 ;
-(void)_signalFlush;
-(void)_collectUncollectables;
-(id)textStylingResolution;
-(id)initWithMediaSubtypesForNativeRepresentation:(id)arg1 ;
-(id)initWithDependencyFactory:(id)arg1 mediaSubtypesForNativeRepresentation:(id)arg2 ;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
-(void)setTextStylingResolution:(id)arg1 ;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)finalize;
@end

