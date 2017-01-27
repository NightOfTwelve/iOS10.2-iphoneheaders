/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SAVCSContentCabinet : SAUISnippet

@property (assign,nonatomic) BOOL browseResults; 
@property (assign,nonatomic) BOOL fullScreenEnabled; 
@property (nonatomic,copy) NSArray * shelves; 
+(id)contentCabinet;
+(id)contentCabinetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)shelves;
-(void)setShelves:(NSArray *)arg1 ;
-(BOOL)browseResults;
-(void)setBrowseResults:(BOOL)arg1 ;
-(BOOL)fullScreenEnabled;
-(void)setFullScreenEnabled:(BOOL)arg1 ;
@end
