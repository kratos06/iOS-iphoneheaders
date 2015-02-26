/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioSyncRequest.h>

@class RadioStation, NSString, NSArray;

@interface RadioUpdateStationRequest : RadioSyncRequest {

	RadioStation* _station;
	NSString* _name;
	NSString* _stationDescription;
	NSArray* _seeds;
	long long _songMixType;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * stationDescription;              //@synthesize stationDescription=_stationDescription - In the implementation block
@property (nonatomic,copy) NSArray * seeds;                            //@synthesize seeds=_seeds - In the implementation block
@property (assign,nonatomic) long long songMixType;                    //@synthesize songMixType=_songMixType - In the implementation block
-(NSArray *)seeds;
-(void)setSeeds:(NSArray *)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(NSString *)stationDescription;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setStationDescription:(NSString *)arg1 ;
-(id)changeList;
-(id)_updatedStationDictionary;
-(void)setSongMixType:(long long)arg1 ;
-(long long)songMixType;
@end
