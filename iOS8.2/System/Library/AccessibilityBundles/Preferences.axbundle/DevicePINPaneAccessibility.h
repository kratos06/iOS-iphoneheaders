/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/Preferences.axbundle/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/__DevicePINPaneAccessibility_super.h>

@interface DevicePINPaneAccessibility : __DevicePINPaneAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)setPINPolicyString:(id)arg1 visible:(char)arg2 ;
-(void)slideToNewPasscodeField:(char)arg1 withKeyboard:(char)arg2 ;
-(void)_accessibilityInsertText:(id)arg1 atPosition:(int)arg2 ;
-(char)_accessibilityHandwritingAttributeShouldEchoCharacter;
-(char)_accessibilitySupportsHandwriting;
-(int)_accessibilityHandwritingAttributePreferredCharacterSet;
-(char)_accessibilityHandwritingAttributeCanDeleteCharacter;
-(char)_accessibilityHandwritingAttributeAcceptsRawInput;
-(int)_accessibilityHandwritingAttributeAllowedCharacterSets;
-(void)_accessibilityReplaceCharactersAtCursor:(unsigned)arg1 withString:(id)arg2 ;
@end
