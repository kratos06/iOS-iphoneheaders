/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCandidateCollectionView.h>

@class UIKeyboardCandidateGridCollectionViewController, UITableViewIndex, UIView, NSArray;

@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView {

	float _indexMaximumHeight;
	UIKeyboardCandidateGridCollectionViewController* _parentViewController;
	float _previousGroupBarStartingY;
	UITableViewIndex* _index;
	UIView* _headerView;

}

@property (assign,nonatomic) UIKeyboardCandidateGridCollectionViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                                 //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) float previousGroupBarStartingY;                                                     //@synthesize previousGroupBarStartingY=_previousGroupBarStartingY - In the implementation block
@property (nonatomic,retain) NSArray * indexTitles; 
@property (nonatomic,readonly) UITableViewIndex * index;                                                          //@synthesize index=_index - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)parentViewController;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setParentViewController:(id)arg1 ;
-(id)headerView;
-(void)scrollToOffsetFromTop:(float)arg1 withAnimation:(BOOL)arg2 ;
-(void)scrollToTopWithAnimation:(BOOL)arg1 ;
-(void)scrollToBottomWithAnimation:(BOOL)arg1 ;
-(void)setHeaderView:(id)arg1 ;
-(id)indexTitles;
-(void)setIndexTitles:(id)arg1 ;
-(id)index;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned)arg3 ;
-(void)keyboardDidHideNotification:(id)arg1 ;
-(void)keyboardWillShowNotification:(id)arg1 ;
-(float)groupBarStartingY;
-(void)setPreviousGroupBarStartingY:(float)arg1 ;
-(BOOL)shouldShowIndex;
-(void)updateIndex:(BOOL)arg1 ;
-(void)updateIndex;
-(float)previousGroupBarStartingY;
-(void)showIndex:(BOOL)arg1 ;
-(void)delayUpdateIndex;
-(BOOL)isCellVisible:(id)arg1 ;
@end

