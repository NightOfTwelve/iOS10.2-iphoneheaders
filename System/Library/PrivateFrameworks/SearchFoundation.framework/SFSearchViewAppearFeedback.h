/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewAppearFeedback : SFFeedback {

	BOOL _isOnLockScreen;
	BOOL _isOverApp;
	unsigned long long _viewAppearEvent;

}

@property (assign,nonatomic) unsigned long long viewAppearEvent;              //@synthesize viewAppearEvent=_viewAppearEvent - In the implementation block
@property (assign,nonatomic) BOOL isOnLockScreen;                             //@synthesize isOnLockScreen=_isOnLockScreen - In the implementation block
@property (assign,nonatomic) BOOL isOverApp;                                  //@synthesize isOverApp=_isOverApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(unsigned long long)viewAppearEvent;
-(BOOL)isOnLockScreen;
-(BOOL)isOverApp;
-(void)setIsOnLockScreen:(BOOL)arg1 ;
-(void)setIsOverApp:(BOOL)arg1 ;
-(void)setViewAppearEvent:(unsigned long long)arg1 ;
@end
