/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CABasicAnimation;

@interface _UIViewKeyValueAnimationFactoryTransition : NSObject {

	CABasicAnimation* _fromAnimation;
	CABasicAnimation* _toAnimation;

}

@property (nonatomic,retain) CABasicAnimation * fromAnimation;              //@synthesize fromAnimation=_fromAnimation - In the implementation block
@property (nonatomic,retain) CABasicAnimation * toAnimation;                //@synthesize toAnimation=_toAnimation - In the implementation block
-(void)dealloc;
-(CABasicAnimation *)fromAnimation;
-(void)setFromAnimation:(CABasicAnimation *)arg1 ;
-(CABasicAnimation *)toAnimation;
-(void)setToAnimation:(CABasicAnimation *)arg1 ;
@end
