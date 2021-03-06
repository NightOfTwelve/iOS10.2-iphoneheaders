/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, BWNodeOutput, NSDictionary;


@protocol BWFigCameraSourceNode <NSObject>
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWFigVideoCaptureStream * captureStream; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride; 
@property (assign,nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed; 
@required
-(BWNodeOutput *)videoCaptureOutput;
-(BWFigVideoCaptureStream *)captureStream;
-(void)willStop;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(BOOL)arg1;
-(void)setVideoCaptureOutputColorInfoOverride:(id)arg1;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(BOOL)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
-(BWNodeOutput *)stillImageOutput;
-(BWFigVideoCaptureDevice *)captureDevice;

@end

