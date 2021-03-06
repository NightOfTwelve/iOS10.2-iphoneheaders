/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFNetMonitorDelegate.h>
#import <HMFoundation/_HMFNetServiceMonitorDelegate.h>
#import <HMFoundation/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol HMFHTTPClientDelegate, OS_dispatch_queue;
@class NSURL, HMFNetService, NSObject, NSURLSession, HMFNetMonitor, NSOperationQueue, _HMFNetServiceMonitor, HMFExponentialBackoffTimer, NSString;

@interface HMFHTTPClient : NSObject <HMFLogging, HMFNetMonitorDelegate, _HMFNetServiceMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate> {

	BOOL _reachable;
	BOOL _allowAnonymousConnection;
	NSURL* _baseURL;
	id<HMFHTTPClientDelegate> _delegate;
	HMFNetService* _netService;
	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSURLSession* _session;
	HMFNetMonitor* _reachabilityMonitor;
	NSOperationQueue* _reachabilityProbeQueue;
	_HMFNetServiceMonitor* _netServiceMonitor;
	HMFExponentialBackoffTimer* _delegatedPingTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                   //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                 //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) HMFNetMonitor * reachabilityMonitor;                        //@synthesize reachabilityMonitor=_reachabilityMonitor - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * reachabilityProbeQueue;                  //@synthesize reachabilityProbeQueue=_reachabilityProbeQueue - In the implementation block
@property (nonatomic,readonly) _HMFNetServiceMonitor * netServiceMonitor;                  //@synthesize netServiceMonitor=_netServiceMonitor - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * delegatedPingTimer;              //@synthesize delegatedPingTimer=_delegatedPingTimer - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                            //@synthesize reachable=_reachable - In the implementation block
@property (__weak) id<HMFHTTPClientDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                                            //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) HMFNetService * netService;                                 //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL allowAnonymousConnection;                                //@synthesize allowAnonymousConnection=_allowAnonymousConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
+(BOOL)isValidBaseURL:(id)arg1 ;
+(id)baseURLWithScheme:(id)arg1 hostAddress:(id)arg2 port:(unsigned long long)arg3 ;
-(id)init;
-(void)setDelegate:(id<HMFHTTPClientDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMFHTTPClientDelegate>)delegate;
-(BOOL)isValid;
-(unsigned long long)options;
-(id)shortDescription;
-(NSURL *)baseURL;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURLSession *)session;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)networkMonitorIsUnreachable:(id)arg1 ;
-(HMFNetService *)netService;
-(id)initWithNetService:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setAllowAnonymousConnection:(BOOL)arg1 ;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)monitor:(id)arg1 didUpdateNetService:(id)arg2 ;
-(void)notifyDelegateOfReachabilityChange:(BOOL)arg1 ;
-(void)monitor:(id)arg1 didUpdateReachability:(BOOL)arg2 ;
-(void)__initializeWithOptions:(unsigned long long)arg1 ;
-(_HMFNetServiceMonitor *)netServiceMonitor;
-(HMFNetMonitor *)reachabilityMonitor;
-(id)currentNetService;
-(NSOperationQueue *)reachabilityProbeQueue;
-(BOOL)requestClientReachabilityPingWithRetry:(BOOL)arg1 ;
-(void)startDelegatedPingTimer;
-(void)stopDelegatedPingTimer;
-(HMFExponentialBackoffTimer *)delegatedPingTimer;
-(void)setDelegatedPingTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(void)startReachabilityProbe;
-(BOOL)allowAnonymousConnection;
-(id)initWithBaseURL:(id)arg1 options:(unsigned long long)arg2 ;
@end

