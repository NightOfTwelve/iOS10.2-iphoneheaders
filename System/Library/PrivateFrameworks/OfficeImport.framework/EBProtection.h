/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBProtection : NSObject
+(id)edProtectionFromXlXf:(XlXf*)arg1 ;
+(id)edProtectionFromXlDXfProtect:(XlDXfProtect*)arg1 ;
+(id)edProtectionFromXlGraphicsInfo:(XlGraphicsInfo*)arg1 ;
+(void)writeProtection:(id)arg1 toXlXf:(XlXf*)arg2 ;
+(void)writeProtection:(id)arg1 toXlGraphicsInfo:(XlGraphicsInfo*)arg2 ;
+(XlDXfProtect*)xlDXfProtectFromEDProtection:(id)arg1 ;
@end

