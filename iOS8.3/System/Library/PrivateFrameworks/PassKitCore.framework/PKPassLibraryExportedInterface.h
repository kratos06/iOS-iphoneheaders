/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassLibraryExportedInterface
@required
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
-(void)removingPassesOfType:(unsigned)arg1 didUpdateWithProgress:(double)arg2;
-(void)removingPassesOfType:(unsigned)arg1 didFinishWithSuccess:(char)arg2;
-(void)passAdded:(id)arg1;
-(void)passUpdated:(id)arg1;
-(void)passRemoved:(id)arg1;

@end

