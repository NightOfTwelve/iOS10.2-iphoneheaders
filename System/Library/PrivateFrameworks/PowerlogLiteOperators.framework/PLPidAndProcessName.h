/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface PLPidAndProcessName : NSObject {

	NSNumber* _pid;
	NSString* _processName;

}

@property (retain) NSNumber * pid;                      //@synthesize pid=_pid - In the implementation block
@property (retain) NSString * processName;              //@synthesize processName=_processName - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(id)description;
-(NSString *)processName;
-(void)setPid:(NSNumber *)arg1 ;
-(NSNumber *)pid;
@end
