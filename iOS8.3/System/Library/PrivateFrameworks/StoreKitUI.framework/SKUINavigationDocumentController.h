/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/IKAppNavigationController.h>

@protocol SKUINavigationDocumentDelegate;
@class SKUIClientContext, UINavigationController, NSMutableArray, NSArray, NSString;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController> {

	SKUIClientContext* _clientContext;
	id<SKUINavigationDocumentDelegate> _delegate;
	UINavigationController* _navigationController;
	UINavigationController* _overrideNavigationController;
	NSMutableArray* _stackItems;

}

@property (nonatomic,readonly) UINavigationController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                  //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUINavigationDocumentDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UINavigationController * overrideNavigationController;              //@synthesize overrideNavigationController=_overrideNavigationController - In the implementation block
@property (nonatomic,copy,readonly) NSArray * documentStackItems;                                //@synthesize stackItems=_stackItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUINavigationDocumentDelegate>)arg1 ;
-(id<SKUINavigationDocumentDelegate>)delegate;
-(UINavigationController *)navigationController;
-(void)clear;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)documents;
-(NSArray *)documentStackItems;
-(id)initWithNavigationController:(id)arg1 ;
-(id)_activeNavigationController;
-(void)_handleStackDidChange;
-(void)_unloadAllStackItems;
-(void)popAllDocuments;
-(void)pushDocument:(id)arg1 options:(id)arg2 ;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3 ;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3 ;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(void)garbageCollectDocuments;
-(void)setStackItems:(id)arg1 animated:(char)arg2 ;
-(UINavigationController *)overrideNavigationController;
-(void)setOverrideNavigationController:(UINavigationController *)arg1 ;
@end

