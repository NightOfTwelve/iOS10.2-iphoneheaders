/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, SSAuthenticateResponse, NSMutableOrderedSet, NSOrderedSet;

@interface MediaSocialAuthenticationResponse : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	SSAuthenticateResponse* _authenticateResponse;
	NSMutableOrderedSet* _postIdentifiers;
	NSMutableOrderedSet* _uploadIdentifiers;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                                 //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) SSAuthenticateResponse * authenticateResponse;              //@synthesize authenticateResponse=_authenticateResponse - In the implementation block
@property (nonatomic,copy) NSOrderedSet * postIdentifiers;                               //@synthesize postIdentifiers=_postIdentifiers - In the implementation block
@property (nonatomic,copy) NSOrderedSet * uploadIdentifiers;                             //@synthesize uploadIdentifiers=_uploadIdentifiers - In the implementation block
-(SSAuthenticateResponse *)authenticateResponse;
-(NSOrderedSet *)postIdentifiers;
-(NSOrderedSet *)uploadIdentifiers;
-(void)addPostIdentifier:(long long)arg1 ;
-(void)addUploadIdentifier:(long long)arg1 ;
-(void)setAuthenticateResponse:(SSAuthenticateResponse *)arg1 ;
-(void)setPostIdentifiers:(NSOrderedSet *)arg1 ;
-(void)setUploadIdentifiers:(NSOrderedSet *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
@end

