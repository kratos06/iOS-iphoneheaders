/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSHashTable, NSError, NSDictionary;

@interface NSFileWrapperMoreIVars : NSObject {

	NSURL* contentsURL;
	BOOL contentsMustBeReadWithoutMapping;
	BOOL attributesMustBeWrittenSoNoHardLinking;
	NSHashTable* parents;
	NSError* contentsLazyReadingError;
	NSDictionary* cachedDirectoryChildrenAsDictionary;

}
@end
