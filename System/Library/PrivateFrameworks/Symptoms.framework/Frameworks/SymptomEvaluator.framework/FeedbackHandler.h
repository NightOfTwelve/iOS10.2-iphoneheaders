/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSString;

@interface FeedbackHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(long long)arg2 ;
@end

