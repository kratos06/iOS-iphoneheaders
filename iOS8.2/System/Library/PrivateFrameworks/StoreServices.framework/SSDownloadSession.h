/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, SSDownload, SSDownloadAsset;

@interface SSDownloadSession : NSObject {

	SSXPCConnection* _controlConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _sessionID;
	long long _assetID;
	long long _downloadID;

}

@property (readonly) SSDownload * download; 
@property (readonly) SSDownloadAsset * downloadAsset; 
-(SSDownload *)download;
-(SSDownloadAsset *)downloadAsset;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)_initWithMessage:(id)arg1 controlConnection:(id)arg2 ;
-(id)_initSSDownloadSession;
-(id)_copySessionPropertyWithKey:(const char*)arg1 ;
@end

