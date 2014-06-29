/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <PhotosUI/PLAlbumStreamingOptionsViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <PhotosUI/PUVideoTrimQueueControllerDelegate.h>
#import <PhotosUI/PUPhotoStreamComposeServiceDelegate.h>

@class PUPhotosPickerViewController, PUVideoTrimQueueController, PUPhotoStreamComposeServiceViewController, UIViewController, UIBarButtonItem, UIPopoverController, UISegmentedControl, PLCloudSharedAlbum;

@interface PUCloudSharedAlbumViewController : PUPhotosAlbumViewController <PLAlbumStreamingOptionsViewControllerDelegate, UIPopoverControllerDelegate, PUVideoTrimQueueControllerDelegate, PUPhotoStreamComposeServiceDelegate> {

	PUPhotosPickerViewController* _activePhotosPickerViewController;
	PUVideoTrimQueueController* _trimController;
	PUPhotoStreamComposeServiceViewController* _composeServiceController;
	bool _displayingOptions;
	bool __canContributeToCloudSharedAlbum;
	UIViewController* __optionsViewController;
	UIBarButtonItem* __optionsBarButtonItem;
	UIBarButtonItem* __optionsBarButtonSpacerItem;
	UIPopoverController* __optionsPopoverController;
	UISegmentedControl* __switcherSegmentedControl;
	UIBarButtonItem* __switcherBarButtonItem;
	long long __selectedItemIndex;

}

@property (nonatomic,retain) PLCloudSharedAlbum * album; 
@property (assign,setter=setDisplayingOptions:,getter=isDisplayingOptions,nonatomic) bool displayingOptions;                    //@synthesize displayingOptions=_displayingOptions - In the implementation block
@property (setter=_setOptionsViewController:,nonatomic,retain) UIViewController * _optionsViewController;                       //@synthesize _optionsViewController=__optionsViewController - In the implementation block
@property (setter=_setOptionsBarButtonItem:,nonatomic,retain) UIBarButtonItem * _optionsBarButtonItem;                          //@synthesize _optionsBarButtonItem=__optionsBarButtonItem - In the implementation block
@property (setter=_setOptionsBarButtonSpacerItem:,nonatomic,retain) UIBarButtonItem * _optionsBarButtonSpacerItem;              //@synthesize _optionsBarButtonSpacerItem=__optionsBarButtonSpacerItem - In the implementation block
@property (setter=_setOptionsPopoverController:,nonatomic,retain) UIPopoverController * _optionsPopoverController;              //@synthesize _optionsPopoverController=__optionsPopoverController - In the implementation block
@property (assign,setter=_setCanContributeToCloudSharedAlbum:,nonatomic) bool _canContributeToCloudSharedAlbum;                 //@synthesize _canContributeToCloudSharedAlbum=__canContributeToCloudSharedAlbum - In the implementation block
@property (setter=_setSwitcherSegmentedControl:,nonatomic,retain) UISegmentedControl * _switcherSegmentedControl;               //@synthesize _switcherSegmentedControl=__switcherSegmentedControl - In the implementation block
@property (setter=_setSwitcherBarButtonItem:,nonatomic,retain) UIBarButtonItem * _switcherBarButtonItem;                        //@synthesize _switcherBarButtonItem=__switcherBarButtonItem - In the implementation block
@property (assign,setter=_setSelectedItemIndex:,nonatomic) long long _selectedItemIndex;                                        //@synthesize _selectedItemIndex=__selectedItemIndex - In the implementation block
-(void)viewDidLayoutSubviews;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setAlbum:(NSObject*)arg1 ;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(bool)wantsGlobalFooter;
-(void)configureGlobalFooterView:(id)arg1 ;
-(bool)canDeleteContent;
-(bool)wantsAddContentInToolbar;
-(bool)canAddToOtherAlbumContent;
-(bool)wantsAddPlaceholderAtEndOfSection:(long long)arg1 ;
-(void)updatePeripheralInterfaceAnimated:(bool)arg1 ;
-(bool)shouldShowToolbar;
-(bool)shouldShowTabBar;
-(bool)prepareForDismissingForced:(bool)arg1 ;
-(id)newToolbarItems;
-(void)didSelectAddPlaceholderInSection:(long long)arg1 ;
-(void)controller:(id)arg1 didFinishTrimmingAssets:(id)arg2 ;
-(void)controller:(id)arg1 didCancelTrimmingAssets:(id)arg2 ;
-(void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg1 ;
-(void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2 ;
-(void)_setCanContributeToCloudSharedAlbum:(bool)arg1 ;
-(bool)_shouldShowOptionsSwitcherInToolbar;
-(void)_handleSwitcherSegmentedControl:(id)arg1 ;
-(void)_setSwitcherSegmentedControl:(id)arg1 ;
-(void)_setSwitcherBarButtonItem:(id)arg1 ;
-(bool)_appAllowsSupressionOfAlerts;
-(id)_suppressionContexts;
-(void)_dismissOptionsPopoverAnimated:(bool)arg1 ;
-(void)_updateOptionsViewInsets;
-(bool)_canContributeToCloudSharedAlbum;
-(id)_switcherBarButtonItem;
-(bool)_canDisplayOptions;
-(void)_updateOptionsView;
-(bool)isDisplayingOptions;
-(id)_optionsViewController;
-(id)_newOptionsViewController;
-(void)_setOptionsViewController:(id)arg1 ;
-(id)_optionsBarButtonItem;
-(void)_optionsBarButtonItemPressed:(id)arg1 ;
-(void)_setOptionsBarButtonItem:(id)arg1 ;
-(id)_optionsBarButtonSpacerItem;
-(void)_setOptionsBarButtonSpacerItem:(id)arg1 ;
-(id)_optionsPopoverController;
-(void)_setOptionsPopoverController:(id)arg1 ;
-(void)setDisplayingOptions:(bool)arg1 ;
-(void)_setSelectedItemIndex:(long long)arg1 ;
-(void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2 ;
-(id)_switcherSegmentedControl;
-(long long)_selectedItemIndex;
@end
