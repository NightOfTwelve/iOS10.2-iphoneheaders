/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSArray;

@interface IPCircularBufferArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _backingStore;
	unsigned long long _currentIndex;
	unsigned long long _capacity;
	unsigned long long _mutationDetector;
	id _lastObject;

}

@property (nonatomic,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) id lastObject; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IP1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)lastObject;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(NSArray *)allObjects;
-(void)addObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
