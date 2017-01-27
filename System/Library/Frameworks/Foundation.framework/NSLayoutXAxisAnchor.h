/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutXAxisAnchor : NSLayoutAnchor
-(BOOL)isCompatibleWithAnchor:(id)arg1 ;
-(long long)_directionAbstraction;
-(BOOL)_validateOtherXAxisAnchorDirectionAbstraction:(long long)arg1 ;
-(BOOL)validateOtherAttribute:(long long)arg1 ;
-(id)anchorByOffsettingWithConstant:(double)arg1 ;
-(id)anchorByOffsettingWithDimension:(id)arg1 ;
-(id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 ;
-(id)anchorWithOffsetToAnchor:(id)arg1 ;
-(id)offsetTo:(id)arg1 ;
-(id)distanceTo:(id)arg1 ;
-(id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3 ;
-(id)offsetByDimension:(id)arg1 ;
-(id)offsetBy:(double)arg1 ;
@end
