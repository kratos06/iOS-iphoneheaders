/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface IDSRegistrationProperties : NSObject {

	NSArray* _interesting;
	NSArray* _requireAll;

}

@property (nonatomic,retain) NSArray * interesting;              //@synthesize interesting=_interesting - In the implementation block
@property (nonatomic,retain) NSArray * requireAll;               //@synthesize requireAll=_requireAll - In the implementation block
-(NSArray *)requireAll;
-(void)setRequireAll:(NSArray *)arg1 ;
-(NSArray *)interesting;
-(void)setInteresting:(NSArray *)arg1 ;
-(void)dealloc;
@end

