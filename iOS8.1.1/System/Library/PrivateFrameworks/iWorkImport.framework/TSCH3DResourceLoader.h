/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSCH3DResourceLoader : NSObject
+(id)loader;
-(void)postbindHandle:(id)arg1 config:(void*)arg2 ;
-(BOOL)shouldReuploadHandle:(id)arg1 config:(void*)arg2 ;
-(unsigned long long)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(void)destroyHandle:(id)arg1 insideContext:(id)arg2 ;
-(int)virtualScreenForContext:(id)arg1 ;
@end

