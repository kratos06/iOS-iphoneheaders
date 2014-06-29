/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSDictionary, NSArray;

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id _delegate;
	UITableView* _table;
	NSDictionary* _selectedRoute;
	NSArray* _availableRoutes;

}

@property (assign,nonatomic) <PLAirTunesServicePickerViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * availableRoutes;                                               //@synthesize availableRoutes=_availableRoutes - In the implementation block
-(id)availableRoutes;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)loadView;
-(CGSize)contentSizeForViewInPopoverView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)_setCell:(id)arg1 checked:(bool)arg2 ;
-(long long)_indexofRouteWithRouteID:(id)arg1 ;
-(id)initWithAvailableAirplayRoutes:(id)arg1 previouslySelectedRoute:(id)arg2 ;
-(void)setAvailableRoutes:(id)arg1 ;
@end
