/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HFTemperatureFormatter <NSObject,NSCopying>
@property (assign,nonatomic) BOOL inputIsCelsius; 
@property (nonatomic,copy) NSString * fallbackTemperatureString; 
@required
-(BOOL)inputIsCelsius;
-(void)setInputIsCelsius:(BOOL)arg1;
-(NSString *)fallbackTemperatureString;
-(void)setFallbackTemperatureString:(id)arg1;

@end

