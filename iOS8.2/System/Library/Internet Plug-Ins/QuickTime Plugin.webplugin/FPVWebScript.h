/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Internet Plug-Ins/QuickTime Plugin.webplugin/QuickTime Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FigPluginView;

@interface FPVWebScript : NSObject {

	FigPluginView* _figPluginView;

}
+(id)selectorMap;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(void)play;
-(void)seekToDate:(id)arg1 ;
-(char)isFullScreen;
-(void)setCurrentTime:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)stop;
-(void)setFigPluginView:(id)arg1 ;
-(id)getPluginStatus;
-(id)getRate;
-(void)exitFullScreen;
-(id)getCurrentTime;
-(id)getDate;
-(id)getTimeScale;
-(id)getMaxTimeLoaded;
-(id)getMaxBytesLoaded;
-(id)getMovieSize;
-(id)getLastTimedMetadata;
-(id)getAccessLog;
-(id)getErrorLog;
-(id)getURL;
-(id)getDuration;
-(void)setRate:(id)arg1 ;
@end

