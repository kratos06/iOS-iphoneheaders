/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {

	id source;
	id destination;
	NSString* label;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)connectForSimulator;
-(void)connect;
-(id)source;
-(void)setSource:(id)arg1 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
@end

