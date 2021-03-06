/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface HDDemoDataFoodObject : NSObject <NSSecureCoding> {

	NSString* _brandName;
	NSString* _genericName;
	long long _foodType;
	NSDictionary* _nutritionFacts;
	double _recommendedNumServings;

}

@property (nonatomic,copy) NSString * brandName;                         //@synthesize brandName=_brandName - In the implementation block
@property (nonatomic,copy) NSString * genericName;                       //@synthesize genericName=_genericName - In the implementation block
@property (assign,nonatomic) long long foodType;                         //@synthesize foodType=_foodType - In the implementation block
@property (nonatomic,copy) NSDictionary * nutritionFacts;                //@synthesize nutritionFacts=_nutritionFacts - In the implementation block
@property (assign,nonatomic) double recommendedNumServings;              //@synthesize recommendedNumServings=_recommendedNumServings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithBrandName:(id)arg1 genericName:(id)arg2 foodType:(long long)arg3 nutritionFacts:(id)arg4 ;
-(NSString *)brandName;
-(void)setBrandName:(NSString *)arg1 ;
-(NSString *)genericName;
-(void)setGenericName:(NSString *)arg1 ;
-(long long)foodType;
-(void)setFoodType:(long long)arg1 ;
-(NSDictionary *)nutritionFacts;
-(void)setNutritionFacts:(NSDictionary *)arg1 ;
-(double)recommendedNumServings;
-(void)setRecommendedNumServings:(double)arg1 ;
@end

