/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class AXRemoteHearingAidDevice, UILabel, UIImageView, UIActivityIndicatorView, NSNumberFormatter;

@interface AXHearingAidDetailCell : PSTableCell {

	AXRemoteHearingAidDevice* _device;
	UILabel* _leftLabel;
	UIImageView* _leftBattery;
	UILabel* _rightLabel;
	UIImageView* _rightBattery;
	UIActivityIndicatorView* _loadingIndicator;
	NSNumberFormatter* _numberFormatter;
	char _bluetoothAvailable;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 andDevice:(id)arg3 ;
-(void)bluetoothAvailabilityDidChange:(id)arg1 ;
-(id)imageForBatteryLevel:(float)arg1 ;
-(void)updateAvailability;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(AXRemoteHearingAidDevice *)device;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
@end

