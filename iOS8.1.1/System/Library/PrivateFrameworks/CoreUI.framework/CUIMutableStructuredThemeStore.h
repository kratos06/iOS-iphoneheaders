/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIStructuredThemeStore.h>

@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore {

	NSString* _identifier;
	NSMutableDictionary* _memoryStore;
	NSMutableDictionary* _nameIdentifierStore;
	int _maxNameIdentifier;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(id)imagesWithName:(id)arg1 ;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2 ;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3 ;
-(id)renditionWithKey:(const renditionkeytoken*)arg1 ;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 ;
-(const renditionkeyfmt*)keyFormat;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 ;
-(void)clearRenditionCache;
-(long long)maximumRenditionKeyTokenCount;
-(BOOL)usesCUISystemThemeRenditionKey;
-(id)allImageNames;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1 cursorHotSpot:(CGPoint*)arg2 ;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1 isFPO:(BOOL*)arg2 ;
@end
