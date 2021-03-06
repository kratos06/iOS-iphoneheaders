/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPPadding : NSObject {

	double _topInset;
	double _leftInset;
	double _bottomInset;
	double _rightInset;

}

@property (assign,nonatomic) double topInset;                 //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) double leftInset;                //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) double bottomInset;              //@synthesize bottomInset=_bottomInset - In the implementation block
@property (assign,nonatomic) double rightInset;               //@synthesize rightInset=_rightInset - In the implementation block
+(id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4 ;
+(id)padding;
-(void)saveToArchive:(PaddingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const PaddingArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4 ;
-(void)transform:(CGAffineTransform)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)topInset;
-(double)leftInset;
-(double)bottomInset;
-(double)rightInset;
-(void)setLeftInset:(double)arg1 ;
-(void)setTopInset:(double)arg1 ;
-(void)setRightInset:(double)arg1 ;
-(void)setBottomInset:(double)arg1 ;
@end

