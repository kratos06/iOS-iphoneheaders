/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMDrawableMapper.h>

@class ODDDiagram, CMDrawingContext;

@interface CMDiagramMapper : CMDrawableMapper {

	ODDDiagram* mDiagram;
	CMDrawingContext* mDrawingContext;

}
+(int)diagramTypeFromString:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4 ;
-(id)identifierFromLayoutTypeId:(id)arg1 ;
-(id)copyDiagramMapperForId:(id)arg1 ;
-(id)diagram;
@end
