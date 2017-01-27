/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _DECSqliteDatabase;

@interface _DECPreparedStatement : NSObject <NSDiscardableContent, NSCopying> {

	_DECSqliteDatabase* _owner;
	BOOL _isFinalized;
	unsigned _useCount;
	sqlite3_stmtRef _stmt;

}

@property (nonatomic,readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)isContentDiscarded;
-(id)initWithStatementPointer:(sqlite3_stmtRef)arg1 owner:(id)arg2 ;
-(void)_finalizeWithLogWarning:(id)arg1 ;
-(sqlite3_stmtRef)stmt;
@end
