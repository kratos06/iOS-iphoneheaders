/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface bundleIDEntry : NSObject {

	/*^block*/id handler;
	long long _seq;
	NSMutableArray* _netres;

}

@property (assign) long long seq;                        //@synthesize seq=_seq - In the implementation block
@property (retain) NSMutableArray * netres;              //@synthesize netres=_netres - In the implementation block
@property (copy) id handler; 
-(id)init;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(long long)seq;
-(void)setSeq:(long long)arg1 ;
-(NSMutableArray *)netres;
-(void)setNetres:(NSMutableArray *)arg1 ;
@end

