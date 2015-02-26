/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuFlickItemsViewDelegate;
@interface SCATModernMenuGestureFlickSheet : SCATModernMenuGesturesSheetBase {

	id<SCATMenuFlickItemsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuFlickItemsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(void)setDelegate:(id<SCATMenuFlickItemsViewDelegate>)arg1 ;
-(id<SCATMenuFlickItemsViewDelegate>)delegate;
@end
