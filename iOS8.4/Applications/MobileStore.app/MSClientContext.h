/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileStore.app/MobileStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIClientContext.h>

@class NSBundle, SKUILocalizedStringDictionary;

@interface MSClientContext : SKUIClientContext {

	NSBundle* _bundle;
	SKUILocalizedStringDictionary* _localizedStrings;

}
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(id)localizedAlertWithError:(id)arg1 ;
@end

