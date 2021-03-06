/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSArray, WLKBasicContentMetadata;

@interface WLKBasicContentRequestOperation : WLKNetworkRequestOperation {

	NSArray* _contentIDs;

}

@property (nonatomic,copy,readonly) NSArray * contentIDs;                                   //@synthesize contentIDs=_contentIDs - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * basicContentMetadata; 
-(id)responseProcessor;
-(id)initWithContentIDs:(id)arg1 ;
-(id)initWithContentID:(id)arg1 ;
-(WLKBasicContentMetadata *)basicContentMetadata;
-(NSArray *)contentIDs;
@end

