/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject> {

	ObjectStorage<WebKit::WebPageGroup> _pageGroup;

}

@property (readonly) OpaqueWKPageGroupRef _pageGroupRef; 
@property (assign) BOOL allowsJavaScript; 
@property (assign) BOOL allowsPlugIns; 
@property (assign) BOOL privateBrowsingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(OpaqueWKPageGroupRef)_pageGroupRef;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(Object*)_apiObject;
-(void)removeAllUserScripts;
-(BOOL)allowsJavaScript;
-(void)setAllowsJavaScript:(BOOL)arg1 ;
-(BOOL)allowsJavaScriptMarkup;
-(void)setAllowsJavaScriptMarkup:(BOOL)arg1 ;
-(BOOL)allowsPlugIns;
-(void)setAllowsPlugIns:(BOOL)arg1 ;
-(BOOL)privateBrowsingEnabled;
-(void)setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(BOOL)arg5 ;
-(void)removeAllUserStyleSheets;
-(void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6 ;
@end
