/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UICollectionView, UIView;

@interface SKUIIPadSearchView : UIView {

	UICollectionView* _collectionView;
	UIView* _noResultsView;
	UIView* _loadingView;
	UIView* _relatedView;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * noResultsView;                         //@synthesize noResultsView=_noResultsView - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                           //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) UIView * relatedView;                           //@synthesize relatedView=_relatedView - In the implementation block
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setNoResultsView:(UIView *)arg1 ;
-(void)setLoadingView:(UIView *)arg1 ;
-(void)setRelatedView:(UIView *)arg1 ;
-(UIView *)noResultsView;
-(UIView *)loadingView;
-(UIView *)relatedView;
@end

