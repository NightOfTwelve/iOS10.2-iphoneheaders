/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/MLDDiagnosticCollection.h>

@class NSOperationQueue, NSMutableArray, NSError, NSString;

@interface MLDDatabaseImportManager : NSObject <MLDDiagnosticCollection> {

	NSOperationQueue* _importOperationQueue;
	NSMutableArray* _suspendedImportOperations;
	NSError* _lastImportError;

}

@property (nonatomic,retain) NSError * lastImportError;                                  //@synthesize lastImportError=_lastImportError - In the implementation block
@property (nonatomic,readonly) unsigned long long operationsCount; 
@property (nonatomic,readonly) unsigned long long suspendedOperationsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)lastImportError;
-(id)_suspendedImportOperations;
-(void)setLastImportError:(NSError *)arg1 ;
-(void)_handleImportOperationCancelled:(id)arg1 ;
-(void)_handleImportOperationCompleted:(id)arg1 ;
-(void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)_importOperations;
-(void)collectDiagnostic:(id)arg1 ;
-(unsigned long long)suspendedOperationsCount;
-(float)currentOperationProgressWithError:(id*)arg1 ;
-(void)cancelAllImportOperations;
-(void)cancelImportOperationsOriginatingFromClient:(id)arg1 ;
-(void)cancelImportOperationsForSource:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)suspendImportOperations;
-(void)resumeSuspendedImportOperations;
-(id)init;
-(unsigned long long)operationsCount;
@end

