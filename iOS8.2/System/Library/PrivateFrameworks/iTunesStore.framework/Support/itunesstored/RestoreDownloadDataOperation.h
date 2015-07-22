/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/FinishDownloadStepOperation.h>
#import <itunesstored/ISOperationDelegate.h>

@class NSString;

@interface RestoreDownloadDataOperation : FinishDownloadStepOperation <ISOperationDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_restoreDataForBundleID:(id)arg1 restoreState:(int)arg2 error:(id*)arg3 ;
-(char)_isFatalRestoreError:(id)arg1 ;
-(void)run;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
@end
