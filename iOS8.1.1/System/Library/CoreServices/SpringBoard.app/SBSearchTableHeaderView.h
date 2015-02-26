/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, SBObservingLabel, UIView, NSDictionary;

@interface SBSearchTableHeaderView : UIView {

	NSString* _reuseIdentifier;
	SBObservingLabel* _titleLabel;
	UIView* _separatorView;
	NSDictionary* _titleTextAttributes;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,copy,readonly) NSString * reuseIdentifier;               //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (nonatomic,retain) SBObservingLabel * titleLabel;                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                          //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSDictionary * titleTextAttributes;              //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(id)lineColor;
-(void)updateFonts;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isUserInteractionEnabled;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(SBObservingLabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(void)prepareForReuse;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setTitleLabel:(SBObservingLabel *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end
