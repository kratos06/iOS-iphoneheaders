/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/__SBIconControllerAccessibility_super.h>

@interface SBIconControllerAccessibility : __SBIconControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)setIsEditing:(char)arg1 ;
-(void)_accessibilityIconMovedToPosition;
-(void)setGrabbedIcon:(id)arg1 ;
-(void)scrollToIconListAtIndex:(int)arg1 animate:(char)arg2 ;
-(void)_accessibilityCancelSBAXIconMoveSpeakTimer;
-(void)_resetFolderSpringloadTimer;
-(void)_accessibilitySBAXIconFolderOpeningTimerFired;
-(void)setRecipientIcon:(id)arg1 duration:(double)arg2 ;
-(void)noteGrabbedIconLocationChangedWithTouch:(id)arg1 ;
-(int)_accessibilityIconListIndex;
-(int)_accessibilityIconListCount;
-(void)_cancelFolderSpringloadTimer;
-(void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
-(void)_animateFolder:(id)arg1 open:(char)arg2 animated:(char)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2 ;
-(void)_closeFolderController:(id)arg1 animated:(char)arg2 withCompletion:(id)arg3 ;
@end

