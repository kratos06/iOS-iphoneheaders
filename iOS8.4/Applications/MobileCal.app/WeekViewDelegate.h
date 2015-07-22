/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WeekViewDelegate <NSObject>
@optional
-(void)weekViewDidLayout:(id)arg1;
-(void)weekViewDidBeginDragging:(id)arg1;
-(void)weekViewDidScroll:(id)arg1;
-(void)weekViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2;
-(void)weekViewDidEndDecelerating:(id)arg1;
-(void)weekView:(id)arg1 didSelectEvent:(id)arg2;
-(void)weekView:(id)arg1 receivedTapInAllDayAreaOnDate:(id)arg2;
-(void)weekViewAllDaySectionDidScroll:(id)arg1;
-(id)weekViewForWeekBefore:(id)arg1;
-(id)weekViewForWeekAfter:(id)arg1;
-(void)emptySpaceClickedOnDate:(id)arg1;
-(void)emptySpaceClick;

@end
