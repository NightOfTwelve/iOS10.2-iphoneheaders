/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying> {

	NSArray* _occurrences;
	NSArray* _allDayOccurrences;
	NSArray* _timedOccurrences;

}

@property (nonatomic,readonly) NSArray * occurrences;                    //@synthesize occurrences=_occurrences - In the implementation block
@property (nonatomic,readonly) NSArray * allDayOccurrences;              //@synthesize allDayOccurrences=_allDayOccurrences - In the implementation block
@property (nonatomic,readonly) NSArray * timedOccurrences;               //@synthesize timedOccurrences=_timedOccurrences - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)occurrences;
-(id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3 ;
-(NSArray *)allDayOccurrences;
-(NSArray *)timedOccurrences;
@end

