/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface RTHintMO : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) long long source; 
+(id)fetchRequest;
+(id)managedObjectWithLatitude:(double)arg1 longitude:(double)arg2 source:(long long)arg3 date:(id)arg4 inManagedObjectContext:(id)arg5 ;
@end
