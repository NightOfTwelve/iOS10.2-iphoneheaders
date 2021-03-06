/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFHomeManagerObserver <HMHomeManagerDelegate>
@optional
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
-(void)homeManagerDidFinishUnknownChange:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1;
-(void)homeManagerDidUpdateApplicationData:(id)arg1;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(BOOL)arg2;
-(void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
-(void)homeManager:(id)arg1 didUpdateLocationSensingAvailability:(BOOL)arg2;
-(void)homeManagerWillStartBatchNotifications:(id)arg1;
-(void)homeManagerDidEndBatchNotifications:(id)arg1;

@end

