/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPQuerySourceObserver.h>

@protocol OS_dispatch_queue;
@class MSPQuerySource, NSMapTable, NSArray, NSObject, NSString;

@interface MSPQuery : NSObject <MSPQuerySourceObserver> {

	MSPQuerySource* _source;
	NSMapTable* _unmappedContentsMap;
	NSArray* _contents;
	NSArray* _unmappedContents;
	/*^block*/id _changeHandler;
	NSObject*<OS_dispatch_queue> _changeHandlerQueue;

}

@property (readonly) NSArray * contents;                                                     //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSArray * unmappedContents;                                   //@synthesize unmappedContents=_unmappedContents - In the implementation block
@property (nonatomic,copy,readonly) id changeHandler;                                        //@synthesize changeHandler=_changeHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> changeHandlerQueue;              //@synthesize changeHandlerQueue=_changeHandlerQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)contents;
-(id)changeHandler;
-(id)_initWithSource:(id)arg1 ;
-(void)_didChangeSourceWithContents:(id)arg1 unmappedContents:(id)arg2 map:(id)arg3 forContext:(id)arg4 ;
-(void)setChangeHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)unmappedObjectForContentsObject:(id)arg1 ;
-(NSArray *)unmappedContents;
-(NSObject*<OS_dispatch_queue>)changeHandlerQueue;
@end

