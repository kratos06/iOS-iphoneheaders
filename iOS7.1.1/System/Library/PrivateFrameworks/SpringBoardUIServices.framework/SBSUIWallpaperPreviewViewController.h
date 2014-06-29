/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoardUIServices/SBFWallpaperViewLegibilityObserver.h>
#import <SpringBoardFoundation/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class _UILegibilitySettings, NSTimer, UIImage, NSDictionary, SBFLockScreenSimpleDateFormatter;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFWallpaperViewLegibilityObserver, SBFLegibilitySettingsProvider> {

	NSTimer* _dateTimer;
	<SBFLegibilitySettingsProviderDelegate>* _delegate;
	UIImage* _wallpaperImage;
	NSDictionary* _proceduralWallpaper;
	NSDictionary* _proceduralWallpaperOptions;
	bool _colorSamplingEnabled;
	bool _allowScrolling;
	SBFLockScreenSimpleDateFormatter* _dateFormatter;
	long long _variant;
	bool _motionEnabled;

}

@property (readonly) UIImage * wallpaperImage; 
@property (assign,nonatomic) bool motionEnabled;                                              //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (assign,nonatomic) bool colorSamplingEnabled; 
@property (assign,nonatomic) <SBFLegibilitySettingsProviderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
-(id)_dateView;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithImage:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)legibilitySettings;
-(void)setWallpaperForLocations:(long long)arg1 ;
-(id)initWithWallpaperVariant:(long long)arg1 ;
-(bool)motionEnabled;
-(void)setMotionEnabled:(bool)arg1 ;
-(id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2 ;
-(id)initWithScrollableImage:(id)arg1 ;
-(id)wallpaperImage;
-(void)setColorSamplingEnabled:(bool)arg1 ;
-(bool)colorSamplingEnabled;
-(void)wallpaperView:(id)arg1 legibilitySettingsDidChange:(id)arg2 ;
-(id)_wallpaperView;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 ;
-(void)_updateDateView;
-(void)_stopDateTimer;
-(id)_backdropWallpaperView;
-(double)_parallaxFactor;
-(id)_proceduralWallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 ;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 image:(id)arg2 supportsCropping:(bool)arg3 ;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 options:(id)arg3 ;
-(id)_previewView;
-(void)_startDateTimer;
-(id)initWithColorSamplingEnabled:(bool)arg1 ;
@end
