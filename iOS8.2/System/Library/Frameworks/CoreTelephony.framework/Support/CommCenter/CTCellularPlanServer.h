/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <CommCenter/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface CTCellularPlanServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* fXpcListener;
	NSMutableArray* fConnections;
	NSMutableArray* fConnectionsInPurchaseFlow;
	queue* fQueue;
	shared_ptr<ctu::Logger>* fLogger;
	char fIsDataPlanCapable;
	shared_ptr<CellularPlanBootstrapAssertion>* fBootstrapAssertion;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServerInstance;
+(void)initializeServer;
-(void)sendSubscriptionsToConnections:(id)arg1 isUpdate:(char)arg2 ;
-(void)setDataPlanCapable:(char)arg1 ;
-(void)logFn:(const char*)arg1 format:(id)arg2 ;
-(void)setUserInPurchaseFlow:(char)arg1 withConnection:(id)arg2 ;
-(void)fetchNewProfilesWithNewPlanCompletion:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(id)initWithMachServiceName:(id)arg1 andQueue:(queue*)arg2 ;
-(void)sendSubscriptionsToConnections_sync:(id)arg1 isUpdate:(char)arg2 ;
-(char)isCapable;
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)isNewDataPlanCapable:(/*^block*/id)arg1 ;
-(void)subscriptionDetailsAndUpdateIfNeeded:(char)arg1 ;
-(void)signIdMapForSessionId:(id)arg1 WithCompletion:(/*^block*/id)arg2 latitude:(id)arg3 longitude:(id)arg4 ;
-(void)setActivePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(char)arg2 ;
-(void)getDeviceInfo:(/*^block*/id)arg1 ;
-(void)getCurrentPlanType:(/*^block*/id)arg1 ;
@end

