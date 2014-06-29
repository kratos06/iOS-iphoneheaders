/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Library/Audio/Plug-Ins/HAL/AirTunesHAL.pdev/AirTunesHAL
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTunesHAL/AirTunesHAL-Structs.h>
#import <AirTunesHAL/WPDeviceScannerDelegate.h>

@class WPDeviceScanner;

@interface AirPlayBTLEBrowser : NSObject <WPDeviceScannerDelegate> {

	AirPlayClient* _client;
	WPDeviceScanner* _scanner;

}
-(void)deviceScannerDidUpdateState:(id)arg1 ;
-(void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)scanner:(id)arg1 foundRequestedDevices:(id)arg2 ;
-(void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3 ;
@end
