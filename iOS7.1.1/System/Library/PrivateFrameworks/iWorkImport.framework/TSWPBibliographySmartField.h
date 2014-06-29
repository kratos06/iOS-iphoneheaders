/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSWPSmartField.h>

@class NSArray;

@interface TSWPBibliographySmartField : TSWPSmartField {

	bool _isLocalizable;
	NSArray* _citationRecords;

}

@property (nonatomic,copy) NSArray * citationRecords;              //@synthesize citationRecords=_citationRecords - In the implementation block
@property (assign,nonatomic) bool isLocalizable;                   //@synthesize isLocalizable=_isLocalizable - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(bool)allowsPasteAsSmartField;
-(bool)isLocalizable;
-(void)setIsLocalizable:(bool)arg1 ;
-(void)setCitationRecords:(id)arg1 ;
-(id)citationRecords;
-(id)citationSmartFields;
-(void)dealloc;
-(int)elementKind;
@end
