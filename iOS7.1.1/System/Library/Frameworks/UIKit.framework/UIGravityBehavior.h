/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {

	CGPoint _gravity;

}

@property (nonatomic,readonly) NSArray * items; 
@property (assign,nonatomic) CGVector gravityDirection; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double magnitude; 
-(id)init;
-(id)description;
-(void)_commonInit;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)setGravityDirection:(CGVector)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)setAngle:(double)arg1 ;
-(double)angle;
-(void)_addItem:(id)arg1 ;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(CGPoint)gravity;
-(double)magnitude;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(double)yComponent;
-(void)setGravity:(CGPoint)arg1 ;
-(double)xComponent;
-(CGVector)gravityDirection;
-(CGPoint)denormalizedGravity;
-(void)setMagnitude:(double)arg1 ;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
-(void)_setAngle:(double)arg1 magnitude:(double)arg2 ;
@end
