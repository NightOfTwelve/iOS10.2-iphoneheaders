/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@interface LogBridge : NSObject {

	shared_ptr<ctu::Logger>* _logger;

}
+(id)sharedInstance;
-(void)appInit;
-(void)updateLogger:(shared_ptr<ctu::Logger>*)arg1 ;
-(void)clearLogger;
-(BOOL)hasLogger;
-(id)init;
-(shared_ptr<ctu::Logger>*)logger;
@end
