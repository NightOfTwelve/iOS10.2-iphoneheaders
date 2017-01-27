/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSDictionary, NSMutableDictionary;

@interface TKTokenKeychainItem : NSObject {

	NSData* _accessControl;
	id _objectID;
	NSString* _label;
	NSDictionary* _constraints;
	NSString* _tokenID;

}

@property (copy,readonly) NSMutableDictionary * keychainAttributes; 
@property (copy,readonly) NSData * encodedObjectID; 
@property (retain) NSString * tokenID;                                           //@synthesize tokenID=_tokenID - In the implementation block
@property (retain) NSData * accessControl; 
@property (copy,readonly) id objectID;                                           //@synthesize objectID=_objectID - In the implementation block
@property (copy) NSString * label;                                               //@synthesize label=_label - In the implementation block
@property (copy) NSDictionary * constraints;                                     //@synthesize constraints=_constraints - In the implementation block
+(id)operationMap;
+(id)accessControlForConstraints:(id)arg1 tokenID:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)constraints;
-(NSString *)label;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)tokenID;
-(id)initWithObjectID:(id)arg1 ;
-(void)setTokenID:(NSString *)arg1 ;
-(id)objectID;
-(NSData *)encodedObjectID;
-(NSData *)accessControl;
-(void)setAccessControl:(NSData *)arg1 ;
-(NSMutableDictionary *)keychainAttributes;
@end
