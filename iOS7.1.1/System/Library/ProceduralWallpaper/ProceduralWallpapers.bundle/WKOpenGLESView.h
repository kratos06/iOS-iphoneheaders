/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue;
@class EAGLContext, NSObject, CADisplayLink;

@interface WKOpenGLESView : UIView {

	bool _initialized;
	EAGLContext* _context;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	NSObject<OS_dispatch_queue>* displayQueue;
	CADisplayLink* displayLink;
	long long frameInterval;

}

@property (assign) long long frameInterval; 
+(Class)layerClass;
-(bool)drawAtTime:(double)arg1 ;
-(void)drawGL:(id)arg1 ;
-(void)setDrawableSize:(CGSize)arg1 ;
-(void)prepare;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)_init;
-(void)setFrameInterval:(long long)arg1 ;
-(long long)frameInterval;
-(void)setAnimating:(bool)arg1 ;
-(void).cxx_destruct;
@end

