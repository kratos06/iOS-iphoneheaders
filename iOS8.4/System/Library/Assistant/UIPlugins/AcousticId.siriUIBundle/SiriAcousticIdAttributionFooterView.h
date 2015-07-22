/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/AcousticId.siriUIBundle/AcousticId
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AcousticId/AcousticId-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@protocol SiriAcousticIdAttributionFooterViewDelegate;
@class SAUIAppPunchOut, UIButton;

@interface SiriAcousticIdAttributionFooterView : SiriUIReusableFooterView {

	SAUIAppPunchOut* _attributionPunchOut;
	id<SiriAcousticIdAttributionFooterViewDelegate> _delegate;
	UIButton* _attributionButton;

}

@property (nonatomic,retain) SAUIAppPunchOut * attributionPunchOut;                                        //@synthesize attributionPunchOut=_attributionPunchOut - In the implementation block
@property (assign,nonatomic,__weak) id<SiriAcousticIdAttributionFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * attributionButton;                                                 //@synthesize attributionButton=_attributionButton - In the implementation block
+(double)defaultHeight;
-(void)_attributionButtonClicked:(id)arg1 ;
-(UIButton *)attributionButton;
-(void)setAttributionButton:(UIButton *)arg1 ;
-(void)_updateAttributionButton:(id)arg1 withImage:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SiriAcousticIdAttributionFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SiriAcousticIdAttributionFooterViewDelegate>)delegate;
-(SAUIAppPunchOut *)attributionPunchOut;
-(void)setAttributionPunchOut:(SAUIAppPunchOut *)arg1 ;
@end
