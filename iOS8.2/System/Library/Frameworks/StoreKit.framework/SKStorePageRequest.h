/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject {

	int _pageStyle;
	NSDictionary* _productParameters;
	NSURL* _productURL;

}

@property (assign,nonatomic) int productPageStyle;                        //@synthesize pageStyle=_pageStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * productParameters;              //@synthesize productParameters=_productParameters - In the implementation block
@property (nonatomic,copy) NSURL * productURL;                            //@synthesize productURL=_productURL - In the implementation block
-(void)dealloc;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)productPageStyle;
-(void)setProductPageStyle:(int)arg1 ;
-(NSURL *)productURL;
-(NSDictionary *)productParameters;
-(void)setProductParameters:(NSDictionary *)arg1 ;
-(void)setProductURL:(NSURL *)arg1 ;
@end

