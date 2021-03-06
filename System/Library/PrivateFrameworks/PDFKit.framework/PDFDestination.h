/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFDestinationPrivate, PDFPage;

@interface PDFDestination : NSObject <NSCopying> {

	PDFDestinationPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFPage * page; 
@property (nonatomic,readonly) CGPoint point; 
@property (assign,nonatomic) double zoom; 
-(id)init;
-(id)description;
-(long long)compare:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)point;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
-(void)commonInit;
-(id)document;
-(PDFPage *)page;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 ;
-(const CFArrayRef)createArrayRef;
-(id)initWithPage:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

