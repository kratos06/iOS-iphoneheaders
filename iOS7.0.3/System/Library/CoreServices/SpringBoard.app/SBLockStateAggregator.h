/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface SBLockStateAggregator : NSObject {

	unsigned _lockState;

}
+(id)sharedInstance;
-(unsigned)lockState;
-(BOOL)hasAnyLockState;
-(void)_updateLockState;
-(id)_descriptionForLockState:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

