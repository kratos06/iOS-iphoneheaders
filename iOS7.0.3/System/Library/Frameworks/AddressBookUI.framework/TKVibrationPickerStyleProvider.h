/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TKVibrationPickerStyleProvider <NSObject>
@property (nonatomic,readonly) BOOL vibrationPickerUsesOpaqueBackground; 
@property (nonatomic,readonly) int vibrationPickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * vibrationPickerCellTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomVibrationPickerHeaderView; 
@property (nonatomic,readonly) UIFont * vibrationPickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset vibrationPickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets; 
@required
-(BOOL)vibrationPickerUsesOpaqueBackground;
-(int)vibrationPickerTableViewSeparatorStyle;
-(id)vibrationPickerCellTextFont;
-(id)vibrationPickerCellTextColor;
-(id)vibrationPickerCellHighlightedTextColor;
-(id)vibrationPickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(BOOL)wantsCustomVibrationPickerHeaderView;
-(id)vibrationPickerHeaderTextFont;
-(id)vibrationPickerHeaderTextColor;
-(id)vibrationPickerHeaderTextShadowColor;
-(UIOffset*)vibrationPickerHeaderTextShadowOffset;
-(UIEdgeInsets*)vibrationPickerHeaderTextPaddingInsets;
@end

