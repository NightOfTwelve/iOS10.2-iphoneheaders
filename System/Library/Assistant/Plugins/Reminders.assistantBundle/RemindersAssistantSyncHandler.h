/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Reminders.assistantBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class EKEventStore, NSString, NSMutableArray;

@interface RemindersAssistantSyncHandler : NSObject <AFSyncHandler> {

	EKEventStore* _eventStore;
	NSString* _finalAnchor;
	NSMutableArray* _postAnchors;
	NSMutableArray* _domainObjects;

}

@property (nonatomic,retain) EKEventStore * eventStore;                   //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) NSString * finalAnchor;                      //@synthesize finalAnchor=_finalAnchor - In the implementation block
@property (nonatomic,retain) NSMutableArray * postAnchors;                //@synthesize postAnchors=_postAnchors - In the implementation block
@property (nonatomic,retain) NSMutableArray * domainObjects;              //@synthesize domainObjects=_domainObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)finalAnchor;
-(void)setFinalAnchor:(NSString *)arg1 ;
-(void)syncDidEnd;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)identifierForCalendar:(id)arg1 ;
-(id)calculateFinalAnchor:(id)arg1 ;
-(NSMutableArray *)postAnchors;
-(void)setPostAnchors:(NSMutableArray *)arg1 ;
-(id)_sortedArrayOfReminderLists;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)domainObjects;
-(void)setDomainObjects:(NSMutableArray *)arg1 ;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
@end

