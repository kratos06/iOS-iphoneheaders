/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DStringIndexedResources.h>

@class NSMutableDictionary, TSCH3DTextureAtlas;

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources {

	NSMutableDictionary* mCache;
	TSCH3DTextureAtlas* mAtlas;

}

@property (nonatomic,readonly) TSCH3DTextureAtlas * atlas; 
-(void)setParagraphStyle:(id)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(void)setParagraphStyle:(id)arg1 forKey:(unsigned long long)arg2 atIndex:(const tvec2<int>*)arg3 ;
-(id)resourceAtIndex:(const tvec2<int>*)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 ;
-(id)paragraphStyleForKey:(unsigned long long)arg1 defaultStyle:(id)arg2 ;
-(id)prepareTextureAtlasWithSamples:(float)arg1 ;
-(void)dealloc;
-(id)initWithSize:(const tvec2<int>*)arg1 ;
-(id)atlas;
@end
