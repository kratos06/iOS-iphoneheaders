/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {

	float mScale;
	BOOL mCircularArrows;
	int mDiagramType;
	int mArrowShapeType;

}
-(CGSize)nodeSize;
-(CGRect)nodeBoundsWithIndex:(unsigned long long)arg1 ;
-(void)mapTransitionPointAt:(id)arg1 index:(unsigned)arg2 withState:(id)arg3 ;
-(void)mapTransitionArrowsAt:(id)arg1 index:(unsigned)arg2 withState:(id)arg3 ;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(CGRect)circumscribedBounds;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

