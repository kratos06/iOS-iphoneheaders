/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSData;

@interface OISFUDataRepresentation : NSObject {

	BOOL mHasHash;
	unsigned mHash;
	BOOL mHasSha1Hash;
	NSData* mSha1Hash;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(id)inputStream;
-(xmlTextReaderRef)xmlReaderWithReadCallback:(/*function pointer*/void*)arg1 ;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(long long)encodedLength;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(CGDataProviderRef)cgDataProvider;
-(id)sha1Hash;
-(id)bufferedInputStream;
-(BOOL)isReadable;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(unsigned long long)readIntoData:(id)arg1 ;
-(BOOL)isEncrypted;
-(long long)dataLength;
@end

