/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, CoreDAVErrorItem, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem {

	CoreDAVItemWithHrefChildItem* _recipientHREF;
	CoreDAVLeafItem* _requestStatus;
	ICSDocument* _calendarData;
	CoreDAVErrorItem* _topLevelErrorItem;
	NSString* _responseDescription;

}

@property (retain) CoreDAVItemWithHrefChildItem * recipientHREF;              //@synthesize recipientHREF=_recipientHREF - In the implementation block
@property (readonly) NSString * recipientString; 
@property (retain) CoreDAVLeafItem * requestStatus;                           //@synthesize requestStatus=_requestStatus - In the implementation block
@property (retain) ICSDocument * calendarData;                                //@synthesize calendarData=_calendarData - In the implementation block
@property (retain) CoreDAVErrorItem * topLevelErrorItem;                      //@synthesize topLevelErrorItem=_topLevelErrorItem - In the implementation block
@property (retain) NSString * responseDescription;                            //@synthesize responseDescription=_responseDescription - In the implementation block
-(void)dealloc;
-(id)description;
-(id)recipientHREF;
-(id)requestStatus;
-(id)calendarData;
-(void)setRecipientHREF:(id)arg1 ;
-(void)setRequestStatus:(id)arg1 ;
-(void)setCalendarData:(id)arg1 ;
-(void)setTopLevelErrorItem:(id)arg1 ;
-(void)_setCalendarDataWithLeafItem:(id)arg1 ;
-(id)recipientString;
-(id)topLevelErrorItem;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(id)responseDescription;
-(void)setResponseDescription:(id)arg1 ;
@end

