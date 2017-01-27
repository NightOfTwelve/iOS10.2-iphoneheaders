/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIViewControllerContextTransitioningEx <UIViewControllerContextTransitioning>
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews; 
@property (assign,setter=_setPercentOffset:,nonatomic) double _percentOffset; 
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) BOOL _allowUserInteraction; 
@required
-(BOOL)_allowUserInteraction;
-(void)__runAlongsideAnimations;
-(void)_setAllowUserInteraction:(BOOL)arg1;
-(long long)_alongsideAnimationsCount;
-(NSArray *)_containerViews;
-(void)_interactivityDidChange:(BOOL)arg1;
-(double)_percentOffset;
-(void)_setContainerViews:(id)arg1;
-(void)_setPercentOffset:(double)arg1;

@end
