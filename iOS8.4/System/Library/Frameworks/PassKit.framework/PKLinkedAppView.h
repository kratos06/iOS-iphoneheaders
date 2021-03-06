/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <PassKit/SKStoreProductViewControllerDelegate.h>

@class NSArray, NSDictionary, SSSoftwareLibraryItem, UIImageView, UILabel, UIButton, PKLinkedAppUserRatingView, UIActivityIndicatorView, SKStoreProductViewController, NSURL, UIColor, NSString;

@interface PKLinkedAppView : UITableViewCell <SKStoreProductViewControllerDelegate> {

	BOOL _lookupInitiated;
	BOOL _appInstalled;
	BOOL _appNotAvailable;
	NSArray* _storeIDs;
	NSDictionary* _foundStoreItem;
	SSSoftwareLibraryItem* _foundLibraryItem;
	UIImageView* _iconView;
	UILabel* _tapToOpen;
	UILabel* _appName;
	UIButton* _viewButton;
	UILabel* _appPublisher;
	PKLinkedAppUserRatingView* _userRatingView;
	UILabel* _price;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _loadingLabel;
	SKStoreProductViewController* _productViewController;
	NSURL* _appLaunchURL;
	UIColor* _mainLabelColor;
	UIColor* _subTextLabelColor;

}

@property (nonatomic,retain) NSArray * storeIDs;                                                //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,retain) NSURL * appLaunchURL;                                              //@synthesize appLaunchURL=_appLaunchURL - In the implementation block
@property (assign,nonatomic) UIColor * mainLabelColor;                                          //@synthesize mainLabelColor=_mainLabelColor - In the implementation block
@property (assign,nonatomic) UIColor * subTextLabelColor;                                       //@synthesize subTextLabelColor=_subTextLabelColor - In the implementation block
@property (assign,nonatomic) BOOL lookupInitiated;                                              //@synthesize lookupInitiated=_lookupInitiated - In the implementation block
@property (assign,nonatomic) BOOL appInstalled;                                                 //@synthesize appInstalled=_appInstalled - In the implementation block
@property (nonatomic,retain) NSDictionary * foundStoreItem;                                     //@synthesize foundStoreItem=_foundStoreItem - In the implementation block
@property (nonatomic,retain) SSSoftwareLibraryItem * foundLibraryItem;                          //@synthesize foundLibraryItem=_foundLibraryItem - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * tapToOpen;                                               //@synthesize tapToOpen=_tapToOpen - In the implementation block
@property (nonatomic,retain) UILabel * appName;                                                 //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) UIButton * viewButton;                                             //@synthesize viewButton=_viewButton - In the implementation block
@property (nonatomic,retain) UILabel * appPublisher;                                            //@synthesize appPublisher=_appPublisher - In the implementation block
@property (nonatomic,retain) PKLinkedAppUserRatingView * userRatingView;                        //@synthesize userRatingView=_userRatingView - In the implementation block
@property (nonatomic,retain) UILabel * price;                                                   //@synthesize price=_price - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                       //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * loadingLabel;                                            //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (assign,nonatomic) BOOL appNotAvailable;                                              //@synthesize appNotAvailable=_appNotAvailable - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * productViewController;              //@synthesize productViewController=_productViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)price;
-(NSArray *)storeIDs;
-(UILabel *)appName;
-(id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3 ;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(void)reloadWithDelay:(double)arg1 ;
-(void)setMainLabelColor:(UIColor *)arg1 ;
-(void)setSubTextLabelColor:(UIColor *)arg1 ;
-(UIColor *)mainLabelColor;
-(UIColor *)subTextLabelColor;
-(BOOL)_anyAppIsInstalled:(id)arg1 ;
-(void)setAppInstalled:(BOOL)arg1 ;
-(void)setAppNotAvailable:(BOOL)arg1 ;
-(BOOL)appInstalled;
-(void)performStoreLookup;
-(void)setLookupInitiated:(BOOL)arg1 ;
-(int)_iconVariantForScale:(double)arg1 item:(id)arg2 ;
-(BOOL)_itemIsNewsstandApp:(id)arg1 ;
-(id)_newsstandArtworkForItem:(id)arg1 ;
-(CGSize)_desiredSizeForNewsstandItem:(id)arg1 ;
-(id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(CGSize)arg2 requireStrictMatch:(BOOL)arg3 ;
-(id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(CGSize)arg2 ;
-(int)_iconOptionsForItem:(id)arg1 ;
-(void)setFoundStoreItem:(NSDictionary *)arg1 ;
-(BOOL)appNotAvailable;
-(void)_layoutNotAvailableView;
-(BOOL)lookupInitiated;
-(NSDictionary *)foundStoreItem;
-(void)_layoutLockupView;
-(void)_cleanupViews;
-(void)setLoadingLabel:(UILabel *)arg1 ;
-(UILabel *)loadingLabel;
-(SSSoftwareLibraryItem *)foundLibraryItem;
-(id)_priceForItem:(id)arg1 ;
-(void)setFoundLibraryItem:(SSSoftwareLibraryItem *)arg1 ;
-(id)_imageForSize:(CGSize)arg1 fromArtwork:(id)arg2 requireStrictMatch:(BOOL)arg3 ;
-(int)_bindingTypeForNewsstandItem:(id)arg1 ;
-(CGSize)_sizeFromImage:(id)arg1 ;
-(void)setProductViewController:(SKStoreProductViewController *)arg1 ;
-(BOOL)_itemArtNeedsShine:(id)arg1 ;
-(UILabel *)tapToOpen;
-(void)setTapToOpen:(UILabel *)arg1 ;
-(void)setAppName:(UILabel *)arg1 ;
-(UIButton *)viewButton;
-(void)setViewButton:(UIButton *)arg1 ;
-(UILabel *)appPublisher;
-(void)setAppPublisher:(UILabel *)arg1 ;
-(PKLinkedAppUserRatingView *)userRatingView;
-(void)setUserRatingView:(PKLinkedAppUserRatingView *)arg1 ;
-(SKStoreProductViewController *)productViewController;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)reload;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(NSURL *)appLaunchURL;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(void)_layoutLoadingView;
-(void)setPrice:(UILabel *)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

