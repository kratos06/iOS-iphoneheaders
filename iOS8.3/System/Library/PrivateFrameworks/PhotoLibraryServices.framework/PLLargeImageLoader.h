/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPreheatItemSource.h>

@class NSString;

@interface PLLargeImageLoader : NSObject <PLPreheatItemSource> {

	int _format;

}

@property (assign,nonatomic) int format;                            //@synthesize format=_format - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFormat:(int)arg1 ;
-(id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 options:(unsigned)arg4 ;
-(id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(CGSize)arg2 options:(unsigned)arg3 ;
-(int)format;
-(void)setFormat:(int)arg1 ;
@end

