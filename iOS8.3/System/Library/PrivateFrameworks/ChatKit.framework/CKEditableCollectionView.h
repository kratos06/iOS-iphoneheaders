/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:00:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView {

	char _editing;
	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                  //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;              //@synthesize editing=_editing - In the implementation block
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
@end
