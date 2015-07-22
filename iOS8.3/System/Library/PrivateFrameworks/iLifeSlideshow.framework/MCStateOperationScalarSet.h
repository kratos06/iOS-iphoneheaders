/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCStateOperation.h>

@interface MCStateOperationScalarSet : MCStateOperation {

	float _scalar;

}

@property (assign,nonatomic) float scalar;              //@synthesize scalar=_scalar - In the implementation block
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andScalar:(float)arg3 ;
-(id)description;
-(id)imprint;
-(void)setScalar:(float)arg1 ;
-(float)scalar;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end
