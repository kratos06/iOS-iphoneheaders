/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUClientInterfaceDelegate.h>

@class NSString, NSBundle, SUClientInterface, NSDictionary, SKUIStoreDialogController, SKUILocalizedStringDictionary, NSMapTable, NSMutableArray, SSURLBag, NSArray, SSVPlatformContext;

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegate> {

	NSString* _additionalPurchaseParameters;
	NSBundle* _bundle;
	SUClientInterface* _clientInterface;
	NSDictionary* _configurationDictionary;
	SKUIStoreDialogController* _dialogController;
	SKUILocalizedStringDictionary* _localizedStrings;
	NSString* _metricsConfigurationIdentifier;
	NSMapTable* _metricsPageContexts;
	NSMutableArray* _navigationHistory;
	NSString* _navigationHistoryPersistenceKey;
	NSString* _purchaseAffiliateIdentifier;
	long long _purchaseURLBagType;
	NSString* _storeFrontIdentifier;
	SSURLBag* _urlBag;
	long long _userInterfaceIdiomOverride;

}

@property (nonatomic,readonly) SUClientInterface * clientInterface;                 //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiomOverride;                  //@synthesize userInterfaceIdiomOverride=_userInterfaceIdiomOverride - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontIdentifier;                     //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,readonly) SSURLBag * URLBag; 
@property (nonatomic,readonly) NSArray * navigationHistory; 
@property (nonatomic,copy) NSString * metricsConfigurationIdentifier;               //@synthesize metricsConfigurationIdentifier=_metricsConfigurationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * navigationHistoryPersistenceKey;              //@synthesize navigationHistoryPersistenceKey=_navigationHistoryPersistenceKey - In the implementation block
@property (nonatomic,readonly) SSVPlatformContext * platformContext; 
+(id)_cachePathForStoreFrontIdentifier:(id)arg1 ;
+(id)_configurationDictionaryWithBagDictionary:(id)arg1 ;
+(id)defaultContext;
-(void)dealloc;
-(id)description;
-(id)localizedStringForKey:(id)arg1 ;
-(void).cxx_destruct;
-(id)clientInterface;
-(void)_setAdditionalPurchaseParameters:(id)arg1 ;
-(void)_setPurchaseAffiliateIdentifier:(id)arg1 ;
-(void)_setPurchaseURLBagType:(long long)arg1 ;
-(void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2 ;
-(void)setUserInterfaceIdiomOverride:(long long)arg1 ;
-(void)_customizePurchase:(id)arg1 ;
-(id)valueForConfigurationKey:(id)arg1 ;
-(id)platformContext;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(void)getDefaultMetricsControllerWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)URLBag;
-(id)metricsPageContextForViewController:(id)arg1 ;
-(id)navigationHistory;
-(void)pushNavigationHistoryPageIdentifier:(id)arg1 ;
-(id)localizedAlertWithError:(id)arg1 ;
-(id)metricsConfigurationIdentifier;
-(id)_navigationHistory;
-(void)_setValue:(id)arg1 forConfigurationKey:(id)arg2 ;
-(void)loadValueForConfigurationKey:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)setMetricsConfigurationIdentifier:(id)arg1 ;
-(id)navigationHistoryPersistenceKey;
-(void)setNavigationHistoryPersistenceKey:(id)arg1 ;
-(long long)userInterfaceIdiomOverride;
-(id)storeFrontIdentifier;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2 ;
-(id)initWithConfigurationDictionary:(id)arg1 ;
@end

