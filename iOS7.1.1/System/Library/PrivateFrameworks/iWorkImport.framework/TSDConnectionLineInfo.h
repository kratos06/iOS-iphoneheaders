/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeInfo.h>

@class TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo {

	TSDDrawableInfo* mConnectedFrom;
	TSDDrawableInfo* mConnectedTo;
	struct {
		unsigned connectedFrom : 1;
		unsigned connectedTo : 1;
	}  mInvalidFlags;

}

@property (nonatomic,retain) TSDDrawableInfo * connectedFrom; 
@property (nonatomic,retain) TSDDrawableInfo * connectedTo; 
+(id)cleanupInfos:(id)arg1 duringCommand:(id)arg2 updateGeometries:(bool)arg3 ;
-(id)titleForBuildChunk:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ConnectionLineArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ConnectionLineArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveGeometryToArchive:(GeometryArchive*)arg1 archiver:(id)arg2 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(void)acceptVisitor:(id)arg1 ;
-(id)presetKind;
-(Class)repClass;
-(Class)editorClass;
-(id)computeLayoutInfoGeometry;
-(void)performBlockWithTemporaryLayout:(/*^block*/ id)arg1 ;
-(CGAffineTransform)computeLayoutFullTransform;
-(bool)canAnchor;
-(id)connectedTo;
-(id)connectedFrom;
-(void)setConnectedFrom:(id)arg1 ;
-(void)setConnectedTo:(id)arg1 ;
-(void)computeLayoutInfoGeometry:(id*)arg1 andPathSource:(id*)arg2 ;
-(id)commandForSettingConnectionLineType:(int)arg1 ;
-(void)dealloc;
-(Class)layoutClass;
@end

