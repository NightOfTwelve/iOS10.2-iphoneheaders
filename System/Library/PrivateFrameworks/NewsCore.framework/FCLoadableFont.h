/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FCLoadableFont : NSObject <NSCopying> {

	NSString* _fontName;
	NSURL* _fontURL;

}

@property (nonatomic,copy) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,retain) NSURL * fontURL;                //@synthesize fontURL=_fontURL - In the implementation block
+(id)loadableFontWithName:(id)arg1 url:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(void)setFontURL:(NSURL *)arg1 ;
-(NSURL *)fontURL;
@end

