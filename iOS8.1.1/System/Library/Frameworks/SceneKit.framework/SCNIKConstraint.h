/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode, NSMutableDictionary;

@interface SCNIKConstraint : SCNConstraint {

	id _reserved;
	SCNNode* _chainRootNode;
	SCNVector3 _ikTarget;
	NSMutableDictionary* _jointsPerNode;

}

@property (nonatomic,readonly) SCNNode * chainRootNode; 
@property (assign,nonatomic) SCNVector3 targetPosition; 
+(id)SCNJSExportProtocol;
+(id)inverseKinematicsConstraintWithChainRootNode:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setChainRootNode:(SCNNode *)arg1 ;
-(SCNVector3)targetPosition;
-(void)setTargetPosition:(SCNVector3)arg1 ;
-(SCNNode *)chainRootNode;
-(id)jointForNode:(id)arg1 ;
-(void)setMaxAllowedRotationAngle:(double)arg1 forJoint:(id)arg2 ;
-(double)maxAllowedRotationAngleForJoint:(id)arg1 ;
-(void)_customEncodingOfSCNIKConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNIKConstraint:(id)arg1 ;
-(void)_didDecodeSCNIKConstraint:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

