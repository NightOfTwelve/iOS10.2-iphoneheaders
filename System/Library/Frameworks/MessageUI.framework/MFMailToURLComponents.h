/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MFMailToURLComponents : NSObject {

	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSString* _subject;
	NSString* _body;

}

@property (nonatomic,readonly) NSArray * toRecipients;               //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * ccRecipients;               //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * bccRecipients;              //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,readonly) NSString * subject;                   //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * body;                      //@synthesize body=_body - In the implementation block
+(id)componentsWithURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)body;
-(id)initWithURL:(id)arg1 ;
-(NSString *)subject;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(void)_decomposeURL:(id)arg1 ;
@end
