/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AEHelper.h>

@protocol AEAsset;
@class BKLocation, NSString, AEAnnotationProvider;

@interface AETestHelper : NSObject <AEHelper> {

	id<AEAsset> _asset;
	BKLocation* _currentLocation;

}

@property (nonatomic,retain) BKLocation * currentLocation;                             //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AEAnnotationProvider * annotationProvider; 
-(id)helperMetadataForKey:(id)arg1 ;
-(void)helperViewControllerWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)helperDeletePersistentCache;
-(id)helperCoverImage;
-(id)helperViewControllerWithError:(id*)arg1 ;
-(BKLocation *)currentLocation;
-(void)setCurrentLocation:(BKLocation *)arg1 ;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(id)asset;
@end
