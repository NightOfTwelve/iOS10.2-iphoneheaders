/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSProgressFraction;

@interface _NSProgressFractionTuple : NSObject {

	_NSProgressFraction* _previous;
	_NSProgressFraction* _next;

}

@property (copy) _NSProgressFraction * previous;              //@synthesize previous=_previous - In the implementation block
@property (copy) _NSProgressFraction * next;                  //@synthesize next=_next - In the implementation block
-(BOOL)previousIsEqualToNext;
-(_NSProgressFraction *)next;
-(_NSProgressFraction *)previous;
-(void)dealloc;
-(id)description;
-(void)setPrevious:(_NSProgressFraction *)arg1 ;
-(void)setNext:(_NSProgressFraction *)arg1 ;
@end
