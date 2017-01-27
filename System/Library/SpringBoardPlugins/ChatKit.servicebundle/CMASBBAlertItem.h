/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class BBBulletin;

@interface CMASBBAlertItem : SBAlertItem {

	BBBulletin* _bulletin;
	BOOL _alreadyPlayedAlertTone;
	BOOL _overrideDefaultDisplayOrder;

}

@property (nonatomic,retain) BBBulletin * bulletin;                         //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) BOOL overrideDefaultDisplayOrder;              //@synthesize overrideDefaultDisplayOrder=_overrideDefaultDisplayOrder - In the implementation block
-(id)init;
-(BOOL)reappearsAfterUnlock;
-(void)didDeactivateForReason:(int)arg1 ;
-(BBBulletin *)bulletin;
-(void)willRelockForButtonPress:(BOOL)arg1 ;
-(void)willActivate;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(BOOL)willShowInAwayItems;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(void)setOverrideDefaultDisplayOrder:(BOOL)arg1 ;
-(BOOL)preventInterruption;
-(BOOL)overrideDefaultDisplayOrder;
@end
