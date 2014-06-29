/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKArchivedSelection.h>

@class TPCanvasSelection, TSKSelection;

@interface TPArchivedCanvasSelection : TSPObject <TSKArchivedSelection> {

	TPCanvasSelection* _selection;

}

@property (nonatomic,retain) TSKSelection * selection;              //@synthesize selection=_selection - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)dealloc;
-(id)selection;
-(void)setSelection:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
@end
