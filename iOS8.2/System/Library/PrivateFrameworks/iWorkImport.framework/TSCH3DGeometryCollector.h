/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DScene, NSMutableDictionary, NSDictionary;

@interface TSCH3DGeometryCollector : TSCH3DRetargetRenderProcessor {

	TSCH3DScene* mScene;
	NSMutableDictionary* mDerivedData;

}

@property (nonatomic,readonly) NSDictionary * derivedData; 
@property (nonatomic,readonly) TSCH3DScene * scene; 
+(id)processor;
+(id)processorWithOriginal:(id)arg1 ;
+(id)collectorWithScene:(id)arg1 ;
-(NSDictionary *)derivedData;
-(TSCH3DScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
