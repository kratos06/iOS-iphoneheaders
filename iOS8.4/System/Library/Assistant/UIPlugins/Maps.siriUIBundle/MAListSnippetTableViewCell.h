/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MAResultView;

@interface MAListSnippetTableViewCell : UITableViewCell {

	MAResultView* _resultView;

}

@property (nonatomic,retain) MAResultView * resultView;              //@synthesize resultView=_resultView - In the implementation block
-(void)setResultView:(MAResultView *)arg1 ;
-(MAResultView *)resultView;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
