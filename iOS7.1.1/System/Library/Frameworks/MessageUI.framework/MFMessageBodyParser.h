/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMessageBodyParserObject.h>

@class NSMutableArray, NSError;

@interface MFMessageBodyParser : MFMessageBodyParserObject {

	NSMutableArray* _subparsers;
	NSMutableArray* _elementPool;
	NSMutableArray* _paragraphNodes;
	/*^block*/ id _foundMessageBodyElementBlock;
	NSError* _parserError;
	CFArrayRef _nodesStackCache;
	CFDictionaryRef _nodesLevelCache;
	CFDictionaryRef _nodesQuoteLevelCache;
	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(bool)isLinebreakImpliedBeforeTagName:(id)arg1 ;
+(bool)isLinebreakImpliedAfterTagName:(id)arg1 ;
-(bool)parse;
-(id)parserError;
-(void)addSubparser:(id)arg1 ;
-(void)copyBlocks;
-(bool)shouldProceedParsing;
-(Class)messageBodyStringAccumulatorClass;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
-(void)flushParagraphNodes;
-(id)getAvailableMessageBodyElement;
-(void)didFindBodyElement:(id)arg1 ;
-(void)getLevel:(long long*)arg1 quoteLevel:(long long*)arg2 forBodyNode:(id)arg3 ;
-(id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2 ;
-(void)setFoundMessageBodyElementBlock:(/*^block*/ id)arg1 ;
-(void)removeSubparser:(id)arg1 ;
-(bool)isLandmarkTagName:(id)arg1 ;
-(bool)shouldIgnoreTagWithTagName:(id)arg1 ;
-(void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2 ;
-(void)willBeginParsing;
-(void)didFinishParsing;
-(void)didFindError:(id)arg1 ;
-(unsigned long long)quoteLevelForBodyNode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
@end

