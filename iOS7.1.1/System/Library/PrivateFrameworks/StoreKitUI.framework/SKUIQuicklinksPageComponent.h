/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <StoreKitUI/SSMetricsEventFieldProvider.h>

@class NSArray, NSString;

@interface SKUIQuicklinksPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _links;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * links;               //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)title;
-(id)links;
-(void).cxx_destruct;
-(id)initWithCustomPageContext:(id)arg1 ;
-(long long)componentType;
-(id)valueForMetricsField:(id)arg1 ;
-(id)metricsElementName;
-(void)_setLinksWithLinksArray:(id)arg1 context:(id)arg2 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
@end

