/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemGridCollectionViewLayout.h>

@class UICollectionView;

@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout {

	UICollectionView* _collectionView;
	long long _numberOfRows;
	long long _numberOfColumns;
	CGSize _headerSize;
	double _horizontalPadding;
	double _verticalPadding;
	BOOL _backfills;

}

@property (assign,nonatomic) double horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (assign,nonatomic) double verticalPadding;                //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (assign,nonatomic) BOOL backfills;                        //@synthesize backfills=_backfills - In the implementation block
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(double)verticalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(BOOL)backfills;
-(void)setBackfills:(BOOL)arg1 ;
@end

