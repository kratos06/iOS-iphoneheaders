/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parser;
+(id)parseContentsOfURL:(id)arg1 ;
-(void)setElementValue:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(char)arg2 ;
-(void)parserError:(id)arg1 ;
-(id)elementValue;
-(void)parserWarning:(id)arg1 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long)arg2 ;
-(BOOL)parseString:(id)arg1 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(NSURL *)baseURL;
-(id)result;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSError *)error;
-(BOOL)parseData:(id)arg1 ;
@end
