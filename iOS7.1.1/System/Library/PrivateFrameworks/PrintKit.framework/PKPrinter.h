/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet, NSMutableArray, NSArray, NSNumber;

@interface PKPrinter : NSObject {

	NSString* name;
	long long type;
	long long accessState;
	NSDictionary* printInfoSupported;
	http_s* job_http;
	NSMutableDictionary* privateData;
	NSMutableSet* mediaReady;
	NSMutableArray* rolls;
	NSMutableDictionary* specialFeedOrientation;
	NSArray* printScalingSupported;
	NSArray* mandatoryJobAttributes;
	NSString* quotaManagementURL;
	int maxPDFKBytes;
	int maxJPEGKBytes;
	int maxJPEGXDimension;
	int maxJPEGYDimension;
	int maxCopies;
	int preferred_landscape;
	bool isLocal;
	bool hasIdentifyPrinterOp;
	bool connectionShouldNotBeTrusted;
	bool isFromMCProfile;
	long long kind;

}

@property (@dynamic) long long accessState; 
@property (@dynamic,retain) NSDictionary * TXTRecord; 
@property (@dynamic,retain) NSString * hostname; 
@property (@dynamic,retain) NSNumber * port; 
@property (readonly) NSString * scheme; 
@property (readonly) NSString * name; 
@property (readonly) long long kind; 
@property (readonly) long long jobTypesSupported; 
@property (readonly) long long type; 
@property (readonly) long long accessState; 
@property (@dynamic,readonly) bool hasPrintInfoSupported; 
@property (readonly) NSDictionary * printInfoSupported; 
@property (@dynamic,readonly) bool isAdobeRGBSupported; 
@property (assign) bool isLocal; 
@property (assign) bool isFromMCProfile; 
@property (@dynamic,readonly) bool isIPPS; 
@property (@dynamic,readonly) NSString * uuid; 
@property (readonly) bool hasIdentifyPrinterOp; 
@property (readonly) bool needsSetup; 
@property (readonly) bool setupSupportsPasswordScope; 
+(bool)urfIsOptional;
+(id)requiredPDL;
+(ipp_s*)getAttributes:(const char**)arg1 count:(int)arg2 fromURI:(id)arg3 ;
+(bool)printerLookupWithName:(id)arg1 andTimeout:(double)arg2 ;
+(id)printerWithName:(id)arg1 ;
+(id)hardcodedURIs;
+(id)nameForHardcodedURI:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(void)setPort:(id)arg1 ;
-(bool)resolveWithTimeout:(int)arg1 ;
-(void)resolve;
-(void)updateType;
-(id)scheme;
-(void)setHostname:(id)arg1 ;
-(id)initWithName:(id)arg1 TXT:(id)arg2 ;
-(id)initWithName:(id)arg1 TXTRecord:(id)arg2 ;
-(id)TXTRecord;
-(void)setAccessStateFromTXT:(id)arg1 ;
-(ipp_s*)getPrinterAttributes;
-(long long)finalizeJob:(int)arg1 ;
-(ipp_s*)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3 ;
-(void)setPrivateObject:(id)arg1 forKey:(id)arg2 ;
-(id)privateObjectForKey:(id)arg1 ;
-(void)setAccessState:(long long)arg1 ;
-(void)setTXTRecord:(id)arg1 ;
-(id)hostname;
-(id)port;
-(id)localName;
-(void)dealloc;
-(id)description;
-(long long)type;
-(id)name;
-(id)location;
-(id)displayName;
-(id)printInfoSupported;
-(bool)hasPrintInfoSupported;
-(bool)knowsReadyPaperList;
-(bool)isPaperReady:(id)arg1 ;
-(id)rollReadyPaperListWithContentSize:(CGSize)arg1 forPhoto:(bool)arg2 ;
-(id)availableRollPapersPreferBorderless:(bool)arg1 ;
-(id)paperListForDuplexMode:(id)arg1 ;
-(void)cancelUnlock;
-(long long)kind;
-(long long)accessState;
-(bool)needsSetup;
-(void)unlockWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)matchedPaper:(id)arg1 preferBorderless:(bool)arg2 withDuplexMode:(id)arg3 didMatch:(bool*)arg4 ;
-(long long)startJob:(id)arg1 ofType:(id)arg2 ;
-(long long)finishJob;
-(long long)abortJob;
-(long long)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3 ;
-(long long)sendData:(const char*)arg1 ofLength:(long long)arg2 ;
-(void)validatePassCode:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(bool)setupSupportsPasswordScope;
-(void)setupWithOptions:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)showPassCodeForSetupWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)uuid;
-(bool)isLocal;
-(void)setIsLocal:(bool)arg1 ;
-(bool)isIPPS;
-(bool)isBonjour;
-(void)setIsFromMCProfile:(bool)arg1 ;
-(void)reconfirmWithForce:(bool)arg1 ;
-(id)rollFromAttrs:(ipp_s*)arg1 ;
-(bool)hasMatchingLoadedRoll:(id)arg1 ;
-(void)createMediaReadyFromAttrs:(ipp_s*)arg1 ;
-(id)rollReadyPaperListForPhotoWithContentSize:(CGSize)arg1 ;
-(id)rollReadyPaperListForDocumentWithContentSize:(CGSize)arg1 ;
-(void)aggdAppsAndPrinters;
-(void)checkOperations:(ipp_s*)arg1 ;
-(long long)jobTypesSupported;
-(long long)feedOrientation:(id)arg1 ;
-(void)identifySelf;
-(bool)isAdobeRGBSupported;
-(id)rollReadyPaperListWithContentSize:(CGSize)arg1 ;
-(bool)isFromMCProfile;
-(bool)hasIdentifyPrinterOp;
@end
