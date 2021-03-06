/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol WAWeatherCollectionFooterViewCellDelegate;
@class WATouchButton, WAUnitSelectionControl, UIButton, UIImageView;

@interface WAWeatherCollectionFooterViewCell : UICollectionReusableView {

	<WAWeatherCollectionFooterViewCellDelegate>* _delegate;
	WATouchButton* _addButton;
	WAUnitSelectionControl* _unitControl;
	UIButton* _theWeatherChannelButton;
	UIButton* _yahooButton;
	UIImageView* _topKeyline;

}

@property (assign,nonatomic) <WAWeatherCollectionFooterViewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WATouchButton * addButton;                                           //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) WAUnitSelectionControl * unitControl;                                //@synthesize unitControl=_unitControl - In the implementation block
@property (nonatomic,retain) UIButton * theWeatherChannelButton;                                  //@synthesize theWeatherChannelButton=_theWeatherChannelButton - In the implementation block
@property (nonatomic,retain) UIButton * yahooButton;                                              //@synthesize yahooButton=_yahooButton - In the implementation block
@property (nonatomic,retain) UIImageView * topKeyline;                                            //@synthesize topKeyline=_topKeyline - In the implementation block
-(id)yahooButton;
-(void)_selectedSegmentChanged:(id)arg1 ;
-(void)setYahooButton:(id)arg1 ;
-(void)_showAddSheet:(id)arg1 ;
-(void)_updateUnitControl;
-(void)_twcLogoTapped:(id)arg1 ;
-(void)_yahooLogoTapped:(id)arg1 ;
-(id)generatekeyline;
-(id)unitControl;
-(void)setUnitControl:(id)arg1 ;
-(id)theWeatherChannelButton;
-(void)setTheWeatherChannelButton:(id)arg1 ;
-(id)topKeyline;
-(void)setTopKeyline:(id)arg1 ;
-(void)setAddButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)prepareForReuse;
-(id)addButton;
@end

