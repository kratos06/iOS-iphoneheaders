/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkSessionConfiguring.h>

@class AVExternalDevice, UIScreen, UITraitCollection, NSSet, NSString;

@interface SBStarkSessionConfiguration : NSObject <SBStarkSessionConfiguring> {

	AVExternalDevice* _device;
	unsigned _interactionAffordances;
	int _layoutJustification;
	UIScreen* _screen;
	UITraitCollection* _traitCollection;
	char _geoSupported;
	NSSet* _protocols;

}

@property (assign,getter=isGeoSupported,nonatomic) char geoSupported; 
@property (nonatomic,copy) NSSet * sessionProtocols; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) AVExternalDevice * device; 
@property (nonatomic,readonly) unsigned interactionAffordances; 
@property (nonatomic,readonly) int layoutJustification; 
@property (nonatomic,retain,readonly) UIScreen * screen; 
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection; 
-(NSSet *)sessionProtocols;
-(char)isGeoSupported;
-(unsigned)interactionAffordances;
-(int)layoutJustification;
-(id)initWithDevice:(id)arg1 screen:(id)arg2 ;
-(void)setGeoSupported:(char)arg1 ;
-(void)setSessionProtocols:(NSSet *)arg1 ;
-(void)dealloc;
-(UIScreen *)screen;
-(UITraitCollection *)traitCollection;
-(AVExternalDevice *)device;
@end

