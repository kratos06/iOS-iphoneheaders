/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:21:45 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSAutomaticReadingListRecordRange, NSArray;

@interface WBSAutomaticReadingListTrackedRecordsInfo : NSObject {

	WBSAutomaticReadingListRecordRange* _rangeOfTrackedRecords;
	NSArray* _items;

}

@property (nonatomic,copy) WBSAutomaticReadingListRecordRange * rangeOfTrackedRecords;              //@synthesize rangeOfTrackedRecords=_rangeOfTrackedRecords - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                         //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(WBSAutomaticReadingListRecordRange *)rangeOfTrackedRecords;
-(void)setRangeOfTrackedRecords:(WBSAutomaticReadingListRecordRange *)arg1 ;
@end

