/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/HNDAccessibilityManagerObserver.h>

@protocol SCATElementAutoscrolling;
@class NSString;

@interface HNDScannerAutoscroller : NSObject <HNDAccessibilityManagerObserver> {

	id<SCATElementAutoscrolling> _scrollElement;
	int _scrollDirection;

}

@property (nonatomic,retain) id<SCATElementAutoscrolling> scrollElement; 
@property (assign,nonatomic) int scrollDirection;                                     //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (nonatomic,readonly) BOOL isAutoscrolling; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2 ;
-(void)setScrollElement:(id<SCATElementAutoscrolling>)arg1 ;
-(id<SCATElementAutoscrolling>)scrollElement;
-(BOOL)canScrollInDirection:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setScrollDirection:(int)arg1 ;
-(void)stop;
-(void)resume;
-(int)scrollDirection;
-(void)pause;
-(void)increaseAutoscrollSpeed;
-(void)decreaseAutoscrollSpeed;
-(void)scrollToTop;
-(BOOL)isAutoscrolling;
@end
