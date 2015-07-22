/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLDepthStencilState.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilState> {

	id<MTLDevice> _device;
	NSString* _label;

}

@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (readonly) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)label;
-(id<MTLDevice>)device;
@end
