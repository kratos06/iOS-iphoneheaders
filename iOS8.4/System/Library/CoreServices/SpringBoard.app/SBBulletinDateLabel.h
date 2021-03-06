/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBBulletinDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate; 
@property (assign,nonatomic) int labelType; 
@property (assign,nonatomic) BOOL isTimestamp; 
@required
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(int)labelType;
-(void)setLabelType:(int)arg1;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1;
-(BOOL)isAllDay;
-(void)setDelegate:(id)arg1;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)setAllDay:(BOOL)arg1;

@end

