/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAUIDecoratedText : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * ducId; 
@property (nonatomic,copy) NSArray * regions; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decoratedText;
+(id)decoratedTextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)regions;
-(id)groupIdentifier;
-(void)setRegions:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)ducId;
-(void)setDucId:(NSString *)arg1 ;
@end

