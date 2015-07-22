/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView, SiriUIKeyline, NSString, SiriMoviesShowtimeListView;

@interface SiriMoviesChevronButton : UIButton {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _accessoryLabel;
	UIImageView* _chevronImageView;
	SiriUIKeyline* _keyline;
	double _buttonWidth;
	BOOL _hasChevron;
	NSString* _primaryString;
	NSString* _secondaryString;
	SiriMoviesShowtimeListView* _showtimeListView;
	NSString* _accessoryString;
	long long _keylineType;

}

@property (assign,nonatomic) BOOL hasChevron;                                            //@synthesize hasChevron=_hasChevron - In the implementation block
@property (nonatomic,retain) NSString * primaryString;                                   //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                                 //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) SiriMoviesShowtimeListView * showtimeListView;              //@synthesize showtimeListView=_showtimeListView - In the implementation block
@property (nonatomic,retain) NSString * accessoryString;                                 //@synthesize accessoryString=_accessoryString - In the implementation block
@property (assign,nonatomic) long long keylineType;                                      //@synthesize keylineType=_keylineType - In the implementation block
+(double)buttonHeight;
-(double)_chevronYOffset;
-(SiriMoviesShowtimeListView *)showtimeListView;
-(void)setAccessoryString:(NSString *)arg1 ;
-(NSString *)accessoryString;
-(void)setShowtimeListView:(SiriMoviesShowtimeListView *)arg1 ;
-(double)_RightLabelMargin;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(NSString *)secondaryString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setKeylineType:(long long)arg1 ;
-(void)setHasChevron:(BOOL)arg1 ;
-(long long)keylineType;
-(BOOL)hasChevron;
-(NSString *)primaryString;
@end
