/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@interface MSResetServerProtocol : MSStreamsProtocol {

	MSRSPCContext* _context;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)_coreProtocolDidFinishError:(id)arg1 ;
-(void)resetServerState;
-(void)abort;
@end

