/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class SiriGuideSectionModel, SiriUIContentLabel;

@interface SiriGuideDetailSectionViewCell : SiriUIContentCollectionViewCell {

	SiriGuideSectionModel* _sectionModel;
	SiriUIContentLabel* _sectionLabel;

}
+(double)heightOfCell;
-(void)configureWithSectionModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

