/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TSSStyle, TSKAccessController;

@interface TSDStyleWarmingOperation : NSOperation {

	TSSStyle* mStyle;
	int mProperty;
	TSKAccessController* mAccessController;

}
-(id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3 ;
-(void)warm;
-(void)main;
@end
