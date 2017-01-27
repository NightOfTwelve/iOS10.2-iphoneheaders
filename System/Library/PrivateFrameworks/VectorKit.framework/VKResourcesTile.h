/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VKTile.h>

@class NSArray;

@interface VKResourcesTile : VKTile {

	NSArray* _resourceNames;
	NSArray* _attributions;

}

@property (nonatomic,retain) NSArray * resourceNames;              //@synthesize resourceNames=_resourceNames - In the implementation block
@property (nonatomic,retain) NSArray * attributions;               //@synthesize attributions=_attributions - In the implementation block
-(void)dealloc;
-(NSArray *)attributions;
-(void)setAttributions:(NSArray *)arg1 ;
-(void)setResourceNames:(NSArray *)arg1 ;
-(NSArray *)resourceNames;
@end
