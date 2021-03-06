/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Social/SLSheetViewHostProtocol.h>

@class NSLayoutConstraint, UIView, NSMutableDictionary, SLService, NSString, SLRemoteComposeViewController;

@interface SLComposeViewController : UIViewController <SLSheetViewHostProtocol> {

	NSLayoutConstraint* _keyboardTopConstraint;
	UIView* _keyboardTrackingView;
	long long _savedStatusBarStyle;
	NSMutableDictionary* _delayedActions;
	bool _wasPresented;
	/*^block*/ id _completionHandler;
	bool _didFailLoadingRemoteViewController;
	SLService* _service;
	long long _numVideosAdded;
	long long _numImagesAdded;
	long long _numURLsAdded;
	NSString* _serviceType;
	SLRemoteComposeViewController* _remoteViewController;

}

@property (nonatomic,readonly) NSString * serviceType;                                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain) SLRemoteComposeViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(bool)configurationSupportsShareSheetOfType:(id)arg1 ;
+(bool)canShareItems:(id)arg1 forServiceType:(id)arg2 ;
+(bool)isAvailableForServiceType:(id)arg1 ;
+(id)composeViewControllerForServiceType:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(id)initWithServiceViewControllerClassName:(id)arg1 hostingBundleIdentifer:(id)arg2 ;
-(void)loadServiceViewControllerWithClassName:(id)arg1 fromServiceBundleWithIdentifier:(id)arg2 ;
-(void)remoteViewControllerLoadDidTimeout;
-(bool)canAddContent;
-(void)_addDelayedAction:(/*^block*/ id)arg1 forEvent:(id)arg2 ;
-(long long)_countForAttachmentType:(int)arg1 ;
-(long long)_limitForAttachmentType:(int)arg1 ;
-(id)_urlForUntypedAsset:(id)arg1 ;
-(void)_resetAttachmentCountForType:(int)arg1 ;
-(bool)_canAddAttachment:(id)arg1 ;
-(void)_incrementAttachmentCountForType:(int)arg1 ;
-(void)_performActionsForEvent:(id)arg1 ;
-(void)completeWithResult:(long long)arg1 ;
-(void)remoteController:(id)arg1 didLoadWithError:(id)arg2 ;
-(void)_handleRemoteViewFailure;
-(void)didLoadSheetViewController;
-(bool)supportsVideoAsset:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(id)_delayedActions;
-(void)dealloc;
-(/*^block*/ id)completionHandler;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(bool)_useCustomDimmingView;
-(bool)addImage:(id)arg1 ;
-(bool)removeAllImages;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void).cxx_destruct;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(id)remoteViewController;
-(bool)setInitialText:(id)arg1 ;
-(bool)supportsImageAsset:(id)arg1 ;
-(bool)addImageAsset:(id)arg1 ;
-(/*^block*/ id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(bool)addAttachment:(id)arg1 ;
-(bool)addURL:(id)arg1 withPreviewImage:(id)arg2 ;
-(bool)addURL:(id)arg1 ;
-(id)serviceType;
-(void)userDidCancel;
-(void)userDidPost;
-(void)sheetFailedWithError:(id)arg1 ;
-(void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2 ;
-(void)shouldShowNetworkActivityIndicator:(id)arg1 ;
-(bool)removeAllURLs;
-(bool)canSendTweet;
@end

