/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexable <NSObject>
@optional
-(id)generateSearchIndexStringsOperation;
-(BOOL)ignoreInSearchIndexer;
-(void)releaseMemoryForIndexing;

@required
-(id)identifier;
-(id)managedObjectContext;
-(id)objectID;
-(id)modificationDate;
-(id)authorsExcludingCurrentUser;
-(id)objectIdentifier;
-(long long)visibilityTestingType;
-(id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)searchIndexStringsOutHasAdditionalStrings:(BOOL*)arg1;
-(BOOL)shouldUpdateIndexForChangedValues:(id)arg1;
-(id)searchableItemIdentifier;
-(id)searchDomainIdentifier;
-(id)searchableItemAttributeSet;

@end

