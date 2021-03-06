/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition;

@interface PLVideoAgent : PLAgent {

	PLCFNotificationOperatorComposition* _VRPFinalized;
	PLCFNotificationOperatorComposition* _VRPPaused;
	PLCFNotificationOperatorComposition* _VRPPlaying;
	PLCFNotificationOperatorComposition* _VRPCreated;

}

@property (readonly) PLCFNotificationOperatorComposition * VRPFinalized;              //@synthesize VRPFinalized=_VRPFinalized - In the implementation block
@property (readonly) PLCFNotificationOperatorComposition * VRPPaused;                 //@synthesize VRPPaused=_VRPPaused - In the implementation block
@property (readonly) PLCFNotificationOperatorComposition * VRPPlaying;                //@synthesize VRPPlaying=_VRPPlaying - In the implementation block
@property (readonly) PLCFNotificationOperatorComposition * VRPCreated;                //@synthesize VRPCreated=_VRPCreated - In the implementation block
+(void)load;
+(id)defaults;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryAggregateDefinitions;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(PLCFNotificationOperatorComposition *)VRPFinalized;
-(PLCFNotificationOperatorComposition *)VRPPaused;
-(PLCFNotificationOperatorComposition *)VRPPlaying;
-(PLCFNotificationOperatorComposition *)VRPCreated;
@end

