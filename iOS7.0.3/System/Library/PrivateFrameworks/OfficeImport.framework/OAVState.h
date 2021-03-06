/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class OAXDrawingState, OCPPackagePart, NSMutableDictionary, NSMutableSet;

@interface OAVState : NSObject {

	Class mClient;
	OAXDrawingState* mOAXState;
	OCPPackagePart* mPackagePart;
	NSMutableDictionary* mShapeTypes;
	NSMutableDictionary* mShapeIdMap;
	NSMutableSet* mDualDrawables;

}
-(void)dealloc;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(id)initWithClient:(Class)arg1 packagePart:(id)arg2 ;
-(BOOL)isDualDrawable:(id)arg1 ;
-(void)setOAXState:(id)arg1 ;
-(void)resetForNewDrawing;
-(id)drawableForVmlShapeId:(id)arg1 ;
-(void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2 ;
-(unsigned long)officeArtShapeIdWithVmlShapeId:(id)arg1 ;
-(id)blipRefForURL:(id)arg1 ;
-(unsigned short)shapeTypeForId:(id)arg1 ;
-(void)setShapeType:(unsigned short)arg1 forId:(id)arg2 ;
-(id)oaxState;
-(void)addDualDrawable:(id)arg1 ;
-(Class)client;
@end

