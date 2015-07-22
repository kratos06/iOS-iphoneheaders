/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <iBooks/IMMenuViewController.h>
@class NSArray;


@protocol IMMenuViewController <NSObject>
@property (nonatomic,copy) NSArray * menuItems; 
@required
-(void)setMenuItems:(id)arg1;
-(NSArray *)menuItems;

@end


@class NSArray, UITableView, NSString;

@interface IMMenuViewController : IMViewController <UITableViewDelegate, UITableViewDataSource, IMMenuViewController> {

	NSArray* _menuItems;
	UITableView* _tableView;

}

@property (nonatomic,copy) NSArray * menuItems;                     //@synthesize menuItems=_menuItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updatePopoverSize;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end
