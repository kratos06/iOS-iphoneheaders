/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MultipeerConnectivity/MCNearbyServiceAdvertiserDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol MCAdvertiserAssistantDelegate;
@class MCSession, NSDictionary, NSString, MCPeerID, MCNearbyServiceAdvertiser, NSMutableArray, NSBundle;

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate, UIAlertViewDelegate> {

	bool _isAdvertising;
	bool _wasAdvertising;
	<MCAdvertiserAssistantDelegate>* _delegate;
	MCSession* _session;
	NSDictionary* _discoveryInfo;
	NSString* _serviceType;
	MCPeerID* _myPeerID;
	MCNearbyServiceAdvertiser* _advertiser;
	NSMutableArray* _invitationsBuffer;
	/*^block*/ id _invitationHandlerForPresentedAlert;
	NSString* _appName;
	NSBundle* _frameworkBundle;

}

@property (assign,nonatomic) <MCAdvertiserAssistantDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MCSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSDictionary * discoveryInfo;                              //@synthesize discoveryInfo=_discoveryInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) MCPeerID * myPeerID;                                       //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,retain) MCNearbyServiceAdvertiser * advertiser;                  //@synthesize advertiser=_advertiser - In the implementation block
@property (nonatomic,retain) NSMutableArray * invitationsBuffer;                      //@synthesize invitationsBuffer=_invitationsBuffer - In the implementation block
@property (nonatomic,copy) id invitationHandlerForPresentedAlert;                     //@synthesize invitationHandlerForPresentedAlert=_invitationHandlerForPresentedAlert - In the implementation block
@property (nonatomic,readonly) NSString * appName;                                    //@synthesize appName=_appName - In the implementation block
@property (assign,nonatomic) bool isAdvertising;                                      //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign,nonatomic) bool wasAdvertising;                                     //@synthesize wasAdvertising=_wasAdvertising - In the implementation block
@property (nonatomic,retain) NSBundle * frameworkBundle;                              //@synthesize frameworkBundle=_frameworkBundle - In the implementation block
-(id)session;
-(void)setSession:(id)arg1 ;
-(id)myPeerID;
-(void)setFrameworkBundle:(id)arg1 ;
-(id)discoveryInfo;
-(id)advertiser;
-(/*^block*/ id)invitationHandlerForPresentedAlert;
-(id)invitationsBuffer;
-(void)setInvitationHandlerForPresentedAlert:(/*^block*/ id)arg1 ;
-(id)appName;
-(void)presentNextInvitation;
-(void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(/*^block*/ id)arg4 ;
-(id)initWithServiceType:(id)arg1 discoveryInfo:(id)arg2 session:(id)arg3 ;
-(void)setDiscoveryInfo:(id)arg1 ;
-(void)setMyPeerID:(id)arg1 ;
-(void)setAdvertiser:(id)arg1 ;
-(void)setInvitationsBuffer:(id)arg1 ;
-(bool)isAdvertising;
-(void)setIsAdvertising:(bool)arg1 ;
-(bool)wasAdvertising;
-(void)setWasAdvertising:(bool)arg1 ;
-(id)frameworkBundle;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)start;
-(void)willPresentAlertView:(id)arg1 ;
-(void)stop;
-(void)setServiceType:(id)arg1 ;
-(id)serviceType;
@end

