/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {

	BrightnessSystemInternal* bsi;

}
-(id)init;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)isAlsSupported;
-(id)copyPropertyForKey:(id)arg1 ;
@end
