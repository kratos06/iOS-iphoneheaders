/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {

	int mStyle;
	OITSUColor* mColor;
	unsigned char mWidth;
	unsigned char mSpace;
	BOOL mShadow;
	BOOL mFrame;

}
-(void)dealloc;
-(id)init;
-(void)setFrame:(BOOL)arg1 ;
-(BOOL)frame;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(unsigned char)width;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setWidth:(unsigned char)arg1 ;
-(BOOL)shadow;
-(void)setShadow:(BOOL)arg1 ;
-(void)setSpace:(unsigned char)arg1 ;
-(unsigned char)space;
-(BOOL)isEqualToBorder:(id)arg1 ;
-(void)setSingleBlackBorder;
-(void)setNullBorder;
-(void)setBorder:(id)arg1 ;
@end

