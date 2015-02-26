/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartRenderCycle.h>

@interface TSCH3DChartCanvasRenderCycle : TSCH3DChartRenderCycle {

	BOOL mInteractiveMode;

}
-(unsigned long long)multisamples;
-(id)initWithRenderCycleInfo:(const RenderCycleInfo*)arg1 ;
-(BOOL)usesMultipassRendering;
-(BOOL)allocateFramebufferWithAllocationInfo:(const FramebufferAllocationInfo*)arg1 ;
-(void)beginInteractiveModeWithMinimumBufferSize:(CGSize)arg1 ;
-(void)endInteractiveMode;
-(Class)noninteractiveSetupClass;
-(Class)noninteractivePresenterClass;
-(void)switchToChartRenderSetupClass:(Class)arg1 ;
@end
