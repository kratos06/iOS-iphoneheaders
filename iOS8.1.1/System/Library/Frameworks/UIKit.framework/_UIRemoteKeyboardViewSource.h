/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView, UIInputViewSet;


@protocol _UIRemoteKeyboardViewSource <NSObject>
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate; 
@property (nonatomic,readonly) UIView * hostView; 
@property (nonatomic,readonly) UIInputViewSet * inputViewSet; 
@required
-(UIView *)hostView;
-(UIInputViewSet *)inputViewSet;
-(void)checkPlaceholdersForRemoteKeyboards;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id)arg1;

@end

