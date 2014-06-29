/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _ADLocationPermissionRequest, NSMutableArray, NSObject, NSURL, NSMutableDictionary, NSFileManager;

@interface ADLocationPermissionManager : NSObject {

	_ADLocationPermissionRequest* _currentRequest;
	NSMutableArray* _pendingRequests;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSURL* _cacheFile;
	NSMutableDictionary* _cache;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) _ADLocationPermissionRequest * currentRequest;              //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingRequests;                           //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSURL * cacheFile;                                          //@synthesize cacheFile=_cacheFile - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cache;                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                                //@synthesize fileManager=_fileManager - In the implementation block
+(void)cancelOutstandingRequests;
+(void)clearPermissionCache;
+(void)allowLocationAccessForAdWithIdentifier:(id)arg1 title:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
+(id)sharedManager;
-(void)_enqueueRequestForAdWithIdentifier:(id)arg1 title:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)cacheFile;
-(id)pendingRequests;
-(void)_cancelOutstandingRequests;
-(void)_clearPermissionCache;
-(BOOL)_hasPermissionForAdWithIdentifier:(id)arg1 ;
-(void)_recordPermissionForAdWithIdentifier:(id)arg1 ;
-(void)_checkPendingRequests;
-(void)setPendingRequests:(id)arg1 ;
-(void)setCacheFile:(id)arg1 ;
-(id)dispatchQueue;
-(void)setCurrentRequest:(id)arg1 ;
-(id)currentRequest;
-(id)init;
-(id)cache;
-(void)setCache:(id)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setFileManager:(id)arg1 ;
-(id)fileManager;
@end
