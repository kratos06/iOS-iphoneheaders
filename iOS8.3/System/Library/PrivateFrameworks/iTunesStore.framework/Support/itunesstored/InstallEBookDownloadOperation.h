/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/FinishDownloadStepOperation.h>

@interface InstallEBookDownloadOperation : FinishDownloadStepOperation
-(id)_storeFrontIdentifier;
-(char)_installMediaAsset:(id)arg1 installedPath:(id*)arg2 error:(id*)arg3 ;
-(id)_bookManifest;
-(void)_addPurchaseManifestItem;
-(id)_existingManifestEntry;
-(id)_newManifestEntry;
-(id)_syncedBooksPath;
-(void)run;
@end

