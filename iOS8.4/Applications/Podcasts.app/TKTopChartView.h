/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSOperationQueue, UITableView, TKTopChartComponent, NSString;

@interface TKTopChartView : TKView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate> {

	float _currentVelocity;
	double _yOffset;
	char _isDecelerating;
	double _lastCheck;
	char _hasRendered;
	NSOperationQueue* _loadingQueue;
	UITableView* _table;

}

@property (retain) UITableView * table;                             //@synthesize table=_table - In the implementation block
@property (retain) TKTopChartComponent * component; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willRotateToInterfaceOrientation:(int)arg1 withFrame:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(CGRect)rectForBounds:(CGRect)arg1 withTop:(float)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
-(void)postFirstRender:(id)arg1 ;
-(void)loadVisibleImages;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(UITableView *)table;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)deselectAll;
-(void)setTable:(UITableView *)arg1 ;
@end

