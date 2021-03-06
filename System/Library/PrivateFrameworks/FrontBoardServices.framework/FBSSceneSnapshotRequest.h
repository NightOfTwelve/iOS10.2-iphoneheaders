/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol FBSSceneSnapshotRequestDelegate;
@class NSString, FBSSceneSettings;

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding> {

	NSString* _sceneID;
	FBSSceneSettings* _settings;
	BOOL _handled;
	id<FBSSceneSnapshotRequestDelegate> _delegate;

}

@property (nonatomic,copy) NSString * sceneID;                                          //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) id<FBSSceneSnapshotRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<FBSSceneSnapshotRequestDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBSSceneSnapshotRequestDelegate>)delegate;
-(FBSSceneSettings *)settings;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)sceneID;
-(void)setSceneID:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

