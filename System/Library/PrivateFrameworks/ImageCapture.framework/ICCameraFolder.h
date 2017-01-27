/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraItem.h>

@class NSArray;

@interface ICCameraFolder : ICCameraItem {

	void* _folderProperties;
	os_unfair_lock_s _filesLock;
	os_unfair_lock_s _foldersLock;

}

@property (readonly) NSArray * contents; 
-(void)addFile:(id)arg1 ;
-(id)files;
-(void)dealloc;
-(id)description;
-(NSArray *)contents;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGImageRef)thumbnail;
-(id)metadata;
-(BOOL)hasThumbnail;
-(void)addFolder:(id)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)lockFiles;
-(void)unlockFiles;
-(void)lockFolders;
-(void)unlockFolders;
-(void)deleteFile:(id)arg1 ;
-(void)requestMetadata;
-(void)requestThumbnail;
-(id)folders;
-(void)deleteFolder:(id)arg1 ;
-(void)finalize;
-(void)deleteItem:(id)arg1 ;
@end
