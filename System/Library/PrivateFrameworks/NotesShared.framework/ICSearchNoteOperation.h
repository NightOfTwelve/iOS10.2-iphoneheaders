/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICSearchOperation.h>

@class ICNote;

@interface ICSearchNoteOperation : ICSearchOperation

@property (nonatomic,readonly) ICNote * note; 
-(unsigned long long)relevanceByPerformingSearch;
-(id)initWithNote:(id)arg1 searchString:(id)arg2 ;
-(ICNote *)note;
@end
