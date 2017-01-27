/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TIAsset, NSMutableSet;

@interface TIAssetVersions : NSObject {

	NSString* _type;
	NSString* _inputModeLevel;
	TIAsset* _currentAsset;
	NSMutableSet* _assets;

}

@property (nonatomic,readonly) NSMutableSet * assets;                  //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic) TIAsset * currentAsset;                   //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,readonly) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * inputModeLevel;              //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)dealloc;
-(unsigned long long)count;
-(NSString *)type;
-(BOOL)isEmpty;
-(id)recursiveDescription;
-(void)addAsset:(id)arg1 ;
-(id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2 ;
-(NSString *)inputModeLevel;
-(id)purgeableAssets;
-(BOOL)purgeAsset:(id)arg1 ;
-(id)initWithAssetType:(id)arg1 inputModeLevel:(id)arg2 ;
-(void)setCurrentAsset:(TIAsset *)arg1 ;
-(NSMutableSet *)assets;
-(TIAsset *)currentAsset;
@end
