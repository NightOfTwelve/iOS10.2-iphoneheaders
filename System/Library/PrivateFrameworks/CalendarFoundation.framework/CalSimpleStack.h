/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CalSimpleStack : NSObject {

	BOOL _objectsProbablyAvailable;
	NSMutableArray* _objects;

}

@property (readonly) NSMutableArray * objects;                 //@synthesize objects=_objects - In the implementation block
@property (assign) BOOL objectsProbablyAvailable;              //@synthesize objectsProbablyAvailable=_objectsProbablyAvailable - In the implementation block
-(id)init;
-(void)addObject:(id)arg1 ;
-(BOOL)objectsProbablyAvailable;
-(void)setObjectsProbablyAvailable:(BOOL)arg1 ;
-(NSMutableArray *)objects;
-(id)popObject;
@end

