/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BLTDebugMetricsOnInterval.h>

@class NSDate;

@interface BLTDebugMetricsCountOnInterval : BLTDebugMetricsOnInterval {

	/*^block*/id _incrementedBlock;
	unsigned long long _count;
	NSDate* __nextCountRollDate;

}

@property (nonatomic,copy) id incrementedBlock;                        //@synthesize incrementedBlock=_incrementedBlock - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSDate * _nextCountRollDate;              //@synthesize _nextCountRollDate=__nextCountRollDate - In the implementation block
-(void)increment;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithInterval:(id)arg1 ;
-(NSDate *)_nextCountRollDate;
-(void)setIncrementedBlock:(id)arg1 ;
-(void)whenIncrementedPerform:(/*^block*/id)arg1 ;
-(id)incrementedBlock;
-(void)set_nextCountRollDate:(NSDate *)arg1 ;
@end
