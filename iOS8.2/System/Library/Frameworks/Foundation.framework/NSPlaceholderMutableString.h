/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSPlaceholderMutableString : NSMutableString
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(void*)arg3 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 encoding:(unsigned)arg3 ;
-(unsigned)length;
-(id)initWithCapacity:(unsigned)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 encoding:(unsigned)arg3 freeWhenDone:(char)arg4 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
-(oneway void)release;
@end
