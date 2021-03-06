/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying> {

	BOOL mIsPrinting;
	BOOL mIsPDF;
	BOOL mHasSuppressedBackgrounds;

}

@property (nonatomic,readonly) BOOL isPDF; 
@property (nonatomic,readonly) BOOL isPrinting; 
@property (nonatomic,readonly) BOOL hasSuppressedBackgrounds; 
+(id)contextInfoWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 ;
+(id)contextInfoForScene:(id)arg1 ;
+(void)setIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 forScene:(id)arg4 ;
+(id)context;
-(id)initWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 ;
-(void)setTSDCGContextInfoForCGContext:(CGContextRef)arg1 ;
-(BOOL)hasSuppressedBackgrounds;
-(BOOL)isPrinting;
-(BOOL)isPDF;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

