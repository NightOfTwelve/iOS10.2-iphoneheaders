/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointPrismatic : PKPhysicsJoint {

	unsigned* _jointDef : 2PrismaticJointDef;
	unsigned* _joint : 2PrismaticJoint;
	CGPoint _anchor;
	CGVector _axis;

}

@property (assign,nonatomic) BOOL shouldEnableLimits; 
@property (assign,nonatomic) double lowerDistanceLimit; 
@property (assign,nonatomic) double upperDistanceLimit; 
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setLowerDistanceLimit:(double)arg1 ;
-(void)setUpperDistanceLimit:(double)arg1 ;
-(void)create;
-(BOOL)shouldEnableLimits;
-(double)lowerDistanceLimit;
-(double)upperDistanceLimit;
@end
