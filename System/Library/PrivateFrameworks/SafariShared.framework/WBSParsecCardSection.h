/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, WBSParsecPunchout, NSArray;

@interface WBSParsecCardSection : NSObject {

	NSString* _type;
	NSURL* _url;
	WBSParsecPunchout* _app;
	NSArray* _punchouts;
	NSString* _punchoutPickerLabel;
	NSString* _punchoutPickerDismissLabel;

}

@property (nonatomic,copy,readonly) NSString * type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                             //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) WBSParsecPunchout * app;                                 //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) NSArray * punchouts;                                     //@synthesize punchouts=_punchouts - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutPickerLabel;                     //@synthesize punchoutPickerLabel=_punchoutPickerLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutPickerDismissLabel;              //@synthesize punchoutPickerDismissLabel=_punchoutPickerDismissLabel - In the implementation block
+(Class)_classForCardSectionType:(id)arg1 ;
+(id)_specializedCardSectionSchema;
+(id)cardSectionSchema;
+(id)cardSectionWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)type;
-(id)_initWithDictionary:(id)arg1 ;
-(NSArray *)punchouts;
-(NSString *)punchoutPickerLabel;
-(NSString *)punchoutPickerDismissLabel;
-(WBSParsecPunchout *)app;
@end
