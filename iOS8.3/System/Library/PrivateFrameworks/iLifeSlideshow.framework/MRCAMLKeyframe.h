/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/NSCopying.h>

@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying> {

	MRCAMLBezierData* spline;
	float value0;
	float value1;
	double time;

}

@property (nonatomic,retain) MRCAMLBezierData * spline; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MRCAMLBezierData *)spline;
-(void)setSpline:(MRCAMLBezierData *)arg1 ;
@end
