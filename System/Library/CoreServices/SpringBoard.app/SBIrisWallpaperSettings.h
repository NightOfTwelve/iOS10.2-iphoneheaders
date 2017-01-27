/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@interface SBIrisWallpaperSettings : SBUISettings {

	BOOL _orbCancelsScroll;
	BOOL _scrollCancelsOrb;
	BOOL _irisLoopFadesOutUI;

}

@property (assign,nonatomic) BOOL orbCancelsScroll;                //@synthesize orbCancelsScroll=_orbCancelsScroll - In the implementation block
@property (assign,nonatomic) BOOL scrollCancelsOrb;                //@synthesize scrollCancelsOrb=_scrollCancelsOrb - In the implementation block
@property (assign,nonatomic) BOOL irisLoopFadesOutUI;              //@synthesize irisLoopFadesOutUI=_irisLoopFadesOutUI - In the implementation block
+(id)settingsControllerModule;
-(BOOL)scrollCancelsOrb;
-(void)setOrbCancelsScroll:(BOOL)arg1 ;
-(void)setScrollCancelsOrb:(BOOL)arg1 ;
-(void)setIrisLoopFadesOutUI:(BOOL)arg1 ;
-(BOOL)orbCancelsScroll;
-(BOOL)irisLoopFadesOutUI;
-(void)setDefaultValues;
@end
