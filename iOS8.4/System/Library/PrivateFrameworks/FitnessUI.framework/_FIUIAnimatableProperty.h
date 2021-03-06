/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _FIUIAnimatableProperty : NSObject {

	/*^block*/id _getter;
	/*^block*/id _setter;
	NSMutableArray* _animations;
	id _currentValue;
	id _startValue;
	id _endValue;

}

@property (nonatomic,retain) id startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,retain) id endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,retain) id currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(void)setCurrentValue:(id)arg1 ;
-(void)update:(double)arg1 ;
-(void)setStartValue:(id)arg1 ;
-(void)setEndValue:(id)arg1 ;
-(id)initWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
-(void)addPropertyAnimation:(id)arg1 ;
-(void)removeAllPropertyAnimations;
-(BOOL)isFinishedAnimating;
-(id)endValue;
-(id)startValue;
-(id)currentValue;
@end

