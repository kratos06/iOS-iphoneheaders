/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartTitleSceneObject.h>

@interface TSCH3DChartAxisTitleSceneObject : TSCH3DChartTitleSceneObject
+(unsigned)styleIndexForInfo:(id)arg1 ;
+(id)paragraphStyleForTitleFontForInfo:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3 ;
-(id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2 ;
-(char)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(char)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(char)enabledForInfo:(id)arg1 ;
-(LabelTransform)labelTransformForPositioner:(id)arg1 ;
-(id)textForInfo:(id)arg1 ;
@end
