/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSDictionary, NSArray;

@interface TCFontFamily : NSObject {

	NSDictionary* _namesByLanguage;
	NSArray* _members;

}

@property (nonatomic,readonly) NSDictionary * namesByLanguage;              //@synthesize namesByLanguage=_namesByLanguage - In the implementation block
@property (nonatomic,readonly) NSArray * members;                           //@synthesize members=_members - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)equivalentDictionary;
-(NSDictionary *)namesByLanguage;
-(NSArray *)members;
-(id)initWithNamesByLanguage:(id)arg1 members:(id)arg2 ;
-(id)bestMatchForStyling:(TCFontStyling)arg1 ;
-(id)memberForPSName:(id)arg1 ;
-(id)memberForFullName:(id)arg1 ;
-(id)variantByAddingItalicToFont:(id)arg1 ;
-(id)variantByAddingBoldToFont:(id)arg1 ;
-(id)variantByRemovingItalicFromFont:(id)arg1 ;
-(char)fontIsDesignatedBold:(id)arg1 ;
-(id)variantByRemovingBoldFromFont:(id)arg1 ;
@end

