/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDHint.h>

@class NSNumber, TSTLayout;

@interface TSTLayoutHint : NSObject <TSDHint> {

	BOOL mIsValid;
	BOOL mHorizontal;
	SCD_Struct_TS496 mCellRange;
	SCD_Struct_TS266 mCacheHintID;
	NSNumber* mPartitioningPass;
	unsigned mPartitionPosition;
	CGSize mMaximumSize;
	CGSize mEffectiveSize;
	TSTLayout* mLayout;

}

@property (assign,nonatomic) BOOL isValid; 
@property (assign,nonatomic) SCD_Struct_TS497 cellRange; 
@property (assign,nonatomic) SCD_Struct_TS266 cacheHintID; 
@property (nonatomic,retain) NSNumber * partitioningPass; 
@property (assign,nonatomic) unsigned partitionPosition; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) CGSize effectiveSize; 
@property (assign,nonatomic) TSTLayout * layout; 
@property (assign,nonatomic) BOOL horizontal; 
+(Class)archivedHintClass;
-(void)saveToArchive:(LayoutHintArchive*)arg1 ;
-(BOOL)overlapsWithSelection:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(BOOL)isFirstHint;
-(SCD_Struct_TS497)cellRange;
-(SCD_Struct_TS266)cacheHintID;
-(unsigned)partitionPosition;
-(void)setCellRange:(SCD_Struct_TS497)arg1 ;
-(void)setCacheHintID:(SCD_Struct_TS266)arg1 ;
-(void)setPartitionPosition:(unsigned)arg1 ;
-(id)initWithRange:(SCD_Struct_TS497)arg1 hintId:(SCD_Struct_TS266)arg2 partitionPosition:(unsigned)arg3 maximumSize:(CGSize)arg4 effectiveSize:(CGSize)arg5 layout:(id)arg6 validity:(BOOL)arg7 horizontal:(BOOL)arg8 ;
-(void)setPartitioningPass:(id)arg1 ;
-(void)setEffectiveSize:(CGSize)arg1 ;
-(id)partitioningPass;
-(oneway void)release;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(id)layout;
-(void)setLayout:(id)arg1 ;
-(id).cxx_construct;
-(void)setHorizontal:(BOOL)arg1 ;
-(BOOL)horizontal;
-(CGSize)effectiveSize;
-(void)setIsValid:(BOOL)arg1 ;
-(CGSize)maximumSize;
-(id)initWithArchive:(const LayoutHintArchive*)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
@end

