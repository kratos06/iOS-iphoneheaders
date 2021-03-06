/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object;
@class NSObject, NSXPCInterface, NSXPCConnection;

@interface NSXPCDecoder : NSXPCCoder {

	NSObject<OS_xpc_object>* _oolObjects;
	NSXPCInterface* _interface;
	SEL _replyToSelector;
	unsigned long long _genericIndex;
	void* _decoder;
	NSXPCConnection* _connection;
	/*function pointer*/ void** _collections[128];
	SCD_Struct_NS97 _rootObject;
	unsigned _collectionPointer;
	id _allowedClassesList[128];
	long long _allowedClassesIndex;

}

@property (retain) NSXPCInterface * interface;                 //@synthesize interface=_interface - In the implementation block
@property (assign) SEL replyToSelector;                        //@synthesize replyToSelector=_replyToSelector - In the implementation block
@property (assign) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)allowedClasses;
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(bool)arg3 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(id)_initWithRootXPCObject:(id)arg1 ;
-(void)setReplyToSelector:(SEL)arg1 ;
-(void)set_connection:(id)arg1 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(const char*)_decodeCStringForKey:(id)arg1 ;
-(id)decodeInvocation;
-(SEL)replyToSelector;
-(void)dealloc;
-(id)decodeObjectForKey:(id)arg1 ;
-(bool)decodeBoolForKey:(id)arg1 ;
-(bool)containsValueForKey:(id)arg1 ;
-(id)debugDescription;
-(int)decodeIntForKey:(id)arg1 ;
-(bool)allowsKeyedCoding;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)decodeObject;
-(id)_connection;
-(id)interface;
-(void)setInterface:(id)arg1 ;
-(void)finalize;
@end

