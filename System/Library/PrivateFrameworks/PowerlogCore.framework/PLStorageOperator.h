/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLOperator.h>

@interface PLStorageOperator : PLOperator
+(id)eventIntervalCacheSizeWithPayload:(id)arg1 withEntryDate:(id)arg2 ;
+(id)eventPointCacheFlushWithPayload:(id)arg1 ;
+(id)entryEventIntervalDefinitionCacheSize;
+(id)entryEventPointDefinitionOTA;
+(id)entryEventPointDefinitionTimeCorrection;
+(id)entryEventPointDefinitionArchive;
+(id)entryEventPointDefinitionPLLog;
+(id)entryEventPointDefinitionCacheFlush;
+(id)entryEventForwardDefinitionSchemaChange;
+(id)entryEventForwardDefinitionConfiguration;
+(id)entryEventForwardDefinitionTimeOffset;
+(id)entryEventForwardDefinitionActivityStates;
+(id)entryEventForwardDefinitionTaskingMode;
+(id)entryEventNoneDefinitionActivity;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventIntervalDefinitions;
-(void)log;
-(void)logEventForwardTimeOffset:(id)arg1 ;
-(void)logEventForwardConfiguration:(id)arg1 ;
-(void)logEventForwardSchemaChange:(id)arg1 ;
-(void)logEventPointPLLog:(id)arg1 ;
-(void)logEventPointCacheFlush:(id)arg1 ;
-(void)logEventPointOTA:(id)arg1 ;
-(void)logEventPointTimeCorrection:(id)arg1 ;
-(void)logEventPointArchive:(id)arg1 ;
-(void)logEventForwardTaskingMode:(id)arg1 ;
-(void)initOperatorDependancies;
-(id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2 ;
@end
