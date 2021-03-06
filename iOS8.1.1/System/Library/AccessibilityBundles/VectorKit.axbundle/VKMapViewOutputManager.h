/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface VKMapViewOutputManager : NSObject {

	NSMutableArray* _outputQueue;

}

@property (nonatomic,retain) NSMutableArray * outputQueue;              //@synthesize outputQueue=_outputQueue - In the implementation block
+(id)sharedOutputManager;
-(unsigned long long)outputQueueCount;
-(NSMutableArray *)outputQueue;
-(void)setOutputQueue:(NSMutableArray *)arg1 ;
-(void)clearOutputQueue;
-(void)queueOutput:(id)arg1 ;
-(void)_handleAccessibilityAnnouncementDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

