/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, OITSUCustomFormatData, NSMutableArray;

@interface OITSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {

	NSString* mFormatName;
	NSString* mFormatNameStem;
	int mFormatType;
	OITSUCustomFormatData* mDefaultFormatData;
	NSMutableArray* mConditionList;

}

@property (nonatomic,retain) NSString * formatName; 
@property (nonatomic,readonly) NSMutableArray * conditionList; 
@property (nonatomic,readonly) int formatType; 
@property (nonatomic,readonly) OITSUCustomFormatData * defaultFormatData; 
@property (nonatomic,readonly) unsigned long long conditionCount; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)formatType;
-(NSString *)formatName;
-(void)setFormatName:(NSString *)arg1 ;
-(OITSUCustomFormatData *)defaultFormatData;
-(id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 ;
-(void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
-(BOOL)p_nameStemIsEqual:(id)arg1 ;
-(BOOL)p_isEqual:(id)arg1 matchingFullName:(BOOL)arg2 ;
-(id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long*)arg2 ;
-(unsigned long long)conditionCount;
-(id)customFormatWithNewName:(id)arg1 ;
-(BOOL)isEqualWithStemNameMatching:(id)arg1 ;
-(id)conditionalFormatDataForValue:(double)arg1 ;
-(id)conditionalFormatAtIndex:(unsigned long long)arg1 ;
-(id)conditionalFormatDataForKey:(unsigned long long)arg1 ;
-(NSMutableArray *)conditionList;
@end

