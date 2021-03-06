/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVPlayerController;

@interface AVRemoteCommandController : NSObject {

	AVPlayerController* _playerController;

}

@property (nonatomic,retain) AVPlayerController * playerController; 
-(long long)_handleRemoteCommandEvent:(id)arg1 ;
-(void)_updateRegisteredRemoteCommandEnabledStates;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
@end

