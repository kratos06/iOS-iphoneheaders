/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CAAnimationDelegateBlockHelper : NSObject {

	/*^block*/ id _animationDidStartBlock;
	/*^block*/ id _animationDidStopBlock;

}

@property (nonatomic,copy) id animationDidStartBlock;              //@synthesize animationDidStartBlock=_animationDidStartBlock - In the implementation block
@property (nonatomic,copy) id animationDidStopBlock;               //@synthesize animationDidStopBlock=_animationDidStopBlock - In the implementation block
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(/*^block*/ id)animationDidStartBlock;
-(void)setAnimationDidStartBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)animationDidStopBlock;
-(void)setAnimationDidStopBlock:(/*^block*/ id)arg1 ;
@end

