/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class PLShuffledAlbum, PLAssetContainerChangeNotification, NSIndexSet, NSOrderedSet;

@interface PLShuffledAlbumChangeNotification : PLAssetContainerChangeNotification {

	PLShuffledAlbum* _album;
	PLAssetContainerChangeNotification* _backingNotification;
	NSIndexSet* _changedIndexes;
	NSOrderedSet* _newSet;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)object;
-(id)changedIndexes;
-(void)_calculateDiffs;
-(id)_diffDescription;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(BOOL)countDidChange;
-(id)initWithShuffledAlbum:(id)arg1 albumChangeNotification:(id)arg2 ;
-(id)album;
-(id)insertedIndexes;
-(BOOL)shouldReload;
-(id)deletedIndexes;
@end

