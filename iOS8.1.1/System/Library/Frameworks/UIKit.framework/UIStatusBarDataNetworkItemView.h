/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {

	int _dataNetworkType;
	int _wifiStrengthRaw;
	int _wifiStrengthBars;
	BOOL _enableRSSI;
	BOOL _showRSSI;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)extraLeftPadding;
-(double)maximumOverlap;
-(id)_stringForRSSI;
-(id)_dataNetworkImage;
@end
