/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <CoreFoundation/NSCoding.h>

@class _UIDatePickerView, NSDate, UIColor, NSLocale, NSCalendar, NSTimeZone;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding> {

	_UIDatePickerView* _pickerView;
	bool _useCurrentDateDuringDecoding;

}

@property (assign,nonatomic,@dynamic) double timeInterval; 
@property (assign,setter=_setUsesBlackChrome:,getter=_usesBlackChrome,nonatomic,@dynamic) bool usesBlackChrome; 
@property (assign,setter=_setDrawsBackground:,getter=_drawsBackground,nonatomic,@dynamic) bool drawsBackground; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic,@dynamic) bool allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic,@dynamic) bool allowsZeroTimeInterval; 
@property (getter=_dateUnderSelectionBar,nonatomic,@dynamic,readonly) NSDate * dateUnderSelectionBar; 
@property (getter=_contentWidth,nonatomic,@dynamic,readonly) double contentWidth; 
@property (getter=_isTimeIntervalMode,nonatomic,@dynamic,readonly) bool isTimeIntervalMode; 
@property (assign,setter=_setUseCurrentDateDuringDecoding:,getter=_useCurrentDateDuringDecoding,nonatomic) bool useCurrentDateDuringDecoding; 
@property (assign,setter=_setUsesModernStyle:,getter=_usesModernStyle,nonatomic) bool _usesModernStyle; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (assign,nonatomic,@dynamic) long long datePickerMode; 
@property (nonatomic,@dynamic,retain) NSLocale * locale; 
@property (nonatomic,@dynamic,copy) NSCalendar * calendar; 
@property (nonatomic,@dynamic,retain) NSTimeZone * timeZone; 
@property (nonatomic,@dynamic,retain) NSDate * date; 
@property (nonatomic,@dynamic,retain) NSDate * minimumDate; 
@property (nonatomic,@dynamic,retain) NSDate * maximumDate; 
@property (assign,nonatomic,@dynamic) double countDownDuration; 
@property (assign,nonatomic,@dynamic) long long minuteInterval; 
+(Class)_pickerViewClass;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(id)_selectedTextForCalendarUnit:(unsigned long long)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned long long)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(bool)_drawsBackground;
-(bool)_usesModernStyle;
-(id)_textColor;
-(void)_setDrawsBackground:(bool)arg1 ;
-(void)_setUsesModernStyle:(bool)arg1 ;
-(id)_highlightColor;
-(void)_setHighlightColor:(id)arg1 ;
-(id)_textShadowColor;
-(void)_setTextShadowColor:(id)arg1 ;
-(double)_contentWidth;
-(bool)_isTimeIntervalMode;
-(void)_setUseCurrentDateDuringDecoding:(bool)arg1 ;
-(bool)_useCurrentDateDuringDecoding;
-(void)_setHidesLabels:(bool)arg1 ;
-(void)_setUsesBlackChrome:(bool)arg1 ;
-(bool)_usesBlackChrome;
-(bool)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(bool)arg1 ;
-(bool)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(bool)arg1 ;
-(void)_setHighlightsToday:(bool)arg1 ;
-(id)_dateUnderSelectionBar;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(int)hour;
-(id)dateComponents;
-(void)setDateComponents:(id)arg1 ;
-(void)setStaggerTimeIntervals:(bool)arg1 ;
-(void)setHighlightsToday:(bool)arg1 ;
-(int)minute;
-(int)second;
-(void)setDate:(id)arg1 animate:(bool)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4 ;
-(bool)_contentHuggingDefault_isUsuallyFixedHeight;
-(bool)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)date;
-(void)awakeFromNib;
-(void)invalidateIntrinsicContentSize;
-(void)setDate:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(void)_insertPickerView;
-(void)setDatePickerMode:(long long)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(void)setMinimumDate:(id)arg1 ;
-(void)setMaximumDate:(id)arg1 ;
-(long long)datePickerMode;
-(id)_locale;
-(id)timeZone;
-(id)calendar;
-(id)minimumDate;
-(id)maximumDate;
-(long long)minuteInterval;
-(void)setDate:(id)arg1 animated:(bool)arg2 ;
-(id)locale;
-(double)countDownDuration;
-(void)setCountDownDuration:(double)arg1 ;
@end

