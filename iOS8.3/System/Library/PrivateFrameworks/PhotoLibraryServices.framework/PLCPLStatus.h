/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/CPLStatusDelegate.h>

@protocol PLCPLStatusDelegate;
@class NSProgress, CPLStatus, NSDate, NSString;

@interface PLCPLStatus : NSObject <CPLStatusDelegate> {

	id _progressSubscriber;
	NSProgress* _progress;
	CPLStatus* _cplStatus;
	char _isCPLDataClassEnabled;
	char _isCPLDataClassEnabledValid;
	unsigned _syncProgressState;
	id<PLCPLStatusDelegate> _delegate;
	unsigned _numberOfImagesToUpload;
	unsigned _numberOfVideosToUpload;
	unsigned _numberOfImagesToDownload;
	unsigned _numberOfVideosToDownload;
	unsigned _numberOfPushedAsset;
	unsigned _numberOfPulledAssets;
	unsigned _totalAssetsOnServer;
	double _syncProgress;

}

@property (nonatomic,readonly) char isEnabled; 
@property (nonatomic,readonly) char isExceedingQuota; 
@property (nonatomic,readonly) char isSyncing; 
@property (nonatomic,readonly) char isConnecting; 
@property (nonatomic,readonly) char isPreparing; 
@property (nonatomic,readonly) char hasExitedCPL; 
@property (nonatomic,readonly) double syncProgress;                                   //@synthesize syncProgress=_syncProgress - In the implementation block
@property (nonatomic,retain,readonly) NSDate * lastSuccessfulSyncDate; 
@property (nonatomic,retain,readonly) NSDate * exitDeleteTime; 
@property (assign,nonatomic) id<PLCPLStatusDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned numberOfImagesToUpload;                       //@synthesize numberOfImagesToUpload=_numberOfImagesToUpload - In the implementation block
@property (nonatomic,readonly) unsigned numberOfVideosToUpload;                       //@synthesize numberOfVideosToUpload=_numberOfVideosToUpload - In the implementation block
@property (nonatomic,readonly) unsigned numberOfImagesToDownload;                     //@synthesize numberOfImagesToDownload=_numberOfImagesToDownload - In the implementation block
@property (nonatomic,readonly) unsigned numberOfVideosToDownload;                     //@synthesize numberOfVideosToDownload=_numberOfVideosToDownload - In the implementation block
@property (nonatomic,readonly) unsigned numberOfPushedAsset;                          //@synthesize numberOfPushedAsset=_numberOfPushedAsset - In the implementation block
@property (nonatomic,readonly) unsigned numberOfPulledAssets;                         //@synthesize numberOfPulledAssets=_numberOfPulledAssets - In the implementation block
@property (nonatomic,readonly) unsigned totalAssetsOnServer;                          //@synthesize totalAssetsOnServer=_totalAssetsOnServer - In the implementation block
@property (nonatomic,readonly) char diskIsLowOnSpace; 
@property (setter=_setProgress:,nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUploadCountsForImages:(unsigned)arg1 videos:(unsigned)arg2 ;
+(void)setDownloadCountsForImages:(unsigned)arg1 videos:(unsigned)arg2 ;
+(void)setPushedAssetCount:(unsigned)arg1 ;
+(void)_prepareQueue;
+(id)readPListWithFilename:(id)arg1 ;
+(void)writeDict:(id)arg1 withFilename:(id)arg2 ;
+(void)_setPulledItemsCount:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PLCPLStatusDelegate>)arg1 ;
-(id)init;
-(id<PLCPLStatusDelegate>)delegate;
-(char)isEnabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setProgress:(id)arg1 ;
-(NSProgress *)progress;
-(void)_setup;
-(unsigned)diskSpaceLevel;
-(unsigned)numberOfImagesToUpload;
-(unsigned)numberOfVideosToUpload;
-(unsigned)numberOfVideosToDownload;
-(NSDate *)lastSuccessfulSyncDate;
-(char)isExceedingQuota;
-(char)_loadUploadCounts;
-(char)_loadDownloadCounts;
-(void)_subscribeToProgress;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)_calculateTotalAssetsOnServer;
-(void)_calculateNumberOfPulledAssets;
-(void)_loadPulledItemsCount;
-(NSDate *)exitDeleteTime;
-(void)_teardown;
-(void)_updateSyncProgress;
-(void)_setSyncProgress:(double)arg1 ;
-(void)_unsubscribeFromProgress;
-(void)statusDidChange:(id)arg1 ;
-(char)diskIsLowOnSpace;
-(char)isSyncing;
-(char)isConnecting;
-(char)isPreparing;
-(char)hasExitedCPL;
-(double)syncProgress;
-(unsigned)numberOfImagesToDownload;
-(unsigned)numberOfPushedAsset;
-(unsigned)numberOfPulledAssets;
-(unsigned)totalAssetsOnServer;
@end
