/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBItemInfoLayoutCache : NSObject {

	float _cachedViewHeight;
	CGSize _referenceSize;
	int _layoutMode;

}
-(float)viewHeightWithReferenceSize:(CGSize)arg1 layoutMode:(int)arg2 generateBlock:(/*^block*/ id)arg3 ;
-(BOOL)_isLayoutValidWithReferenceSize:(CGSize)arg1 layoutMode:(int)arg2 ;
-(void)invalidateCache;
@end
