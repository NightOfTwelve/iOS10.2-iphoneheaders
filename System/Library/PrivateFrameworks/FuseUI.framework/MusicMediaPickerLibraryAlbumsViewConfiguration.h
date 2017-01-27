/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryCollectionBasedTableViewConfiguration.h>

@interface MusicMediaPickerLibraryAlbumsViewConfiguration : MusicLibraryCollectionBasedTableViewConfiguration {

	BOOL _isMultipleSelectionAllowed;

}
-(id)init;
-(void)dealloc;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithFilterPredicate:(id)arg1 multipleSelectionAllowed:(BOOL)arg2 includeCompilations:(BOOL)arg3 ;
-(void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3 ;
-(void)_multipleSelectionAllowanceDidChange:(id)arg1 ;
@end
