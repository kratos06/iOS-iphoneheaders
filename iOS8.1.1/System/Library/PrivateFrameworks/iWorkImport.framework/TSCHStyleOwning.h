/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCHStyleOwning <NSObject,TSCHStyleVending>
@optional
-(void)propertiesWereMutated:(id)arg1;

@required
-(id)chartInfo;
-(int)specificPropertyForGeneric:(int)arg1;
-(int)defaultPropertyForGeneric:(int)arg1;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1;
-(id)swapTuplesForMutationsForImport:(id)arg1;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
-(id)style;
-(id)context;
-(id)model;
-(id)valueForProperty:(int)arg1;
-(id)defaultProperties;

@end
