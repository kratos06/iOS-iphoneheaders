/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartRenderCycle.h>

@class NSArray;

@interface TSCH3DChartBuildImageRenderCycle : TSCH3DChartRenderCycle {

	BOOL mIsAntialiasing;
	BOOL mIsSingleImage;
	BOOL mFlipImages;
	NSArray* mImages;

}

@property (assign,nonatomic) BOOL antialias; 
@property (assign,nonatomic) BOOL isSingleImage; 
@property (assign,nonatomic) BOOL flipImages; 
@property (nonatomic,readonly) NSArray * images; 
-(BOOL)flipImages;
-(void)setFlipImages:(BOOL)arg1 ;
-(box<glm::detail::tvec2<float> >)imageBodyCanvasBounds;
-(BOOL)shouldRenderLegendIntoSeparateLayer;
-(Class)layerCacheLogicClass;
-(id)initWithRenderCycleInfo:(const RenderCycleInfo*)arg1 ;
-(BOOL)allocateFramebufferWithAllocationInfo:(const FramebufferAllocationInfo*)arg1 ;
-(BOOL)runPipeline:(id)arg1 ;
-(void)switchToRenderPresenter:(id)arg1 ;
-(void)restoreDefaultRenderPresenter;
-(void)p_setupPipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 antialiasing:(BOOL)arg4 ;
-(id)p_buildImageSetup;
-(unsigned)p_tileSize;
-(id)tileFBOResource;
-(void)p_allocateTileFramebuffer;
-(void)p_setClippingRectFromVisibleBodyCanvasBounds:(const CGRect*)arg1 ;
-(id)tilePipeline;
-(void)p_setViewportSpaceImages:(id)arg1 samples:(float)arg2 ;
-(BOOL)antialias;
-(void)setAntialias:(BOOL)arg1 ;
-(BOOL)isSingleImage;
-(void)setIsSingleImage:(BOOL)arg1 ;
-(void)dealloc;
-(id)images;
-(Class)layerClass;
@end

