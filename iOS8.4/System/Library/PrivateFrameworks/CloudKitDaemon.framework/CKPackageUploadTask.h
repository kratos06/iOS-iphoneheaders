/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDCancelling.h>

@protocol OS_dispatch_group;
@class NSError, CKPackage, CKDMMCSItem, NSArray, CKDProgressTracker, CKDMMCSRequestOptions, NSObject, CKDCancelTokenGroup;

@interface CKPackageUploadTask : NSObject <CKDCancelling> {

	NSError* _error;
	CKPackage* _package;
	CKDMMCSItem* _MMCSManifestItem;
	NSArray* _MMCSSectionItems;
	CKDProgressTracker* _progressTracker;
	CKDMMCSRequestOptions* _MMCSRequestOptions;
	NSObject*<OS_dispatch_group> _group;
	CKDCancelTokenGroup* _cancelTokens;

}

@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) CKPackage * package;                                   //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CKDMMCSItem * MMCSManifestItem;                          //@synthesize MMCSManifestItem=_MMCSManifestItem - In the implementation block
@property (nonatomic,retain) NSArray * MMCSSectionItems;                              //@synthesize MMCSSectionItems=_MMCSSectionItems - In the implementation block
@property (nonatomic,retain) CKDProgressTracker * progressTracker;                    //@synthesize progressTracker=_progressTracker - In the implementation block
@property (nonatomic,retain) CKDMMCSRequestOptions * MMCSRequestOptions;              //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                      //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CKDCancelTokenGroup * cancelTokens;                      //@synthesize cancelTokens=_cancelTokens - In the implementation block
-(void)cancel;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(NSError *)error;
-(CKDCancelTokenGroup *)cancelTokens;
-(id)initWithPackage:(id)arg1 trackProgress:(BOOL)arg2 ;
-(CKPackage *)package;
-(CKDProgressTracker *)progressTracker;
-(void)setProgressTracker:(CKDProgressTracker *)arg1 ;
-(CKDMMCSRequestOptions *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(CKDMMCSRequestOptions *)arg1 ;
-(void)setCancelTokens:(CKDCancelTokenGroup *)arg1 ;
-(void)setMMCSManifestItem:(CKDMMCSItem *)arg1 ;
-(void)setMMCSSectionItems:(NSArray *)arg1 ;
-(CKDMMCSItem *)MMCSManifestItem;
-(NSArray *)MMCSSectionItems;
-(void)setError:(NSError *)arg1 ;
@end
