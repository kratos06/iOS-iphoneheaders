/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, NSArray;

@interface SAMovieV2TheaterListSnippet : SAUISnippet

@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSArray * theaterListCells; 
@property (nonatomic,copy) NSString * title; 
+(id)theaterListSnippet;
+(id)theaterListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)theaterListCells;
-(void)setTheaterListCells:(NSArray *)arg1 ;
@end

