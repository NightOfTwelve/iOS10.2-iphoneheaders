/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, PLPhotoLibrary;

@interface PLKeyFaceOperation : NSOperation {

	NSString* _personUUID;
	PLPhotoLibrary* _photoLibrary;

}
-(void)dealloc;
-(void)main;
-(id)initWithPersonUUID:(id)arg1 photoLibrary:(id)arg2 ;
-(void)pickKeyFace;
-(id)fetchFacesForPerson:(id)arg1 ;
-(id)filterPredicateForPerson:(id)arg1 ;
-(id)initWithPersonUUID:(id)arg1 ;
@end

