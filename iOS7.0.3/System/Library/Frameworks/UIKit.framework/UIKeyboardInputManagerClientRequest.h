/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject {

	NSInvocation* _invocation;
	unsigned _errorCount;

}

@property (nonatomic,readonly) NSInvocation * invocation; 
@property (assign,nonatomic) unsigned errorCount;                      //@synthesize errorCount=_errorCount - In the implementation block
-(void)dealloc;
-(id)invocation;
-(id)initWithInvocation:(id)arg1 ;
-(id)untargetedInvocationWithInvocation:(id)arg1 ;
-(unsigned)errorCount;
-(void)setErrorCount:(unsigned)arg1 ;
@end
