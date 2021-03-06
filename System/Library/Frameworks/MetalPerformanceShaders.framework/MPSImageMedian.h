/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@interface MPSImageMedian : MPSUnaryImageKernel {

	unsigned long long _filterDiameter;

}

@property (nonatomic,readonly) unsigned long long kernelDiameter;              //@synthesize filterDiameter=_filterDiameter - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
+(unsigned long long)minKernelDiameter;
+(unsigned long long)maxKernelDiameter;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP5)arg1 ;
-(id)initWithDevice:(id)arg1 kernelDiameter:(unsigned long long)arg2 ;
-(unsigned long long)kernelDiameter;
-(id)initWithDevice:(id)arg1 ;
@end

