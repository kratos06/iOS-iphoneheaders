/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SyncBundles/SMS.syncBundle/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATClient.h>

@interface CKATClient : NSObject <ATClient>
-(void)_prioritizeRecentAttachments;
-(bool)_isMessagesPath:(id)arg1 ;
-(bool)_isLegacyAttachment:(id)arg1 ;
-(bool)_isAttachment:(id)arg1 ;
-(bool)_isLegacyPreview:(id)arg1 ;
-(void)restoreEndedWithError:(id)arg1 ;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 succeeded:(bool)arg2 withError:(id)arg3 ;
-(void)prioritizeAsset:(id)arg1 ;
-(bool)shouldRestoreFile:(id)arg1 backupManager:(id)arg2 ;
-(bool)shouldBackgroundRestoreFile:(id)arg1 backupManager:(id)arg2 ;
-(id)supportedDataclasses;
@end

