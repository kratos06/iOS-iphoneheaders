/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFModernAtomViewResembling <NSObject>
@property (assign,nonatomic) bool isPrimaryAddressAtom; 
@property (assign,nonatomic) bool hidesVIPIndicator; 
@property (assign,nonatomic) bool separatorHidden; 
@property (assign,nonatomic) bool separatorIsLeftAligned; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont; 
@required
-(unsigned long long)presentationOptions;
-(bool)isPrimaryAddressAtom;
-(bool)separatorHidden;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
-(void)setIsPrimaryAddressAtom:(bool)arg1;
-(bool)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(bool)arg1;
-(bool)separatorIsLeftAligned;
-(void)setSeparatorIsLeftAligned:(bool)arg1;
-(void)setPresentationOptions:(unsigned long long)arg1;
-(double)scale;
-(UIEdgeInsets*)edgeInsets;
-(void)setScale:(double)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(CGPoint*)baselinePoint;
-(id)titleFont;
-(void)setSeparatorHidden:(bool)arg1;
-(void)setTitleFont:(id)arg1;
@end

