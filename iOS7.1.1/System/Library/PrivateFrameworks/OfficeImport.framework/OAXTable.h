/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTable : NSObject
+(id)readThemableFillFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readThemableEffectsFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readPartStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readPropertiesFromXmlNode:(xmlNode*)arg1 toProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readGridFromXmlNode:(xmlNode*)arg1 toGrid:(id)arg2 ;
+(void)readRowsFromTableXmlNode:(xmlNode*)arg1 toTable:(id)arg2 drawingState:(id)arg3 ;
+(id)readThemableStrokeFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readCellBorderStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(int)readOnOffFlag:(id)arg1 ;
+(id)readCellStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readTextStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readCellPropertiesFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readCellFromXmlNode:(xmlNode*)arg1 toCell:(id)arg2 drawingState:(id)arg3 ;
+(void)readRowFromXmlNode:(xmlNode*)arg1 toRow:(id)arg2 drawingState:(id)arg3 ;
+(id)readFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readTableStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)cacheTableStylesInPart:(id)arg1 cache:(id)arg2 ;
+(id)readDefaultTableStyleWithDrawingState:(id)arg1 ;
@end

