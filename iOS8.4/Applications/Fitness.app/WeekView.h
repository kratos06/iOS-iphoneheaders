/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FitWeekViewDelegate, FitWeekViewDatasource;
@class FitDayCellLayer, NSMutableArray;

@interface WeekView : UIView {

	FitDayCellLayer* _pressedDayCell;
	id<FitWeekViewDelegate> _delegate;
	id<FitWeekViewDatasource> _datasource;
	NSMutableArray* _dayCells;

}

@property (assign,nonatomic,__weak) id<FitWeekViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FitWeekViewDatasource> datasource;              //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) NSMutableArray * dayCells;                                //@synthesize dayCells=_dayCells - In the implementation block
+(id)ringViewQueue;
+(id)ringView;
-(id)_getDayCellWithTouches:(id)arg1 ;
-(id)currentWeekStartDate;
-(id)previousWeekStartDate;
-(id)nextWeekStartDate;
-(NSMutableArray *)dayCells;
-(void)setDayCells:(NSMutableArray *)arg1 ;
-(Class)cellLayerClass;
-(void)setWeekStart:(id)arg1 ;
-(id<FitWeekViewDatasource>)datasource;
-(void)setDatasource:(id<FitWeekViewDatasource>)arg1 ;
-(float)preferredHeight;
-(void)setDelegate:(id<FitWeekViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<FitWeekViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
