/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>
#import <assistivetouchd/SCATElementProvider.h>

@class NSArray, NSString;

@interface SCATStaticElementProvider : NSArray <SCATElementProvider> {

	NSArray* _elements;

}

@property (nonatomic,retain) NSArray * elements;                    //@synthesize elements=_elements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL providesElements; 
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)initWithElements:(id)arg1 ;
-(BOOL)providesElements;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(BOOL)containsElement:(id)arg1 ;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end

