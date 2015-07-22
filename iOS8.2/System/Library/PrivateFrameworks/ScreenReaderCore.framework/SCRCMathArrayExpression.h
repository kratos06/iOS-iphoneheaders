/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray, NSString;

@interface SCRCMathArrayExpression : SCRCMathExpression {

	NSArray* _children;

}

@property (nonatomic,readonly) NSString * mathMLTag; 
@property (nonatomic,readonly) NSArray * mathMLAttributes; 
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 ;
-(id)subExpressions;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 treePosition:(id)arg3 ;
-(char)hasSimpleArrayOfChildren;
-(id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned*)arg4 ;
-(NSString *)mathMLTag;
-(id)prefixForChildAtIndex:(unsigned)arg1 ;
-(id)suffixForChildAtIndex:(unsigned)arg1 ;
-(NSArray *)mathMLAttributes;
-(id)localizablePrefixForChildAtIndex:(unsigned)arg1 ;
-(id)localizableSuffixForChildAtIndex:(unsigned)arg1 ;
-(id)mathMLString;
-(id)children;
@end
