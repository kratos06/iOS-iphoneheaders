/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <MediaPlayer/ISDialogOperationDelegate.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class NSNumber, NSString, SSAuthenticationContext, NSDictionary, ISURLRequestPerformance, SSURLRequestProperties, PurchaseResponseInfo, SSURLConnectionResponse;

@interface PurchaseOperation : ISOperation <ISDialogOperationDelegate, ISStoreURLOperationDelegate> {

	NSNumber* _accountID;
	NSString* _affiliateIdentifier;
	BOOL _allowsBootstrapCellularData;
	SSAuthenticationContext* _authenticationContext;
	int _bagType;
	NSString* _buyParameters;
	NSString* _clientIdentifierHeader;
	BOOL _didAuthenticate;
	BOOL _displayedErrorDialog;
	NSString* _downloadKind;
	BOOL _ignoresForcedPasswordRestriction;
	BOOL _isBackgroundPurchase;
	NSString* _mToken;
	BOOL _preauthenticated;
	NSDictionary* _rawOutput;
	ISURLRequestPerformance* _requestPerformanceMetrics;
	SSURLRequestProperties* _requestProperties;
	BOOL _requiresAuthentication;
	PurchaseResponseInfo* _responseInfo;
	BOOL _skipsConfirmationDialogs;
	BOOL _suppressDialogs;
	BOOL _shouldSendKeyBagSyncData;
	NSString* _urlBagKey;
	SSURLConnectionResponse* _urlResponse;

}

@property (copy) NSString * affiliateIdentifier; 
@property (assign) BOOL allowsBootstrapCellularData;                                   //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) int bagType;                                                        //@synthesize bagType=_bagType - In the implementation block
@property (retain) NSString * buyParameters;                                           //@synthesize buyParameters=_buyParameters - In the implementation block
@property (copy) NSString * clientIdentifierHeader; 
@property (getter=isBackgroundPurchase) BOOL backgroundPurchase; 
@property (getter=isPreauthenticated) BOOL preauthenticated;                           //@synthesize preauthenticated=_preauthenticated - In the implementation block
@property (assign) BOOL requiresAuthentication;                                        //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (assign) BOOL shouldSendKeyBagSyncData;                                      //@synthesize shouldSendKeyBagSyncData=_shouldSendKeyBagSyncData - In the implementation block
@property (assign) BOOL skipsConfirmationDialogs;                                      //@synthesize skipsConfirmationDialogs=_skipsConfirmationDialogs - In the implementation block
@property (copy) NSString * urlBagKey; 
@property (assign) BOOL displayedErrorDialog;                                          //@synthesize displayedErrorDialog=_displayedErrorDialog - In the implementation block
@property (readonly) ISURLRequestPerformance * requestPerformanceMetrics; 
@property (retain) NSDictionary * rawOutput;                                           //@synthesize rawOutput=_rawOutput - In the implementation block
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(id)_URLBagContext;
-(void)_runPurchaseRequest;
-(void)_runDialogOperationForDialog:(id)arg1 ;
-(BOOL)_shouldSendKeyBagSyncData;
-(void)_setChangedBuyParameters:(id)arg1 fromDataProvider:(id)arg2 ;
-(void)setDisplayedErrorDialog:(BOOL)arg1 ;
-(void)_performMachineDataActionForURLResponse:(id)arg1 ;
-(BOOL)_shouldUseClientAuthentication;
-(id)_newRequestParametersWithAccountID:(id)arg1 ;
-(BOOL)skipsConfirmationDialogs;
-(id)_newPurchaseRequestOperation;
-(void)_handleFailureForOperation:(id)arg1 ;
-(void)_setAuthTokenWithDictionary:(id)arg1 shouldSave:(BOOL)arg2 ;
-(void)setRawOutput:(id)arg1 ;
-(BOOL)shouldSendKeyBagSyncData;
-(id)requestPerformanceMetrics;
-(BOOL)displayedErrorDialog;
-(id)rawOutput;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(void)setShouldSendKeyBagSyncData:(BOOL)arg1 ;
-(void)setSkipsConfirmationDialogs:(BOOL)arg1 ;
-(id)buyParameters;
-(BOOL)requiresAuthentication;
-(id)uniqueKey;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
-(void)setBuyParameters:(id)arg1 ;
-(void)setBackgroundPurchase:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setAffiliateIdentifier:(id)arg1 ;
-(id)affiliateIdentifier;
-(BOOL)isBackgroundPurchase;
-(BOOL)isPreauthenticated;
-(void)setPreauthenticated:(BOOL)arg1 ;
-(BOOL)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(BOOL)arg1 ;
-(id)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(int)bagType;
-(id)_account;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)urlBagKey;
-(id)authenticatedAccountDSID;
-(BOOL)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(void)setUrlBagKey:(id)arg1 ;
-(void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2 ;
-(id)URLResponse;
-(id)initWithPurchase:(id)arg1 ;
-(void)setBagType:(int)arg1 ;
@end

