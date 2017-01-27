/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemoteCommand.h>

@interface MPSkipTrackCommand : MPRemoteCommand {

	SCD_Struct_MP13 _skipLimit;

}

@property (assign,nonatomic) SCD_Struct_MP13 skipLimit;              //@synthesize skipLimit=_skipLimit - In the implementation block
-(SCD_Struct_MP13)skipLimit;
-(void)setSkipLimit:(SCD_Struct_MP13)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
@end
