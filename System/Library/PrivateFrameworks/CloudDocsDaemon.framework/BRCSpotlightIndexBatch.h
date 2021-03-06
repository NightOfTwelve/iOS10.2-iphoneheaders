/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSObject, CSSearchableIndex, NSString;

@interface BRCSpotlightIndexBatch : NSObject {

	NSMutableOrderedSet* _toIndexDocuments;
	NSMutableOrderedSet* _deletedDocumentsIDs;
	NSObject*<OS_dispatch_queue> _queue;
	CSSearchableIndex* _index;
	NSString* _loggedInUserDisplayName;

}
-(id)description;
-(id)_searchableItemForDocument:(id)arg1 ;
-(id)_authorDisplayNamesForDocument:(id)arg1 ;
-(id)_searchableItemsForDocuments:(id)arg1 ;
-(id)initWithIndex:(id)arg1 queue:(id)arg2 loggedInUserDisplayName:(id)arg3 ;
-(void)addIndexOfDocument:(id)arg1 ;
-(void)addDeletionOfDocID:(unsigned long long)arg1 ;
-(void)prepareAndSendIndexBatchForIndexToken:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

