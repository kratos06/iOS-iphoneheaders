/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MBMMCSItemReaderInfo
@required
-(BOOL)statWithSize:(unsigned long long*)arg1 error:(id*)arg2;
-(BOOL)readWithOffset:(unsigned long long)arg1 buffer:(char*)arg2 bufferLength:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
-(BOOL)closeWithError:(id*)arg1;
-(BOOL)openWithError:(id*)arg1;

@end

