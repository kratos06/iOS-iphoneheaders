/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreText/CoreText-Structs.h>
@class NSMutableDictionary, NSSet;

@interface FontAssetDownloadManager : NSObject {

	TCFRef<const __CFArray *>* fDescriptors;
	TCFRef<const __CFSet *>* fMandatoryAttributes;
	/*^block*/id fProgressCallbackBlock;
	NSMutableDictionary* fProgressParams;
	NSMutableDictionary* fDownloadOptions;
	NSSet* fPreciousFontLanguages;

}
+(Class)getASAssetQueryClass;
+(BOOL)shouldIgnoreFontAsset:(id)arg1 ;
+(BOOL)shouldTryServer;
+(BOOL)shouldRetryWithServer;
+(id)enabledKeyboardLanguages;
+(id)displayNameForCurrentUser:(id)arg1 ;
+(id)availableFontAttributesArray;
-(BOOL)callProgressCallbak:(unsigned)arg1 ;
-(id)getUnmatchedDescriptors;
-(id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2 ;
-(unsigned long long)calculateDownloadSize:(id)arg1 ;
-(void)setProgressParam:(id)arg1 forKey:(id)arg2 ;
-(BOOL)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3 ;
-(id)doFinalMatching;
-(id)availableMobileAssets:(BOOL)arg1 error:(id*)arg2 ;
-(id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)arg1 from:(id)arg2 withFailInfo:(BOOL*)arg3 andFontFilePaths:(id)arg4 ;
-(void)setDownloadOptionsForMobileAsset;
-(BOOL)assetStalled:(id)arg1 ;
-(void)setGarbageCollectionBehaviorForAsset:(id)arg1 ;
-(BOOL)activateFontsFromAssetURL:(id)arg1 ;
-(id)preciousFontLanguages;
-(id)initWithDescriptors:(CFArrayRef)arg1 andMandatoryAttributes:(CFSetRef)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)downloadFontAssets;
-(void)dealloc;
@end

