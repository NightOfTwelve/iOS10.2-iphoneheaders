/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSMutableArray, NSArray;

@interface ASResolveRecipientsSingleResponseItem : ASItem {

	NSString* _emailAddress;
	NSNumber* _easStatus;
	NSMutableArray* _mRecipients;

}

@property (nonatomic,retain) NSString * emailAddress;                                //@synthesize emailAddress=_emailAddress - In the implementation block
@property (setter=setEASStatus:,nonatomic,retain) NSNumber * easStatus;              //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * mRecipients;                           //@synthesize mRecipients=_mRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * recipients; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)easStatus;
-(void)setEASStatus:(id)arg1 ;
-(NSMutableArray *)mRecipients;
-(void)setMRecipients:(NSMutableArray *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSArray *)recipients;
-(void)addRecipient:(id)arg1 ;
@end

