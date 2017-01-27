/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/GEOResourceFiltersManagerDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate;
@class GEOActiveTileGroup, NSURLSession, NSURLSessionTask, NSMutableData, NSString, GEOResourceManifestConfiguration, NSTimer, GEOResourceManifestDownload, GEOResourceLoader, NSLock, NSError, NSMutableArray, GEOResourceFiltersManager;

@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLSessionDataDelegate, GEOResourceFiltersManagerDelegate, GEOResourceManifestServerProxy> {

	id<GEOResourceManifestServerProxyDelegate> _delegate;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	NSMutableData* _responseData;
	NSString* _responseETag;
	GEOResourceManifestConfiguration* _configuration;
	BOOL _wantsManifestUpdateOnReachabilityChange;
	NSTimer* _manifestUpdateTimer;
	BOOL _wantsTileGroupUpdateOnReachabilityChange;
	NSTimer* _tileGroupUpdateTimer;
	GEOResourceManifestDownload* _resourceManifest;
	GEOActiveTileGroup* _activeTileGroup;
	GEOResourceLoader* _resourceLoader;
	NSString* _loadingTileGroupUniqueIdentifier;
	BOOL _started;
	unsigned long long _manifestRetryCount;
	double _lastManifestRetryTimestamp;
	unsigned long long _tileGroupRetryCount;
	double _lastTileGroupRetryTimestamp;
	NSString* _authToken;
	NSLock* _authTokenLock;
	NSError* _lastResourceManifestLoadError;
	NSMutableArray* _manifestUpdateCompletionHandlers;
	double _lastManifestRequestStartTime;
	GEOResourceFiltersManager* _filtersManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
-(void)setDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(id)authToken;
-(GEOActiveTileGroup *)activeTileGroup;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)activateResourceScale:(int)arg1 ;
-(void)activateResourceScenario:(int)arg1 ;
-(void)deactivateResourceScale:(int)arg1 ;
-(void)deactivateResourceScenario:(int)arg1 ;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(oneway void)resetActiveTileGroup;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2 ;
-(id)serverQueue;
-(void)openConnection;
-(void)closeConnection;
-(void)updateIfNecessary:(/*^block*/id)arg1 ;
-(void)forceUpdate:(/*^block*/id)arg1 ;
-(void)performOpportunisticResourceLoading;
-(void)filtersManagerDidChangeActiveFilters:(id)arg1 ;
-(id)serverOperationQueue;
-(void)_startServer;
-(void)_loadFromDisk;
-(void)_changeActiveTileGroup:(id)arg1 activeScales:(id)arg2 activeScenarios:(id)arg3 loadedResources:(id)arg4 unloadedConditionalResources:(id)arg5 flushTileCache:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_idealTileGroupToUse;
-(void)_considerChangingActiveTileGroup;
-(void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_tileGroupTimerFired:(id)arg1 ;
-(void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_hasAllowableFallbackResourceForResource:(id)arg1 ;
-(void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ignoreIdentifier:(BOOL)arg3 ;
-(void)_cancelSession;
-(void)_cleanupSession;
-(void)_activeTileGroupOverridesChanged:(id)arg1 ;
-(BOOL)_writeActiveTileGroupToDisk:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeManifestToDisk:(id)arg1 error:(id*)arg2 ;
-(void)_networkDefaultsDidChange:(id)arg1 ;
-(id)_manifestURL;
-(BOOL)_updateManifestIfNecessary:(/*^block*/id)arg1 ;
-(void)_updateManifest:(/*^block*/id)arg1 ;
-(void)_updateManifest;
-(void)_scheduleUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_updateTimerFired:(id)arg1 ;
-(void)_notifyManifestUpdateCompletionHandlers:(id)arg1 ;
-(id)_resourcesForTileGroup:(id)arg1 fromResourceManifest:(id)arg2 regional:(BOOL)arg3 includeAttribution:(BOOL)arg4 scales:(id)arg5 scenarios:(id)arg6 ;
@end
