/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class NSMutableArray, NSArray;

@interface ACSportsStandingColumnView : ACSportsEntityView {

	NSMutableArray* _statLabels;
	NSArray* _snippetColumnHeaders;
	bool _isFirstHeaderGroup;

}

@property (assign,nonatomic) bool isFirstHeaderGroup;              //@synthesize isFirstHeaderGroup=_isFirstHeaderGroup - In the implementation block
+(double)interimSpacing;
-(bool)_columnsContainMultipleStats;
-(void)_updateStatLabels;
-(unsigned long long)_numberOfStatColumns;
-(double)_nonStatLabelColumnWidth;
-(double)statLabelBaselineOffset;
-(void)statLabelMinXDidChange;
-(id)textForSnippetColumn:(id)arg1 ;
-(double)statLabelMinX;
-(void)setSnippetColumns:(id)arg1 ;
-(void)setIsFirstHeaderGroup:(bool)arg1 ;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(bool)isFirstHeaderGroup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(id)labelFont;
@end

