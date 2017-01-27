/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoCalendarBridgeSettings.bundle/NanoCalendarBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/CalendarPreferences.h>

@class NPSManager, NPSDomainAccessor, NSArray;

@interface NanoCalendarPreferences : CalendarPreferences {

	NPSManager* _npsManager;
	NPSDomainAccessor* _domainAccessor;

}

@property (nonatomic,retain) NSArray * customDeselectedCalendarHashes; 
+(id)currentSelectedCalendarsForEventStore:(id)arg1 ;
+(id)_selectedCalendarsFromAllCalendars:(id)arg1 deselectedCalendarHashes:(id)arg2 ;
+(id)_calendarIDsForHashes:(id)arg1 inCalendars:(id)arg2 ;
+(id)sharedPreferences;
-(void)setCustomDeselectedCalendarHashes:(NSArray *)arg1 ;
-(NSArray *)customDeselectedCalendarHashes;
-(id)init;
-(void)dealloc;
-(id)lastViewMode;
-(void)setLastViewMode:(id)arg1 ;
-(id)lastSuspendTime;
-(void)setLastSuspendTime:(id)arg1 ;
-(void)_handleDidUnpair;
-(void)_handlePairedDeviceChanged;
-(void)setLastViewedDate:(id)arg1 ;
-(id)lastViewedDate;
@end
