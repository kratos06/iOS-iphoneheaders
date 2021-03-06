/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportResourceDownloadTask.h>

@class CPLResource, NSString;

@interface CPLCloudKitResourceDownloadTask : CPLCloudKitTransportTask <CPLEngineTransportResourceDownloadTask> {

	BOOL highPriority;
	CPLResource* _resource;
	NSString* _clientBundleID;
	unsigned long long _retryCount;
	/*^block*/id _didStartHandler;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CPLResource * resource;                               //@synthesize resource=_resource - In the implementation block
@property (nonatomic,retain) NSString * clientBundleID;                            //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                        //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,copy) id didStartHandler;                                     //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,copy) id progressHandler;                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriority,nonatomic) BOOL highPriority; 
-(id)initWithResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setDidStartHandler:(id)arg1 ;
-(id)progressHandler;
-(id)completionHandler;
-(void)run;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(unsigned long long)retryCount;
-(id)didStartHandler;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSString *)clientBundleID;
-(CPLResource *)resource;
-(BOOL)isHighPriority;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)setResource:(CPLResource *)arg1 ;
@end

