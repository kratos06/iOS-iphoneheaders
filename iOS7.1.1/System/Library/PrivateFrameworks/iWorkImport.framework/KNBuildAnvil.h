/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameBuildAnimator.h>

@class TSDGLParticleSystem, TSDGLShader, TSDGLTextureInfo, TSDGLDataBuffer;

@interface KNBuildAnvil : KNAnimationEffect <KNFrameBuildAnimator> {

	TSDGLParticleSystem* _smokeSystem;
	TSDGLShader* _smokeShader;
	TSDGLTextureInfo* _smokeTexture;
	TSDGLParticleSystem* _specksSystem;
	TSDGLShader* _specksShader;
	TSDGLTextureInfo* _specksTexture;
	CGPoint* _cameraShakePoints;
	CATransform3D _baseTransform;
	TSDGLShader* _objectShader;
	TSDGLShader* _objectBlurShader;
	TSDGLDataBuffer* _objectDataBuffer;
	TSDGLDataBuffer* _objectBlurDataBuffer;
	CGRect _drawableFrame;
	CGRect _frameRect;
	bool _shouldDrawMotionBlur;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(bool)requiresSingleTexturePerStage;
+(id)defaultAttributes;
+(id)animationName;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(id)p_smokeSystemForTR:(id)arg1 build:(id)arg2 ;
-(id)p_specksSystemForTR:(id)arg1 build:(id)arg2 ;
-(CGPoint*)p_cameraShakePoints;
-(CGPoint)p_objectTranslationAtPercent:(double)arg1 duration:(double)arg2 objectSmashDuration:(double)arg3 objectFrame:(CGRect)arg4 ;
-(void)dealloc;
@end
