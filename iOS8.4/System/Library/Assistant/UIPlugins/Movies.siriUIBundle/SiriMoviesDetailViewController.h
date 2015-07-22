/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>

@class SiriMoviesDetailView, SiriMoviesDetailContainerView, SiriUISnippetViewController, MPMoviePlayerController, NSString, SAMovieV2MovieDetailSnippet;

@interface SiriMoviesDetailViewController : SiriUISnippetViewController {

	SiriMoviesDetailView* _detailView;
	SiriMoviesDetailContainerView* _detailContainerView;
	SiriUISnippetViewController* _showtimesViewController;
	BOOL _shouldAutoPlayTrailer;
	BOOL _cancelAutoPlayTrailer;
	MPMoviePlayerController* _trailerPlayerController;
	NSString* _savedAudioSessionCategory;
	unsigned long long _savedAudioSessionCategoryOptions;

}

@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * snippet; 
@property (setter=_setTrailerPlayerController:,getter=_trailerPlayerController,nonatomic,retain) MPMoviePlayerController * trailerPlayerController;                                  //@synthesize trailerPlayerController=_trailerPlayerController - In the implementation block
@property (setter=_setSavedAudioSessionCategory:,getter=_savedAudioSessionCategory,nonatomic,retain) NSString * savedAudioSessionCategory;                                           //@synthesize savedAudioSessionCategory=_savedAudioSessionCategory - In the implementation block
@property (assign,setter=_setSavedAudioSessionCategoryOptions:,getter=_savedAudioSessionCategoryOptions,nonatomic) unsigned long long savedAudioSessionCategoryOptions;              //@synthesize savedAudioSessionCategoryOptions=_savedAudioSessionCategoryOptions - In the implementation block
-(void)_setSavedAudioSessionCategory:(id)arg1 ;
-(id)initWithMovieDetailSnippet:(id)arg1 ;
-(void)_setTrailerPlayerController:(id)arg1 ;
-(BOOL)_shouldPlayHighResolutionTrailer;
-(void)_setSavedAudioSessionCategoryOptions:(unsigned long long)arg1 ;
-(unsigned long long)_savedAudioSessionCategoryOptions;
-(void)_moviePlayerMediaTypesAvailable:(id)arg1 ;
-(void)_restoreAudioPlaybackCategoryAndOptions;
-(void)_dismissTrailerPlayerControllerAnimated:(BOOL)arg1 ;
-(void)_updateMovieAudioPlaybackCategory;
-(id)_savedAudioSessionCategory;
-(void)buyOnItunesButtonTapped:(id)arg1 ;
-(void)_rotateTrailerViewIfNecessary:(id)arg1 ;
-(void)rentOnItunesButtonTapped:(id)arg1 ;
-(void)_startTrailer;
-(void)watchTrailerButtonTapped:(id)arg1 ;
-(void)reviewsButtonTapped:(id)arg1 ;
-(void)showtimesButtonTapped:(id)arg1 ;
-(void)_moviePlayerPlaybackDidFinish:(id)arg1 ;
-(id)_trailerPlayerController;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
@end
