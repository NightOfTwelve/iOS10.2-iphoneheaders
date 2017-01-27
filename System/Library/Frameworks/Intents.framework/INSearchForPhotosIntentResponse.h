/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INSearchForPhotosIntentResponseExport.h>

@class NSNumber, _INPBSearchForPhotosIntentResponse, NSString;

@interface INSearchForPhotosIntentResponse : INIntentResponse <INSearchForPhotosIntentResponseExport> {

	_INPBSearchForPhotosIntentResponse* _responseMessagePBRepresentation;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * searchResultsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
+(long long)_intentHandlingStatusFromCode:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)code;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(void)setSearchResultsCount:(NSNumber *)arg1 ;
-(NSNumber *)searchResultsCount;
-(id)initWithBackingStore:(id)arg1 ;
-(id)_responseMessagePBRepresentation;
@end
