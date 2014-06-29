/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDPath, GQDWPLayoutFrame;

@interface GQDShape : GQDGraphic <GQDNameMappable> {

	GQDPath* mPath;
	GQDWPLayoutFrame* mLayoutFrame;

}
+(const StateSpec*)stateForReading;
-(id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3 ;
-(bool)isBlank;
-(CGPathRef)createBezierPath;
-(id)layoutFrame;
-(bool)isRectangularAndAxisAlignedToAngle:(float)arg1 ;
-(void)dealloc;
-(id)path;
@end
