/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEOPhoneNumberResolutionResultSet : NSObject {

	NSMutableDictionary* _results;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithXPCDictionaryRepresentation:(id)arg1 ;
-(id)xpcDictionaryRepresentation;
-(void)setResult:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)setError:(id)arg1 forPhoneNumber:(id)arg2 ;
-(void)enumerateResolutionsUsingBlock:(/*^block*/id)arg1 ;
@end
