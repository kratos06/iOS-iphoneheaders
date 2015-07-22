/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ZWMenuViewControllerDelegate <NSObject>
@required
-(void)menuDidAppear:(id)arg1;
-(void)menuDidDisappear:(id)arg1;
-(char)inFullscreenModeForMenuViewController:(id)arg1;
-(float)zoomFactorForMenuViewController:(id)arg1;
-(void)toggleLensVisibilityWithMenuViewController:(id)arg1;
-(void)menuViewController:(id)arg1 applyNextLensModeWithCompletion:(/*^block*/id)arg2;
-(void)toggleLensResizeModeWithMenuViewController:(id)arg1;
-(char)toggleSlugVisibilityWithMenuViewController:(id)arg1;
-(char)inStandByForMenuViewController:(id)arg1;
-(void)menuViewController:(id)arg1 adjustZoomFactor:(float)arg2;
-(void)menuViewController:(id)arg1 finishedAdjustingZoomFactor:(float)arg2;
-(void)menuViewController:(id)arg1 didChooseLensEffect:(id)arg2;
-(void)dismissMenuWithMenuViewController:(id)arg1;

@end
