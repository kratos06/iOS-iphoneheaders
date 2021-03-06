/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSArray, NSString;

@interface MFComposeRecipientGroup : MFComposeRecipient {

	NSArray* _children;
	NSString* _displayString;

}
-(id)placeholderName;
-(id)sortedChildren;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(void)_populateSortedChildren;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(id)address;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)displayString;
-(id)label;
-(BOOL)isGroup;
-(BOOL)isRemovableFromSearchResults;
-(id)compositeName;
-(id)commentedAddress;
-(id)unlocalizedLabel;
-(void*)record;
-(int)recordID;
-(int)property;
-(id)children;
@end

