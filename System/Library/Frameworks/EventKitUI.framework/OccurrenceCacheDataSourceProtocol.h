/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OccurrenceCacheDataSourceProtocol <NSObject>
@required
-(void)invalidate;
-(long long)cachedDayCount;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2;
-(BOOL)supportsInvitations;
-(BOOL)supportsFakeTodaySection;
-(BOOL)cachedOccurrencesAreLoaded;
-(BOOL)cachedOccurrencesAreBeingGenerated;
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1;
-(id)dateAtDayIndex:(long long)arg1;
-(id)cachedOccurrenceAtIndexPath:(id)arg1;
-(long long)sectionForCachedOccurrencesOnDate:(id)arg1;
-(void)invalidateCachedOccurrences;
-(void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;
-(void)searchWithTerm:(id)arg1;
-(void)stopSearching;

@end

