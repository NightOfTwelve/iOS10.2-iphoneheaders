/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSURL, MusicStoreBrowseResponse;

@interface MusicStoreBrowseSection : MPModelObject {

	BOOL _memberOfChartSet;
	BOOL _brick;
	NSString* _title;
	long long _sectionType;
	NSURL* _loadAdditionalContentURL;
	long long _uniformContentItemType;
	MusicStoreBrowseResponse* _previouslyRetrievedNestedResponse;

}

@property (nonatomic,copy) NSString * title;                                                            //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long sectionType;                                                     //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,copy) NSURL * loadAdditionalContentURL;                                            //@synthesize loadAdditionalContentURL=_loadAdditionalContentURL - In the implementation block
@property (assign,nonatomic) long long uniformContentItemType;                                          //@synthesize uniformContentItemType=_uniformContentItemType - In the implementation block
@property (assign,getter=isMemberOfChartSet,nonatomic) BOOL memberOfChartSet;                           //@synthesize memberOfChartSet=_memberOfChartSet - In the implementation block
@property (assign,getter=isBrick,nonatomic) BOOL brick;                                                 //@synthesize brick=_brick - In the implementation block
@property (nonatomic,retain) MusicStoreBrowseResponse * previouslyRetrievedNestedResponse;              //@synthesize previouslyRetrievedNestedResponse=_previouslyRetrievedNestedResponse - In the implementation block
+(id)__title__KEY;
+(id)__MusicStoreBrowseSectionPropertyTitle__PROPERTY;
+(id)__sectionType__KEY;
+(id)__MusicStoreBrowseSectionPropertyType__PROPERTY;
+(id)__loadAdditionalContentURL__KEY;
+(id)__MusicStoreBrowseSectionPropertyLoadAdditionalContentURL__PROPERTY;
+(id)__uniformContentItemType__KEY;
+(id)__MusicStoreBrowseSectionPropertyUniformContentItemType__PROPERTY;
+(id)__memberOfChartSet__KEY;
+(id)__MusicStoreBrowseSectionPropertyMemberOfChartSet__PROPERTY;
+(id)__brick__KEY;
+(id)__MusicStoreBrowseSectionPropertyBrick__PROPERTY;
+(id)__previouslyRetrievedNestedResponse__KEY;
+(id)__MusicStoreBrowseSectionPropertyPreviouslyRetrievedNestedResponse__PROPERTY;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(id)descriptionWithType:(long long)arg1 ;
-(long long)sectionType;
-(void)setSectionType:(long long)arg1 ;
-(NSURL *)loadAdditionalContentURL;
-(BOOL)isBrick;
-(void)setLoadAdditionalContentURL:(NSURL *)arg1 ;
-(long long)uniformContentItemType;
-(BOOL)isMemberOfChartSet;
-(MusicStoreBrowseResponse *)previouslyRetrievedNestedResponse;
-(void)setUniformContentItemType:(long long)arg1 ;
-(void)setMemberOfChartSet:(BOOL)arg1 ;
-(void)setBrick:(BOOL)arg1 ;
-(void)setPreviouslyRetrievedNestedResponse:(MusicStoreBrowseResponse *)arg1 ;
@end

