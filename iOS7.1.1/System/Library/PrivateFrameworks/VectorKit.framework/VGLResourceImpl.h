/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VGLResourceFactory;

@interface VGLResourceImpl : NSObject {

	VGLResourceFactory* _factory;
	int _resourceType;
	int _count;
	unsigned _token;
	unsigned* _tokens;

}
-(void)dealloc;
-(int)count;
-(id)description;
-(unsigned*)tokens;
-(unsigned)token;
-(void)markUnused;
-(void)deleteResource;
-(id)initWithFactory:(id)arg1 resourceType:(int)arg2 count:(int)arg3 ;
@end

