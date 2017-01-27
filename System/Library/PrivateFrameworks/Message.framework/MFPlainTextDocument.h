/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject {

	NSMutableString* _text;
	NSMutableArray* _fragments;

}
-(void)dealloc;
-(id)string;
-(void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned)arg3 ;
-(id)quotedString:(unsigned)arg1 ;
-(unsigned long long)fragmentCount;
-(void)getString:(id*)arg1 quoteLevel:(unsigned*)arg2 ofFragmentAtIndex:(unsigned long long)arg3 ;
-(void)appendString:(id)arg1 withQuoteLevel:(unsigned)arg2 ;
-(id)archivedRepresentation;
-(void)appendArchivedRepresentation:(id)arg1 ;
@end
