/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@interface MRMCBlockAction : MCAction {

	/*^block*/id _block;

}

@property (copy) id block;              //@synthesize block=_block - In the implementation block
+(id)blockActionWithBlock:(/*^block*/id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)description;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(id)imprint;
@end
