/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/UniversalSearchSimpleResultTableViewCell.h>

@class UniversalSearchITunesResultRatingView, EvenlyDistributedImagesView, UILabel, UIImageView, NSLayoutConstraint, NSArray, NSString, UIImage;

@interface UniversalSearchITunesResultTableViewCell : UniversalSearchSimpleResultTableViewCell {

	UniversalSearchITunesResultRatingView* _ratingView;
	EvenlyDistributedImagesView* _moreGlyphsView;
	UILabel* _rottenTomatoesTextLabel;
	UIImageView* _rottenTomatoesGlyphImageView;
	NSLayoutConstraint* _detailLabelBaselineToMoreGlyphsViewBottomConstraint;
	NSLayoutConstraint* _moreGlyphsViewBottomToRatingViewBottomConstraint;
	NSLayoutConstraint* _ratingViewBottomToContentViewBottomConstraint;
	NSArray* _rottenTomatoesGlyphPlacementConstraints;
	NSString* _rottenTomatoesText;
	char _rottenTomatoesTextOnOwnLine;
	UIImage* _rottenTomatoesGlyph;

}

@property (assign,nonatomic) double rating; 
-(void)configureWithSearchResult:(id)arg1 searchSession:(id)arg2 ;
-(void)initializeLayoutContraints;
-(id)templateTextAndImageColor;
-(float)distanceFromDetailLabelBaselineToMoreGlyphsViewBottom;
-(float)_distanceFromMoreGlyphsViewBottomToRatingViewBottom;
-(void)setRottenTomatoesContentFromResult:(id)arg1 searchSession:(id)arg2 ;
-(void)setMoreGlyphs:(id)arg1 ;
-(void)configureIconImagesWithSearchResult:(id)arg1 searchSession:(id)arg2 ;
-(void)configureAdditionalGlyphsWithSearchResult:(id)arg1 searchSession:(id)arg2 ;
-(void)updateBottomPlacementConstraintsForDetailLabel;
-(id)detailLabelBottomPlacementConstraints;
-(double)rating;
-(void)setRating:(double)arg1 ;
@end

