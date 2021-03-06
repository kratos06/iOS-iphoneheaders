/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)main;
-(id)initWithClientContext:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)_authorsWithResponseDictionary:(id)arg1 ;
-(id)outputBlock;
-(id)_lookupResponseForMissingAuthors:(id)arg1 error:(id*)arg2 ;
@end

