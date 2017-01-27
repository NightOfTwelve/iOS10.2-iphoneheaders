/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DMutable2DResources.h>

@class TSCH3DArray2D;

@interface TSCH3DArray2DResources : TSCH3DMutable2DResources {

	TSCH3DArray2D* mResources;

}
+(id)resourcesWithSize:(const tvec2<int>*)arg1 ;
+(id)resourcesWithResource:(id)arg1 ;
+(id)mResources;
-(BOOL)hasResourceAtIndex:(const tvec2<int>*)arg1 ;
-(id)firstResource;
-(void)setResource:(id)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(tvec2<int>)size;
-(void)dealloc;
-(id)initWithSize:(const tvec2<int>*)arg1 ;
-(id)resourceAtIndex:(const tvec2<int>*)arg1 ;
-(void)resize:(const tvec2<int>*)arg1 ;
@end
