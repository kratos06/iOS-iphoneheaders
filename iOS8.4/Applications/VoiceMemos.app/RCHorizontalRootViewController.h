/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCRootViewController.h>
#import <VoiceMemos/RCRecordingsTableViewDelegate.h>
#import <VoiceMemos/RCRootViewControllerDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class RCSplitViewController, RCMasterNavigationController, RCDetailNavigationController, RCRecordingsTableViewController, RCVerticalRootViewController, NSString;

@interface RCHorizontalRootViewController : RCRootViewController <RCRecordingsTableViewDelegate, RCRootViewControllerDelegate, UISplitViewControllerDelegate> {

	char _masterTableViewControllerVisible;
	char _shouldHideStatusBar;
	char _needsInitialPrimaryLayoutAxisSetup;
	RCSplitViewController* _splitViewController;
	RCMasterNavigationController* _masterNavigationController;
	RCDetailNavigationController* _detailNavigationController;
	RCRecordingsTableViewController* _recordingsTableViewController;
	RCVerticalRootViewController* _verticalRootViewController;

}

@property (nonatomic,readonly) RCSplitViewController * splitViewController;                                                //@synthesize splitViewController=_splitViewController - In the implementation block
@property (nonatomic,readonly) RCMasterNavigationController * masterNavigationController;                                  //@synthesize masterNavigationController=_masterNavigationController - In the implementation block
@property (nonatomic,readonly) RCDetailNavigationController * detailNavigationController;                                  //@synthesize detailNavigationController=_detailNavigationController - In the implementation block
@property (nonatomic,readonly) RCRecordingsTableViewController * recordingsTableViewController;                            //@synthesize recordingsTableViewController=_recordingsTableViewController - In the implementation block
@property (nonatomic,readonly) RCVerticalRootViewController * verticalRootViewController;                                  //@synthesize verticalRootViewController=_verticalRootViewController - In the implementation block
@property (assign,getter=isMasterTableViewControllerVisible,nonatomic) char masterTableViewControllerVisible;              //@synthesize masterTableViewControllerVisible=_masterTableViewControllerVisible - In the implementation block
@property (assign,nonatomic) char shouldHideStatusBar;                                                                     //@synthesize shouldHideStatusBar=_shouldHideStatusBar - In the implementation block
@property (assign,nonatomic) char needsInitialPrimaryLayoutAxisSetup;                                                      //@synthesize needsInitialPrimaryLayoutAxisSetup=_needsInitialPrimaryLayoutAxisSetup - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)playSelectedRecording;
-(void)selectRecordingWithCompositionController:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)canDismissForIdleEvent;
-(id)presentedWaveformDataSource;
-(void)savedRecordingsModelDidChangeNotification:(id)arg1 ;
-(void)setShouldHideStatusBar:(char)arg1 ;
-(void)_updateSelectionToMatchVerticalViewController;
-(void)_updateNavigationBarsAnimated:(char)arg1 ;
-(void)_updateSettingsForVerticalRootViewController:(id)arg1 ;
-(char)_canPresentSideBySideUserInterfaceInLandscapeOrientation;
-(void)_createNewVerticalRootViewControllerAnimated:(char)arg1 presentedCompositionController:(id)arg2 ;
-(void)setMasterTableViewControllerVisible:(char)arg1 ;
-(void)_setupInitialPrimaryLayoutAxis;
-(char)shouldHideStatusBar;
-(char)isMasterTableViewControllerVisible;
-(id)_detailNavigationItem;
-(void)_presentEditedRecordingWithCompositionController:(id)arg1 forceUpdatePresentation:(char)arg2 animated:(char)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)pauseSelectedRecording;
-(char)isTableViewControllerVisible;
-(id)_masterNavigationItem;
-(void)shareSelectedRecordingAction:(id)arg1 ;
-(void)deleteSelectedRecordingAction:(id)arg1 ;
-(void)recordingsTableViewController:(id)arg1 didSelectRecording:(id)arg2 compositionController:(id)arg3 ;
-(void)recordingsTableViewController:(id)arg1 willDeleteRecording:(id)arg2 compositionController:(id)arg3 ;
-(void)recordingsTableViewController:(id)arg1 wantsToEditRecording:(id)arg2 compositionController:(id)arg3 ;
-(char)rootViewControllerCanShowRecordingsTable:(id)arg1 ;
-(RCDetailNavigationController *)detailNavigationController;
-(RCRecordingsTableViewController *)recordingsTableViewController;
-(RCVerticalRootViewController *)verticalRootViewController;
-(char)needsInitialPrimaryLayoutAxisSetup;
-(void)setNeedsInitialPrimaryLayoutAxisSetup:(char)arg1 ;
-(id)navigationItem;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(RCSplitViewController *)splitViewController;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1 ;
-(id)primaryViewControllerForExpandingSplitViewController:(id)arg1 ;
-(unsigned)splitViewControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(int)arg2 ;
-(RCMasterNavigationController *)masterNavigationController;
-(id)rc_navigationItemForPresentingNavigationItem:(id)arg1 forViewController:(id)arg2 ;
@end

