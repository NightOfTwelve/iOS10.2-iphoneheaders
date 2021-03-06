/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <MediaSocial/MSCLTokenTextAttachment.h>

@class MSCLTag, MSCLTagTokenView;

@interface MSCLTagTokenTextAttachment : MSCLTokenTextAttachment

@property (nonatomic,retain) MSCLTag * representedObject; 
@property (nonatomic,retain) MSCLTagTokenView * tokenView; 
-(id)initWithTag:(id)arg1 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)representedText;
@end

