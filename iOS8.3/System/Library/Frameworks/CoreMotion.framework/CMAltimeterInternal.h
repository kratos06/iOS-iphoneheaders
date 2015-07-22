/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:44:23 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue;

@interface CMAltimeterInternal : NSObject {

	Dispatcher* fFilteredPressureDispatcher;
	/*^block*/id fRelativeAltimeterHandler;
	NSOperationQueue* fRelativeAltimeterQueue;
	Sample fBaseAltimeterSample;
	float fBarometricBaseAltitude;
	BOOL fBaselineReceived;
	deque<float, std::__1::allocator<float> >* fPressureSamples;

}
-(void)dealloc;
-(id)init;
@end
