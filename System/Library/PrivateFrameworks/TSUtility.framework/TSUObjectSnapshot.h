/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSUObjectSnapshot : NSObject {

	unsigned long long mEntryCount;
	void* mSnapshot;
	NSArray* mCompared;

}
-(id)init;
-(void)dealloc;
-(void)p_clear;
-(void)calibrate:(id)arg1 ;
-(void)compare;
@end

