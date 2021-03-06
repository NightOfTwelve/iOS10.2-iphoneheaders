/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADEmbeddedMediaFile.h>

@class TSPData;

@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile {

	BOOL isAudioOnly;
	TSPData* _tspData;

}

@property (nonatomic,retain) TSPData * tspData;              //@synthesize tspData=_tspData - In the implementation block
-(void)dealloc;
-(BOOL)isAudioOnly;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(TSPData *)tspData;
-(void)setTspData:(TSPData *)arg1 ;
@end

