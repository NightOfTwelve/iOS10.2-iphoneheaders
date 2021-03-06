/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient; 
@property (readonly) BOOL horizontalOverflow; 
@property (readonly) BOOL verticalOverflow; 
-(unsigned short)orient;
-(BOOL)horizontalOverflow;
-(BOOL)verticalOverflow;
-(void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(BOOL)arg2 verticalOverflow:(BOOL)arg3 ;
@end

