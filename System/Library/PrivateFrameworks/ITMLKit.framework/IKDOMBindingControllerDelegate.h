/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKDOMBindingControllerDelegate <NSObject>
@optional
-(void)domBindingController:(id)arg1 didLoadBinding:(id)arg2;
-(BOOL)shouldResolveDataForDOMBindingController:(id)arg1;
-(BOOL)domBindingController:(id)arg1 doKeysAffectChildren:(id)arg2;
-(BOOL)domBindingController:(id)arg1 doKeysAffectSubtree:(id)arg2;
-(id)additionalKeysToResolveForDOMBindingController:(id)arg1;
-(BOOL)domBindingController:(id)arg1 applyValue:(id)arg2 forKey:(id)arg3;
-(void)domBindingController:(id)arg1 didResolveKeys:(id)arg2;

@end
