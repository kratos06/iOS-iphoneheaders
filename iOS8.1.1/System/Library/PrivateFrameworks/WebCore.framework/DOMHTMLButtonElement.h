/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLButtonElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * name; 
@property (copy) NSString * type; 
@property (copy) NSString * value; 
@property (readonly) BOOL willValidate; 
@property (copy) NSString * accessKey; 
-(int)structuralComplexityContribution;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setValue:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(DOMHTMLFormElement *)form;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(id)formAction;
-(void)setFormAction:(id)arg1 ;
-(id)formEnctype;
-(void)setFormEnctype:(id)arg1 ;
-(id)formMethod;
-(void)setFormMethod:(id)arg1 ;
-(BOOL)formNoValidate;
-(void)setFormNoValidate:(BOOL)arg1 ;
-(id)formTarget;
-(void)setFormTarget:(id)arg1 ;
-(BOOL)willValidate;
-(id)validity;
-(id)validationMessage;
-(id)labels;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(void)click;
@end

