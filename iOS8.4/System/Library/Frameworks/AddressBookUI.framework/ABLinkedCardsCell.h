/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABLabeledCell.h>

@protocol ABPropertyCellDelegate;
@class UILabel;

@interface ABLinkedCardsCell : ABLabeledCell {

	id<ABPropertyCellDelegate> _delegate;
	UILabel* _sourceLabel;
	UILabel* _nameLabel;

}

@property (assign,nonatomic) id<ABPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * sourceLabel;                          //@synthesize sourceLabel=_sourceLabel - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
+(BOOL)wantsChevron;
-(void)performDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(id)labelView;
-(UILabel *)sourceLabel;
-(id)valueView;
-(void)dealloc;
-(void)setDelegate:(id<ABPropertyCellDelegate>)arg1 ;
-(id<ABPropertyCellDelegate>)delegate;
-(UILabel *)nameLabel;
-(BOOL)shouldPerformDefaultAction;
@end
