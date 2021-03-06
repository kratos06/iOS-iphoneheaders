/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray;

@interface TPAppDelegate : TSABaseApplicationDelegate

@property (nonatomic,readonly) NSArray * wordDocumentTypes; 
+(id)sharedDelegate;
-(id)nativeDocumentType;
-(id)templateDocumentType;
-(id)templateSFFDocumentType;
-(id)tangierEditingFormatDocumentType;
-(id)nativeSFFDocumentType;
-(id)importableDocumentTypes;
-(Class)documentRootClass;
-(id)applicationTemplateVariants;
-(id)appChartPropertyOverrides;
-(id)createCompatibilityDelegate;
-(id)documentTypeDisplayName;
-(id)templateTypeDisplayName;
-(BOOL)supportsRTL;
-(BOOL)supportsScrollingInPhoneCommentUI;
-(BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
-(BOOL)textInspectorShowsMoreSubpane;
-(id)previewImageNameForDocumentType:(id)arg1 ;
-(id)previewImageNameForNativeDocument;
-(id)previewImageNameForEncryptedNativeDocument;
-(void)p_localeChanged:(id)arg1 ;
-(id)wordDocumentTypes;
-(void)p_inputMethodsChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)applicationName;
@end

