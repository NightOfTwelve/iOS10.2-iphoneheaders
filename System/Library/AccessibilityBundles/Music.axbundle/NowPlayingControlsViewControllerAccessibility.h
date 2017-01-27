/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/Music.axbundle/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/__NowPlayingControlsViewControllerAccessibility_super.h>

@interface NowPlayingControlsViewControllerAccessibility : __NowPlayingControlsViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)_axPlayer;
-(BOOL)axMediaCommandNotificationRegistered;
-(void)axSetMediaCommandNotificationRegistered:(BOOL)arg1 ;
-(BOOL)axAudioRouteNotificationRegistered;
-(void)_axAudioRouteNameCommandChanged:(id)arg1 ;
-(void)axSetAudioRouteNotificationRegistered:(BOOL)arg1 ;
-(BOOL)axLikedStateNotificationRegistered;
-(void)axSetLikedStateNotificationRegistered:(BOOL)arg1 ;
-(void)_axLikedStateCommandChanged:(id)arg1 ;
-(id)_axLikedBannedValueForState:(long long)arg1 ;
-(id)_axCommandCenter;
-(id)_axRepeatButtonValue;
-(id)_axShuffleButtonValue;
-(void)_axMediaRemoteCommandChanged:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(void)_accessibilityLoadAccessibilityInformation;
@end
