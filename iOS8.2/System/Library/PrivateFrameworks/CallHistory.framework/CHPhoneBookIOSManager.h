/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>
#import <CallHistory/CHPhoneBookManagerProtocol.h>

@class NSString;

@interface CHPhoneBookIOSManager : CHLogger <CHPhoneBookManagerProtocol> {

	char _callerIdIsEmail;
	int _recordId;
	int _multiValueId;
	void* _record;
	unsigned _recordIsSuggested;

}

@property (assign) char callerIdIsEmail;                            //@synthesize callerIdIsEmail=_callerIdIsEmail - In the implementation block
@property (assign) int recordId;                                    //@synthesize recordId=_recordId - In the implementation block
@property (assign) int multiValueId;                                //@synthesize multiValueId=_multiValueId - In the implementation block
@property (assign,nonatomic) void* record;                          //@synthesize record=_record - In the implementation block
@property (assign) unsigned recordIsSuggested;                      //@synthesize recordIsSuggested=_recordIsSuggested - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)releaseCachedRecord;
-(id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(char)arg3 ;
-(id)getCallerIdPropertyMultiValueId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(char)arg3 ;
-(const void*)getABRecordRef;
-(void)setABRecordId:(id)arg1 ;
-(void)setABRecordRef:(const void*)arg1 ;
-(void)setABRecordMultiValueId:(id)arg1 ;
-(char)isABContactASuggestion;
-(id)getPersonsNameForRecordId:(id)arg1 ;
-(id)getLocalizedCallerIdLabelForRecordId:(id)arg1 ;
-(void)setMultiValueId:(int)arg1 ;
-(void)setCallerIdIsEmail:(char)arg1 ;
-(void)fetchABRecord:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(char)arg3 ;
-(int)multiValueId;
-(char)callerIdIsEmail;
-(unsigned)recordIsSuggested;
-(void)setRecordIsSuggested:(unsigned)arg1 ;
-(void*)record;
-(void)setRecord:(void*)arg1 ;
-(void)setRecordId:(int)arg1 ;
-(int)recordId;
@end

