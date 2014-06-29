/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartSceneRenderSetup.h>

@protocol TSCH3DGLLayer;
@class CALayer;

@interface TSCH3DChartLayerBasedSceneRenderSetup : TSCH3DChartSceneRenderSetup {

	CALayer<TSCH3DGLLayer>* mLayer;
	CALayer* mPixelAlignmentLayer;
	CGRect mLayerVisibleBounds;

}

@property (nonatomic,retain) CALayer<TSCH3DGLLayer> * layer; 
@property (nonatomic,retain) CALayer * pixelAlignmentLayer; 
-(void)copyFromChartRenderSetup:(id)arg1 ;
-(id)pixelAlignmentLayer;
-(void)setPixelAlignmentLayer:(id)arg1 ;
-(box<glm::detail::tvec2<float> >)fullBoxForRenderingCamera;
-(box<glm::detail::tvec2<float> >)pixelAlignBodyCanvasBounds:(const box<glm::detail::tvec2<float> >*)arg1 ;
-(bool)setupLayerFromLayerProvider:(id)arg1 canvas:(id)arg2 visible:(CGRect)arg3 pixelAlignmentLayer:(id)arg4 ;
-(bool)allocateFramebufferWithAllocationInfo:(const FramebufferAllocationInfo*)arg1 forRenderCycle:(id)arg2 ;
-(void)setLayerVisibleBounds:(CGRect)arg1 ;
-(CGRect)layerVisibleBounds;
-(void)dealloc;
-(id)layer;
-(id)init;
-(void)setLayer:(id)arg1 ;
-(id).cxx_construct;
@end
