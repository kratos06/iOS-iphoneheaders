/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PadMonthWeekViewDelegate <NSObject>
@optional
-(void)padMonthWeekView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
-(void)padMonthWeekView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
-(void)padMonthWeekView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
-(void)padMonthWeekView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
-(void)didCompleteBackgroundOccurrenceRenderingForPadMonthWeekView:(id)arg1;

@required
-(void)padMonthWeekView:(id)arg1 didTapOccurrence:(id)arg2 onDay:(id)arg3;
@end
