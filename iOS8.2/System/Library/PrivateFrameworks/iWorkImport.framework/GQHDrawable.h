/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/GQDrawablesGenerator.h>

@class NSString;

@interface GQHDrawable : NSObject <GQDrawablesGenerator>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)beginDrawables:(id)arg1 ;
+(int)endDrawables:(id)arg1 ;
+(int)handleDrawable:(id)arg1 state:(id)arg2 ;
+(Class)beginTable:(id)arg1 ;
+(int)handleFloatingDrawable:(id)arg1 htmlState:(id)arg2 ;
+(void)aboutToGenerateDrawable:(id)arg1 htmlState:(id)arg2 ;
+(void)doneGeneratingDrawable:(id)arg1 htmlState:(id)arg2 ;
+(int)handleInlineDrawable:(id)arg1 htmlState:(id)arg2 ;
@end
