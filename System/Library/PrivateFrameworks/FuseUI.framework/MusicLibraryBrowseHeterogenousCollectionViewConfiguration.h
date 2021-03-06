/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseCollectionViewConfiguration.h>

@class NSArray, MusicEntityCollectionViewDescriptor;

@interface MusicLibraryBrowseHeterogenousCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {

	NSArray* _libraryViewConfigurations;

}

@property (nonatomic,readonly) NSArray * libraryViewConfigurations;                                               //@synthesize libraryViewConfigurations=_libraryViewConfigurations - In the implementation block
@property (nonatomic,readonly) MusicEntityCollectionViewDescriptor * entityCollectionViewDescriptor; 
-(id)libraryViewConfigurationForSection:(unsigned long long)arg1 ;
-(id)collectionViewDescriptorForSection:(unsigned long long)arg1 traitCollection:(id)arg2 ;
-(NSArray *)libraryViewConfigurations;
-(id)initWithLibraryViewConfigurations:(id)arg1 ;
@end

