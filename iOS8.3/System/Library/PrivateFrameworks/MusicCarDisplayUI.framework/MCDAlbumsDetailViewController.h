/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:41:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCDTableViewController.h>

@interface MCDAlbumsDetailViewController : MCDTableViewController {

	float _maximumDurationWidth;

}

@property (nonatomic,readonly) float maximumDurationWidth; 
+(id)actionCellConfigurationClasses;
-(void)reloadData;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(char)shouldShowActionCellConfiguration:(Class)arg1 ;
-(float)maximumDurationWidth;
-(void)_updateTitle;
@end

