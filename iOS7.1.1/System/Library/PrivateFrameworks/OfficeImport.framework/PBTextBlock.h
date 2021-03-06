/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBTextBlock : NSObject
+(void)applyTextRuler:(PptTextRulerAtom*)arg1 toTextBlock:(id)arg2 ;
+(void)readFromTextBlock:(id)arg1 toStyledText:(CFAttributedStringRef)arg2 ;
+(void)readFromStyledText:(CFAttributedStringRef)arg1 toStyledPargraphs:(CFArrayRef)arg2 ;
+(void)readParagraph:(id)arg1 paragraph:(CFAttributedStringRef)arg2 textType:(int)arg3 state:(id)arg4 ;
+(void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3 ;
+(void)writeHyperlink:(id)arg1 textBoxParentHolder:(id)arg2 insertIndexInParent:(unsigned long long)arg3 counter:(unsigned long long*)arg4 charRange:(NSRange)arg5 instance:(int)arg6 state:(id)arg7 ;
+(void)writeTextBody:(id)arg1 textBoxParentHolder:(id)arg2 startIndexInParent:(unsigned long long)arg3 bulletStyleAtom:(PptTextBlockStyling9Atom*)arg4 textRulerAtom:(PptTextRulerAtom*)arg5 masterTextStyleAtom:(PptTextMasterStyleAtom*)arg6 masterBulletStyleAtom:(PptTextMasterStyle9Atom*)arg7 state:(id)arg8 ;
@end

