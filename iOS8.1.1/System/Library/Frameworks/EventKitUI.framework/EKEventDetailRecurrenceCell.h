/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {

	UILabel* _recurrenceLabel;
	double _lastLayoutWidth;

}
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(void)setRecurrenceString:(id)arg1 ;
-(id)_recurrenceLabel;
-(id)_myTableView;
-(void)layoutSubviews;
-(double)height;
@end
