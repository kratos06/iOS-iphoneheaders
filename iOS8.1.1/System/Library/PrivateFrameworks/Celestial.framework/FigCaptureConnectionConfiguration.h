/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigXPCCoding.h>
#import <Celestial/NSCopying.h>

@class NSString, FigCaptureSourceConfiguration, FigCaptureSinkConfiguration;

@interface FigCaptureConnectionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _connectionID;
	unsigned _mediaType;
	FigCaptureSourceConfiguration* _sourceConfiguration;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	BOOL _enabled;

}

@property (nonatomic,copy) NSString * connectionID;                                            //@synthesize connectionID=_connectionID - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) FigCaptureSourceConfiguration * sourceConfiguration;              //@synthesize sourceConfiguration=_sourceConfiguration - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                  //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setConnectionID:(NSString *)arg1 ;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(FigCaptureSourceConfiguration *)sourceConfiguration;
-(void)setSourceConfiguration:(FigCaptureSourceConfiguration *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(id)initWithXPCEncoding:(id)arg1 ;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(NSString *)connectionID;
-(id)copyXPCEncoding;
-(unsigned)mediaType;
-(void)setMediaType:(unsigned)arg1 ;
@end

