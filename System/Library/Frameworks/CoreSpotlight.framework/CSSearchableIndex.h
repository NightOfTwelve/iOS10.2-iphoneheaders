/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSearchableIndexDelegate, CSSearchableIndexInterfaceNSXPCProxyCreating, OS_dispatch_queue;
@class CSIndexingQueue, NSXPCConnection, NSObject, NSString, NSMutableArray;

@interface CSSearchableIndex : NSObject {

	CSIndexingQueue* _activityQueue;
	BOOL _batchOpen;
	int _awakeNotifyToken;
	id<CSSearchableIndexDelegate> _indexDelegate;
	NSXPCConnection* _connection;
	id<CSSearchableIndexInterface><NSXPCProxyCreating> _testProxy;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _name;
	NSString* _protectionClass;
	NSString* _bundleIdentifier;
	NSMutableArray* _batchedItemsToIndex;
	NSMutableArray* _batchedItemIdentifiersToDelete;
	long long _options;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<CSSearchableIndexInterface><NSXPCProxyCreating> testProxy;              //@synthesize testProxy=_testProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * protectionClass;                                                  //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) CSIndexingQueue * activityQueue; 
@property (nonatomic,retain) NSMutableArray * batchedItemsToIndex;                                      //@synthesize batchedItemsToIndex=_batchedItemsToIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * batchedItemIdentifiersToDelete;                           //@synthesize batchedItemIdentifiersToDelete=_batchedItemIdentifiersToDelete - In the implementation block
@property (assign,nonatomic) long long options;                                                         //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) int awakeNotifyToken;                                                      //@synthesize awakeNotifyToken=_awakeNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL batchOpen;                                                            //@synthesize batchOpen=_batchOpen - In the implementation block
@property (__weak) id<CSSearchableIndexDelegate> indexDelegate;                                         //@synthesize indexDelegate=_indexDelegate - In the implementation block
+(void)initialize;
+(double)lastUpdateTime;
+(BOOL)activityShouldBeIndexed:(id)arg1 bundleID:(id)arg2 ;
+(id)mainBundleID;
+(id)mainBundleLocalizedString;
+(id)_requestQueueAttribute;
+(void)_setLastUpdateTime;
+(BOOL)isIndexingAvailable;
+(void)notifyIndexDelegates;
+(id)defaultSearchableIndex;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(void)_commonInit;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)requestQueue;
-(id)initWithName:(id)arg1 options:(long long)arg2 ;
-(id)_initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 options:(long long)arg4 ;
-(id<CSSearchableIndexDelegate>)indexDelegate;
-(void)performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)performIndexJob:(id)arg1 ;
-(void)setProtectionClass:(NSString *)arg1 ;
-(void)setAwakeNotifyToken:(int)arg1 ;
-(void)setBatchOpen:(BOOL)arg1 ;
-(void)_cancelAwakeNotifyToken;
-(void)_indexActivities:(id)arg1 flush:(BOOL)arg2 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 protectionClass:(id)arg4 forBundleID:(id)arg5 options:(long long)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 clientStateName:(id)arg4 protectionClass:(id)arg5 forBundleID:(id)arg6 options:(long long)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)flushUserActivities;
-(void)performDataMigrationWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didInterruptConnection;
-(void)_didInvalidateConnection;
-(void)_checkInWithIndexDelegate:(id)arg1 reason:(id)arg2 ;
-(void)_registerAwakeNotifyToken;
-(BOOL)_supportsBatching;
-(BOOL)batchOpen;
-(NSMutableArray *)batchedItemsToIndex;
-(NSMutableArray *)batchedItemIdentifiersToDelete;
-(void)setBatchedItemsToIndex:(NSMutableArray *)arg1 ;
-(void)setBatchedItemIdentifiersToDelete:(NSMutableArray *)arg1 ;
-(void)indexSearchableItems:(id)arg1 deleteSearchableItemsWithIdentifiers:(id)arg2 clientState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_itemsBySanitizingItemsForSpotlight:(id)arg1 ;
-(id)_validateOperationWithItems:(id)arg1 ;
-(id)_validateOperationWithItems:(id)arg1 identifiers:(id)arg2 ;
-(id)_validateClientState:(id)arg1 ;
-(void)_setMailMessageAttributes:(id)arg1 ;
-(void)_standardizeItems:(id)arg1 ;
-(id)_validateOperationWithIdentifiers:(id)arg1 ;
-(CSIndexingQueue *)activityQueue;
-(id)_validateOperation;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_makeActivityQueueIfNecessary;
-(void)_performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unthrottle;
-(id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)initWithTestingStub:(id)arg1 ;
-(void)indexSearchableItems:(id)arg1 returningItemsSanitizedForSpotlightTo:(/*^block*/id)arg2 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 forUser:(unsigned)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 ;
-(void)indexUserActivity:(id)arg1 ;
-(id<CSSearchableIndexInterface><NSXPCProxyCreating>)testProxy;
-(void)setTestProxy:(id<CSSearchableIndexInterface><NSXPCProxyCreating>)arg1 ;
-(int)awakeNotifyToken;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 ;
-(void)_issueCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginIndexBatch;
-(void)indexSearchableItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)endIndexBatchWithClientState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIndexDelegate:(id<CSSearchableIndexDelegate>)arg1 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchLastClientStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)protectionClass;
-(void)addInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllInteractionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)throttle;
-(id)throttleQueue;
@end

