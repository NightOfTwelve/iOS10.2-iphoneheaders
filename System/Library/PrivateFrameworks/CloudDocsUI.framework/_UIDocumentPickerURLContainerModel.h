/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <CloudDocsUI/_UIDocumentPickerContainerModel.h>
#import <libobjc.A.dylib/_UIArrayControllerDelegate.h>

@class NSOperationQueue, NSArray, NSURL, NSString;

@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel <_UIArrayControllerDelegate> {

	double _startObservingTime;
	NSOperationQueue* _presentedItemOperationQueue;
	NSArray* _modelObjects;
	NSArray* _pickableTypes;
	unsigned long long _pickerMode;
	NSURL* _url;
	NSString* _displayTitle;
	UIArrayController* _observer;
	id _urlObserver;

}

@property (nonatomic,retain) NSURL * url;                                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) _UIArrayController*<_UIDocumentPickerDirectoryObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSArray * modelObjects;                                                        //@synthesize modelObjects=_modelObjects - In the implementation block
@property (nonatomic,copy) NSArray * pickableTypes;                                                         //@synthesize pickableTypes=_pickableTypes - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                                 //@synthesize pickerMode=_pickerMode - In the implementation block
@property (nonatomic,retain) id urlObserver;                                                                //@synthesize urlObserver=_urlObserver - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                                                         //@synthesize displayTitle=_displayTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_tagColorsDidChange;
+(id)tagColorsByTag;
+(id)_tagBlipColors;
+(id)allTags;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3 ;
-(void)setObserver:(_UIArrayController*<_UIDocumentPickerDirectoryObserver>)arg1 ;
-(_UIArrayController*<_UIDocumentPickerDirectoryObserver>)observer;
-(NSArray *)modelObjects;
-(id)scopes;
-(void)setModelObjects:(NSArray *)arg1 ;
-(NSString *)displayTitle;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(UIArrayController*)_createObserver;
-(NSArray *)pickableTypes;
-(BOOL)afterInitialUpdate;
-(void)updateSortDescriptors;
-(void)refreshItem:(id)arg1 thumbnailOnly:(BOOL)arg2 ;
-(void)updateObserverForURL:(id)arg1 ;
-(void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2 ;
-(BOOL)shouldShowContainerForType:(id)arg1 ;
-(BOOL)shouldAllowPickingType:(id)arg1 ;
-(BOOL)shouldEnableContainer:(id)arg1 ;
-(void)setPickableTypes:(NSArray *)arg1 ;
-(id)urlObserver;
-(void)setUrlObserver:(id)arg1 ;
@end
