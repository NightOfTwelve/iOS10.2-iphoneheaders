/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIKeyboardActivityObserving <NSObject>
@optional
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;

@required
-(void)keyboardActivityDidTransition:(id)arg1;

@end
