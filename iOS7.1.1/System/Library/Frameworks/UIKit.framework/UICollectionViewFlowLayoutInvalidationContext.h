/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	struct {
		unsigned invalidateDelegateMetrics : 1;
		unsigned invalidateAttributes : 1;
	}  _flowLayoutInvalidationFlags;

}

@property (assign,nonatomic) bool invalidateFlowLayoutDelegateMetrics; 
@property (assign,nonatomic) bool invalidateFlowLayoutAttributes; 
-(id)init;
-(void)setInvalidateFlowLayoutAttributes:(bool)arg1 ;
-(bool)invalidateFlowLayoutAttributes;
-(void)setInvalidateFlowLayoutDelegateMetrics:(bool)arg1 ;
-(bool)invalidateFlowLayoutDelegateMetrics;
@end

