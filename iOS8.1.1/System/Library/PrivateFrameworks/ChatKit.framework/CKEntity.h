/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMHandle, NSString, UIImage;

@interface CKEntity : NSObject {

	IMHandle* _handle;

}

@property (nonatomic,retain,readonly) IMHandle * defaultIMHandle; 
@property (nonatomic,readonly) void* abRecord; 
@property (nonatomic,readonly) int propertyType; 
@property (nonatomic,readonly) int identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * rawAddress; 
@property (nonatomic,copy,readonly) NSString * originalAddress; 
@property (nonatomic,copy,readonly) NSString * IDSCanonicalAddress; 
@property (nonatomic,copy,readonly) NSString * textToneIdentifier; 
@property (nonatomic,copy,readonly) NSString * textVibrationIdentifier; 
@property (nonatomic,retain,readonly) UIImage * transcriptContactImage; 
@property (nonatomic,retain,readonly) UIImage * transcriptDrawerContactImage; 
@property (nonatomic,retain,readonly) UIImage * locationMapViewContactImage; 
@property (nonatomic,retain,readonly) UIImage * locationShareBalloonContactImage; 
@property (nonatomic,retain) IMHandle * handle;                                                //@synthesize handle=_handle - In the implementation block
+(id)copyEntityForAddressString:(id)arg1 ;
+(id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2 ;
-(id)personViewControllerWithDelegate:(id)arg1 ;
-(int)propertyType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)identifier;
-(NSString *)name;
-(id)initWithIMHandle:(id)arg1 ;
-(UIImage *)locationMapViewContactImage;
-(IMHandle *)defaultIMHandle;
-(NSString *)IDSCanonicalAddress;
-(NSString *)rawAddress;
-(void*)abRecord;
-(UIImage *)transcriptDrawerContactImage;
-(NSString *)originalAddress;
-(NSString *)textToneIdentifier;
-(NSString *)textVibrationIdentifier;
-(UIImage *)transcriptContactImage;
-(UIImage *)locationShareBalloonContactImage;
-(IMHandle *)handle;
-(void)setHandle:(IMHandle *)arg1 ;
-(NSString *)fullName;
@end

