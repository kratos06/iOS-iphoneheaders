/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCCompositionFragment.h>

@class NSURL;

@interface RCMutableCompositionFragment : RCCompositionFragment

@property (nonatomic,retain) NSURL * AVOutputURL; 
@property (assign,nonatomic) double contentDuration; 
@property (assign,nonatomic) SCD_Struct_RC4 timeRangeInContentToUse; 
@property (assign,nonatomic) SCD_Struct_RC4 timeRangeInComposition; 
-(void)intersectWithTimeRange:(SCD_Struct_RC4)arg1 ;
@end

