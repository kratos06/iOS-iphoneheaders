/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSMutableString, NSMutableRLEArray;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString {

	NSMutableString* mutableString;
	NSMutableRLEArray* mutableAttributes;
	SCD_Struct_NS80 fields;

}
+(Class)_mutableStringClass;
-(id)_runArrayHoldingAttributes;
-(void)edited:(unsigned)arg1 range:(NSRange)arg2 changeInLength:(int)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)length;
-(id)string;
-(Class)classForCoder;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(id)initWithString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)finalize;
@end

