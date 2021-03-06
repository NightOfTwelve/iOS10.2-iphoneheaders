/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MPSImage.h>

@interface MPSTemporaryImage : MPSImage {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 ;
+(id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(unsigned long long)readCount;
-(void)dealloc;
-(id)debugDescription;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
@end

