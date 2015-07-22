/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@interface RUIVariableHeightCell : RemoteUITableViewCell {

	char _supportsAccessory;

}

@property (assign,nonatomic) char supportsAccessory;              //@synthesize supportsAccessory=_supportsAccessory - In the implementation block
-(void)layoutSubviews;
-(float)height;
-(float)contentWidth;
-(CGSize)textLabelSizeForWidth:(float)arg1 ;
-(CGSize)detailLabelSizeForWidth:(float)arg1 ;
-(char)supportsAccessory;
-(void)setSupportsAccessory:(char)arg1 ;
@end
