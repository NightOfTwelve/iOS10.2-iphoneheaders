/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLKComplicationDataSource <NSObject>
@optional
-(void)getTimelineStartDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineEndDateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPrivacyBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineAnimationBehaviorForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getTimelineEntriesForComplication:(id)arg1 beforeDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4;
-(void)getTimelineEntriesForComplication:(id)arg1 afterDate:(id)arg2 limit:(unsigned long long)arg3 withHandler:(/*^block*/id)arg4;
-(void)getNextRequestedUpdateDateWithHandler:(/*^block*/id)arg1;
-(void)requestedUpdateDidBegin;
-(void)requestedUpdateBudgetExhausted;
-(void)getLocalizableSampleTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPlaceholderTemplateForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;

@required
-(void)getSupportedTimeTravelDirectionsForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getCurrentTimelineEntryForComplication:(id)arg1 withHandler:(/*^block*/id)arg2;

@end
