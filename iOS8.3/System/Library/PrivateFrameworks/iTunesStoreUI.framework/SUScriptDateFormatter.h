/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:40:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject {

	NSDateFormatter* _dateFormatter;

}

@property (copy) NSString * dateFormat; 
@property (assign) unsigned dateStyle; 
@property (copy) NSString * localeIdentifier; 
@property (assign) unsigned timeStyle; 
@property (readonly) unsigned dateFormatterFullStyle; 
@property (readonly) unsigned dateFormatterLongStyle; 
@property (readonly) unsigned dateFormatterMediumStyle; 
@property (readonly) unsigned dateFormatterNoStyle; 
@property (readonly) unsigned dateFormatterShortStyle; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(unsigned)dateStyle;
-(unsigned)timeStyle;
-(void)dealloc;
-(id)init;
-(void)setDateFormat:(NSString *)arg1 ;
-(id)stringFromDate:(id)arg1 ;
-(NSString *)localeIdentifier;
-(void)setDateStyle:(unsigned)arg1 ;
-(void)setTimeStyle:(unsigned)arg1 ;
-(double)dateFromString:(id)arg1 ;
-(NSString *)dateFormat;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(unsigned)dateFormatterFullStyle;
-(unsigned)dateFormatterLongStyle;
-(unsigned)dateFormatterMediumStyle;
-(unsigned)dateFormatterNoStyle;
-(unsigned)dateFormatterShortStyle;
@end
