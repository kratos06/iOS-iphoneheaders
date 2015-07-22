/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class ABPeoplePickerNavigationController, NSMutableArray;

@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject {

	ABPeoplePickerNavigationController* _ppnc;
	NSMutableArray* _prompts;

}
-(id)promptForViewControllerType:(int)arg1 orientation:(long long)arg2 ;
-(void)setPrompt:(id)arg1 forViewControllerType:(int)arg2 ;
-(BOOL)_shouldShowPromptForOrientation:(long long)arg1 ;
-(unsigned long long)indexForViewControllerType:(int)arg1 ;
-(void)dealloc;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNavigationController:(id)arg1 ;
@end
