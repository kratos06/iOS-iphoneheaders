/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityTextMarker : NSObject {

	AXObjectCache* _cache;
	TextMarkerData* _textMarkerData;

}
+(id)textMarkerWithVisiblePosition:(VisiblePosition*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)description;
-(id)initWithData:(id)arg1 cache:(AXObjectCache*)arg2 ;
-(id).cxx_construct;
-(id)initWithTextMarker:(TextMarkerData*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)initWithData:(id)arg1 accessibilityObject:(WebAccessibilityObjectWrapper*)arg2 ;
-(id)dataRepresentation;
-(VisiblePosition*)visiblePosition;
@end
