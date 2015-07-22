/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResourceLoader.h>

@protocol TSCH3DRenderBufferAllocator;
@interface TSCH3DFBOLoader : TSCH3DResourceLoader {

	tvec2<int> mSize;
	FramebufferAttributes mFramebufferAttributes;
	id<TSCH3DRenderBufferAllocator> mColorAllocator;
	id<TSCH3DRenderBufferAllocator> mDepthAllocator;

}

@property (nonatomic,readonly) tvec2<int> size; 
@property (nonatomic,readonly) FramebufferAttributes framebufferAttributes; 
@property (nonatomic,readonly) id<TSCH3DRenderBufferAllocator> colorAllocator; 
@property (nonatomic,readonly) id<TSCH3DRenderBufferAllocator> depthAllocator; 
+(unsigned)estimatedMemoryInBytesForSize:(tvec2<int>)arg1 samples:(unsigned)arg2 hasColorbuffer:(char)arg3 hasDepthbuffer:(char)arg4 ;
+(id)loaderWithFramebufferAttributes:(const FramebufferAttributes*)arg1 size:(const tvec2<int>*)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4 ;
-(id)generateHandleWithConfig:(void*)arg1 ;
-(unsigned)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(void)bindHandle:(id)arg1 config:(void*)arg2 ;
-(void)deactivateHandle:(id)arg1 insideContext:(id)arg2 ;
-(id)initWithFramebufferAttributes:(const FramebufferAttributes*)arg1 size:(const tvec2<int>*)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4 ;
-(SessionLoadResourceResult)loadResource:(id)arg1 insideSession:(id)arg2 ;
-(id<TSCH3DRenderBufferAllocator>)colorAllocator;
-(id<TSCH3DRenderBufferAllocator>)depthAllocator;
-(FramebufferAttributes)framebufferAttributes;
-(void)dealloc;
-(tvec2<int>)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end
