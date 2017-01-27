/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>

@class NSString;

@interface MDLLight : MDLObject {

	RTLight* _light;
	NSString* _colorSpace;
	CGColorSpaceRef _cgColorSpace;
	unsigned long long _lightType;

}

@property (nonatomic,readonly) RTLight* rtLight; 
@property (assign,nonatomic) unsigned long long lightType;              //@synthesize lightType=_lightType - In the implementation block
@property (nonatomic,copy) NSString * colorSpace; 
+(id)lightWithSCNLight:(id)arg1 ;
-(id)init;
-(void)setTransform:(id)arg1 ;
-(void)dealloc;
-(1)position;
-(NSString *)colorSpace;
-(RTLight*)rtLight;
-(CGColorRef)irradianceAtPoint:;
-(CGColorRef)irradianceAtPoint:(CGColorSpaceRef)arg1 ;
-(void)setLightType:(unsigned long long)arg1 ;
-(unsigned long long)lightType;
-(void)setColorSpace:(NSString *)arg1 ;
@end
