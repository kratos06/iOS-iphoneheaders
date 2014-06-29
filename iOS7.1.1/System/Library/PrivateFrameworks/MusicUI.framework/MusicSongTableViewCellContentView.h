/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicTableViewCellContentView.h>

@class UIImageView, MusicNowPlayingIndicatorView, MPUItemOfferButton;

@interface MusicSongTableViewCellContentView : MusicTableViewCellContentView {

	bool _displayAsDisabled;
	bool _explicitTrack;
	bool _geniusTrack;
	bool _playing;
	bool _itemOfferButtonNeedsSetup;
	UIImageView* _explicitImageView;
	UIImageView* _geniusImageView;
	MusicNowPlayingIndicatorView* _nowPlayingIndicatorView;
	MPUItemOfferButton* _itemOfferButton;

}

@property (assign,getter=isDisplayingAsDisabled,nonatomic) bool displayAsDisabled;                  //@synthesize displayAsDisabled=_displayAsDisabled - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) bool explicitTrack;                             //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (nonatomic,readonly) UIImageView * explicitImageView;                                     //@synthesize explicitImageView=_explicitImageView - In the implementation block
@property (assign,getter=isGeniusTrack,nonatomic) bool geniusTrack;                                 //@synthesize geniusTrack=_geniusTrack - In the implementation block
@property (nonatomic,readonly) UIImageView * geniusImageView;                                       //@synthesize geniusImageView=_geniusImageView - In the implementation block
@property (assign,getter=isPlaying,nonatomic) bool playing;                                         //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingIndicatorView * nowPlayingIndicatorView;              //@synthesize nowPlayingIndicatorView=_nowPlayingIndicatorView - In the implementation block
@property (nonatomic,retain) MPUItemOfferButton * itemOfferButton;                                  //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (assign,nonatomic) bool itemOfferButtonNeedsSetup;                                        //@synthesize itemOfferButtonNeedsSetup=_itemOfferButtonNeedsSetup - In the implementation block
-(bool)isPlaying;
-(bool)isExplicitTrack;
-(void)drawRect:(CGRect)arg1 ;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void).cxx_destruct;
-(void)setGeniusTrack:(bool)arg1 ;
-(void)setExplicitTrack:(bool)arg1 ;
-(bool)isDisplayingAsDisabled;
-(void)setDisplayAsDisabled:(bool)arg1 ;
-(id)nowPlayingIndicatorView;
-(id)explicitImageView;
-(id)geniusImageView;
-(void)setItemOfferButton:(id)arg1 ;
-(void)_itemOfferButtonShowConfirmationAction:(id)arg1 ;
-(void)_itemOfferButtonCancelConfirmationAction:(id)arg1 ;
-(bool)isGeniusTrack;
-(bool)itemOfferButtonNeedsSetup;
-(void)setItemOfferButtonNeedsSetup:(bool)arg1 ;
-(void)setPlaying:(bool)arg1 ;
-(id)itemOfferButton;
@end
