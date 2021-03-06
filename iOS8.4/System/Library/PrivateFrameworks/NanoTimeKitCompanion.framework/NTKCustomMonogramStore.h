/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_customMonogramFromPrefs;
-(void)_notifyClientsOfChange;
-(id)customMonogram;
-(void)setCustomMonogram:(id)arg1 ;
-(void)_handlePrefsChanged;
@end

