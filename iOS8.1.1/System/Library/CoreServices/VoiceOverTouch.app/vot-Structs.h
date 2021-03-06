/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSData, NSMutableDictionary;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __AXUIElement* AXUIElementRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFString* CFStringRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPath* CGPathRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	unsigned count;
	double delay;
	double lastTime;
	BOOL connected;
} SCD_Struct_VO14;

typedef struct VOTTextMarkerRange {
	NSData* startMarker;
	NSData* endMarker;
} VOTTextMarkerRange;

typedef struct SCRCMathAverageValue {
	unsigned samples;
	double fifo[50];
	int fifoIndex;
	double sum;
	double average;
	double current;
} SCRCMathAverageValue;

typedef struct __AXObserver* AXObserverRef;

typedef struct {
	int direction;
	unsigned long long count;
	double continuityDistance;
	double distanceTraveled;
	CGPoint firstCountPoint;
} SCD_Struct_VO18;

typedef struct {
	unsigned char general;
	BOOL showGeneral;
	NSMutableDictionary* generalDict;
} SCD_Struct_VO19;

