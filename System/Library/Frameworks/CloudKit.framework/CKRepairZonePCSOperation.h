/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray;

@interface CKRepairZonePCSOperation : CKDatabaseOperation {

	NSArray* _zoneIDs;
	/*^block*/id _zoneRepairedBlock;

}

@property (nonatomic,retain) NSArray * zoneIDs;               //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id zoneRepairedBlock;              //@synthesize zoneRepairedBlock=_zoneRepairedBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)zoneRepairedBlock;
-(id)initWithZoneIDsToRepair:(id)arg1 ;
-(void)setZoneRepairedBlock:(id)arg1 ;
-(NSArray *)zoneIDs;
-(id)activityCreate;
-(void)setZoneIDs:(NSArray *)arg1 ;
@end
