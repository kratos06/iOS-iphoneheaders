/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountCredential, NSString;

@interface SUScriptAppleAccountCredential : SUScriptObject {

	ACAccountCredential* _credential;

}

@property (readonly) NSString * oauthToken; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithACAccountCredential:(id)arg1 ;
-(id)oauthToken;
@end

