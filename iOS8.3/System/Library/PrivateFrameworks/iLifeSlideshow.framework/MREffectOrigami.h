/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:34 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MREffect.h>

@class NSArray, NSMutableDictionary, NSMutableArray, MRImage, MRCAMLBezierData, MROrigamiAnimationPath;

@interface MREffectOrigami : MREffect {

	NSArray* mPatchworkAtBeginning;
	NSArray* mPatchworkAtEnd;
	NSMutableDictionary* mSprites;
	NSMutableArray* mSpriteKeysWatcher;
	NSArray* mAnimationTimeBounds;
	NSMutableArray* mItemInfos;
	double mDurationStretchFactor;
	MRImage* mBackColorImage;
	float mBackColorForImage[3];
	float mDescriptionAspectRatio;
	float mPixelUnit;
	char mIsOrigami2Effect;
	char mIsHorizontal;
	char mIsOriginallyHorizontal;
	MRCAMLBezierData* mBreakCurve;
	MROrigamiAnimationPath* mLittleSwing;
	MROrigamiAnimationPath* mBigSwing;
	MROrigamiAnimationPath* mSideSwing;
	MROrigamiAnimationPath* mThirdsSwingTop;
	MROrigamiAnimationPath* mThirdsSwingBottom;
	SCD_Struct_MR12* mBreakInfos;
	unsigned mTotalNumberOfFolds;

}
+(void)initialize;
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(float)arg5 ;
+(char)hasCustomTiming;
-(void)_unload;
-(void)_cleanup;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)_setupSwingTimings;
-(void)_cleanupSwingTimings;
-(char)_checkPanoramaAbsoluteSizeForImage:(id)arg1 inRect:(CGRect*)arg2 ;
-(char)_needsRenderingAtTime:(double)arg1 remainingStillDurationAfter:(double*)arg2 ;
-(void)renderFold4LeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderStillAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)_setupBreakInfos:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderFallAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderBreakAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipLeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipDownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFoldLeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFoldDownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)render1To3LeftAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)render1To3DownAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderFlipDiagonalAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(void)renderUnfoldingFlowerAtTime:(double)arg1 andProgress:(float)arg2 inContext:(id)arg3 withArguments:(id)arg4 inRect:(CGRect)arg5 withAttributes:(id)arg6 ;
-(id)_retainedByUserBackColorImageInContext:(id)arg1 ;
-(void)_setTargetSizeOfImageProviders;
@end

