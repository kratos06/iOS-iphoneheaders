/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:41 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SiriUIObjectPickerViewControllerDelegate <NSObject>
@optional
-(void)pickerViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didDismissPicker:(id)arg2;
-(void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;

@required
-(id)viewControllerForPickerPresentation:(id)arg1;

@end
