/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class SKUIClientContext, NSString, NSOperationQueue, SKUIRedeemPreflightOperation, SKUIRedeemConfiguration, SKUIRedeemStepViewController;

@interface SKUIRedeemViewController : UINavigationController {

	BOOL _attempsAutomaticRedeem;
	char _cameraRedeemEnabled;
	long long _category;
	SKUIClientContext* _clientContext;
	NSString* _initialCode;
	NSOperationQueue* _operationQueue;
	SKUIRedeemPreflightOperation* _preflightOperation;
	SKUIRedeemConfiguration* _redeemConfiguration;
	SKUIRedeemStepViewController* _rootViewController;

}

@property (nonatomic,readonly) long long category;                           //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL attempsAutomaticRedeem;                    //@synthesize attempsAutomaticRedeem=_attempsAutomaticRedeem - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                           //@synthesize initialCode=_initialCode - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)_cancelButtonAction:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)category;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(NSString *)initialCode;
-(BOOL)attempsAutomaticRedeem;
-(void)_finishPreflightWithResult:(id)arg1 ;
-(id)_newRootViewController;
-(void)_loadRootViewController;
-(void)_attemptAutomaticRedeemWithMetadata:(id)arg1 ;
-(void)_showRootViewController;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)redeemAgainAnimated:(BOOL)arg1 ;
-(void)setAttempsAutomaticRedeem:(BOOL)arg1 ;
@end
