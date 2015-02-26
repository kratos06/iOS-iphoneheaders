/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDrawableMapper.h>

@class WDAContent;

@interface WMOfficeArtMapper : CMDrawableMapper {

	BOOL mFloating;
	BOOL mIsMapped;
	BOOL mIsInsideGroup;
	WDAContent* mContent;
	unsigned mCurrentPage;

}
-(void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDiagramAt:(id)arg1 withState:(id)arg2 ;
-(void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)expandedSizeForTextBox:(id)arg1 withState:(id)arg2 ;
-(void)setCurrentPage:(unsigned)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)blipAtIndex:(unsigned)arg1 ;
-(id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 origin:(CGPoint)arg3 parent:(id)arg4 ;
-(void)setBoundingBox;
-(void)setWithClientData:(id)arg1 state:(id)arg2 ;
-(id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2 ;
-(BOOL)isInsideGroup;
-(void)setIsInsideGroup:(BOOL)arg1 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
@end
