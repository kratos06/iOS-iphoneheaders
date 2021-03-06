/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegate <NSObject>
@optional
-(void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(bool)arg2;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(bool)arg2;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(bool)arg2 withAnimation:(long long)arg3;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(bool)arg3;
-(void)returnToLibraryForClientInterface:(id)arg1;
-(id)previewOverlayForClientInterface:(id)arg1;
-(id)scriptInterfaceForClientInterface:(id)arg1;
-(id)tabBarControllerForClientInterface:(id)arg1;
@end

