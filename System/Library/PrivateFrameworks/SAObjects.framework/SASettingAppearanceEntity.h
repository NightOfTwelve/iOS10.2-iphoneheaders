/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingEntity.h>

@class NSString;

@interface SASettingAppearanceEntity : SASettingEntity

@property (nonatomic,copy) NSString * previousValue; 
@property (nonatomic,copy) NSString * value; 
+(id)appearanceEntity;
+(id)appearanceEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)previousValue;
-(void)setPreviousValue:(NSString *)arg1 ;
@end

