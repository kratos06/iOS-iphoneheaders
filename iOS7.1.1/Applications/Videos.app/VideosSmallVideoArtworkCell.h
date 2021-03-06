/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <Videos/VideosArtworkCell.h>

@class UILabel, NSString;

@interface VideosSmallVideoArtworkCell : VideosArtworkCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)prepareForReuse;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void).cxx_destruct;
-(void)setArtworkImage:(id)arg1 ;
@end

