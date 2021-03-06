/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSCoding> {

	CALayer* _target;
	CAStateElement* _source;

}

@property (assign,nonatomic) CALayer * target;                     //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAStateElement * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * keyPath; 
+(void)CAMLParserStartElement:(id)arg1 ;
-(id)save;
-(bool)matches:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)apply:(id)arg1 ;
-(id)targetName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)keyPath;
-(id)target;
-(id)source;
-(void)setSource:(id)arg1 ;
-(void)foreachLayer:(/*^block*/ id)arg1 ;
@end

