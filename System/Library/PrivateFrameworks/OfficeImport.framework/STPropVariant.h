/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface STPropVariant : NSObject {

	SsrwPropVariant* mProp;

}
-(void)dealloc;
-(void)setStringValue:(id)arg1 ;
-(void)setShortValue:(short)arg1 ;
-(void)setLongValue:(int)arg1 ;
-(void)setBlobValue:(id)arg1 ;
-(SsrwPropVariant*)propVariant;
-(id)asDataOfType:(int*)arg1 ;
@end
