/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/mapspushd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RAPCorrectedProblemManagerDelegate;
@interface RAPCorrectedProblemManager : NSObject {

	<RAPCorrectedProblemManagerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RAPCorrectedProblemManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
@end
