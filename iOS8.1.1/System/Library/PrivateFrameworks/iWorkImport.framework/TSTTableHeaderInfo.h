/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTTableHeaderInfo : NSObject {

	TSTCellStyle* mCellStyle;
	TSWPParagraphStyle* mTextStyle;
	double mSize;
	unsigned char mHidingState;
	unsigned short mNumberOfCells;

}

@property (nonatomic,retain) TSTCellStyle * cellStyle; 
@property (nonatomic,retain) TSWPParagraphStyle * textStyle; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) unsigned char hidingState; 
@property (assign,nonatomic) unsigned short numberOfCells; 
-(unsigned char)hidingState;
-(void)setHidingState:(unsigned char)arg1 ;
-(void)setNumberOfCells:(unsigned short)arg1 ;
-(void)dealloc;
-(double)size;
-(id)description;
-(void)setSize:(double)arg1 ;
-(TSWPParagraphStyle *)textStyle;
-(TSTCellStyle *)cellStyle;
-(void)setCellStyle:(TSTCellStyle *)arg1 ;
-(void)setTextStyle:(TSWPParagraphStyle *)arg1 ;
-(unsigned short)numberOfCells;
@end
