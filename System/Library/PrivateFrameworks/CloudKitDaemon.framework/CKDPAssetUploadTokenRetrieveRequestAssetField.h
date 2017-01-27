/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordFieldIdentifier;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying> {

	NSMutableArray* _assets;
	CKDPRecordFieldIdentifier* _field;

}

@property (nonatomic,readonly) BOOL hasField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) NSMutableArray * assets;                        //@synthesize assets=_assets - In the implementation block
+(Class)assetsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPRecordFieldIdentifier *)field;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setField:(CKDPRecordFieldIdentifier *)arg1 ;
-(BOOL)hasField;
-(void)addAssets:(id)arg1 ;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assets;
-(unsigned long long)assetsCount;
-(void)clearAssets;
-(id)assetsAtIndex:(unsigned long long)arg1 ;
@end
