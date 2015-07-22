/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:53:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface HMUIndent : NSObject {

	NSString* _level;
	NSString* _step;
	unsigned _factor;

}

@property (nonatomic,readonly) NSString * level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) NSString * step;               //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) unsigned factor;               //@synthesize factor=_factor - In the implementation block
+(id)indentWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned)arg3 ;
+(id)indentWithLevel:(id)arg1 ;
-(unsigned)factor;
-(id)description;
-(NSString *)level;
-(id)initWithLevel:(id)arg1 step:(id)arg2 factor:(unsigned)arg3 ;
-(id)indentByFactor:(unsigned)arg1 ;
-(NSString *)step;
@end
