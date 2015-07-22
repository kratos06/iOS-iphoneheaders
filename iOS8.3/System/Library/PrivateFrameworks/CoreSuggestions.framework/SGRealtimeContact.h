/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:15:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/NSSecureCoding.h>
#import <CoreSuggestions/NSCopying.h>

@class SGContact;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying> {

	int _state;
	SGContact* _contact;
	int _abPersonId;

}

@property (nonatomic,readonly) int state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) SGContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) int abPersonId;                   //@synthesize abPersonId=_abPersonId - In the implementation block
+(char)supportsSecureCoding;
+(id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(int)arg2 ;
+(id)realtimeContactForNewContact:(id)arg1 ;
-(SGContact *)contact;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithState:(int)arg1 contact:(id)arg2 abPersonId:(int)arg3 ;
-(char)isEqualToRealtimeContact:(id)arg1 ;
-(int)abPersonId;
@end
