/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFloatVectorDataBuffer.h>

@interface TSCH3Dvec1DataBuffer : TSCH3DFloatVectorDataBuffer {

	vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float> > >* mContainer;

}

@property (nonatomic,readonly) vector<glm::detail::tvec1<float>* container; 
-(unsigned long long)componentByteSize;
-(void)fillCapacity;
-(id)elementsAtIndices:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(const void*)data;
-(vector<glm::detail::tvec1<float>*)container;
-(void)clear;
-(unsigned long long)components;
@end
