/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/NSCopying.h>
#import <TextInput/NSSecureCoding.h>

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {

	vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >* _strokes;
	char _continuePreviousStroke;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)numberOfStrokes;
-(void)addPoint:(CGPoint)arg1 ;
-(unsigned)numberOfPointsInStrokeAtIndex:(unsigned)arg1 ;
-(CGPoint)pointAtIndex:(unsigned)arg1 inStrokeAtIndex:(unsigned)arg2 ;
-(void)removeStrokeAtIndex:(unsigned)arg1 ;
-(void)endStroke;
-(void)removeAllStrokes;
-(unsigned)totalNumberOfPoints;
@end
