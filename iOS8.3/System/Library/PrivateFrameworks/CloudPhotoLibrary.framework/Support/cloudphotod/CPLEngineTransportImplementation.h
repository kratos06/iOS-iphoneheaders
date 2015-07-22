/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineTransportImplementation <CPLPlatformImplementation,CPLEngineComponent>
@optional
-(id)getAssetCountsTaskWithCompletionHandler:(/*^block*/id)arg1;
-(char)supportsDelayedUploads;
-(id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(id)bestErrorForUnderlyingError:(id)arg1;
-(id)simpleDataForSyncAnchor:(id)arg1;

@required
-(id)setupTaskCreateLibraryIfNecessary:(char)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(id)uploadBatchTaskForBatch:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)downloadBatchTaskForSyncAnchor:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(char)canBatchResourceDownloadTasks:(id)arg1 :(id)arg2;
-(void)runResourceDownloadTasks:(id)arg1;
-(id)resourcePublishTaskForResource:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)removeLibraryTaskWithCompletionHandler:(/*^block*/id)arg1;

@end
