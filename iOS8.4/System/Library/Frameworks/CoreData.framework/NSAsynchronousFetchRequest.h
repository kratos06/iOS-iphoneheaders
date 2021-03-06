/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {

	NSFetchRequest* _fetchRequest;
	id _requestCompletionBlock;
	long long _estimatedResultCount;

}

@property (readonly) NSFetchRequest * fetchRequest;                       //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (readonly) id completionBlock;                                  //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (assign,nonatomic) long long estimatedResultCount;              //@synthesize estimatedResultCount=_estimatedResultCount - In the implementation block
-(long long)estimatedResultCount;
-(id)initWithFetchRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setEstimatedResultCount:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)completionBlock;
-(NSFetchRequest *)fetchRequest;
-(unsigned long long)requestType;
@end

