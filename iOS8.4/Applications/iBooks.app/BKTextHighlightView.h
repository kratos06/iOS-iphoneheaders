/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIImageView.h>
#import <iBooks/NSCopying.h>

@class AEHighlightLine;

@interface BKTextHighlightView : UIImageView <NSCopying> {

	int _type;
	id _owner;
	char _imageHighlight;
	char _lightenBlend;
	float _currentScale;
	UIEdgeInsets _contentInsets;
	AEHighlightLine* _highlightLine;

}

@property (assign,nonatomic) int highlightType;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id owner;                                     //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) char imageHighlight;                          //@synthesize imageHighlight=_imageHighlight - In the implementation block
@property (assign,nonatomic) float currentScale;                           //@synthesize currentScale=_currentScale - In the implementation block
@property (assign,nonatomic) char lightenBlend;                            //@synthesize lightenBlend=_lightenBlend - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                   //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) AEHighlightLine * highlightLine;              //@synthesize highlightLine=_highlightLine - In the implementation block
+(int)bkTextHighlightTypeForIMTextHighlightType:(int)arg1 ;
-(char)lightenBlend;
-(void)setLightenBlend:(char)arg1 ;
-(void)setHighlightType:(int)arg1 ;
-(void)setCurrentScale:(float)arg1 ;
-(void)updateHighlightImage;
-(int)highlightType;
-(float)currentScale;
-(void)setHighlightLine:(AEHighlightLine *)arg1 ;
-(CGRect)_safeInsetRect:(CGRect)arg1 widthInset:(float)arg2 heightInset:(float)arg3 ;
-(id)_selectionImage;
-(id)_rotatedImageFromImage:(id)arg1 ;
-(char)imageHighlight;
-(void)setImageHighlight:(char)arg1 ;
-(AEHighlightLine *)highlightLine;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)didMoveToSuperview;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end
