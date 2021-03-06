/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSURL;

@interface ASURLConnection : NSObject {

	NSDate* _lastDownloadedDate;
	NSURL* _remoteURL;
	double _timeout;

}

@property (assign,nonatomic) double timeout;                           //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSDate * lastDownloadedDate;              //@synthesize lastDownloadedDate=_lastDownloadedDate - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                        //@synthesize remoteURL=_remoteURL - In the implementation block
-(id)initWithRemoteURL:(id)arg1 ;
-(void)setLastDownloadedDate:(id)arg1 ;
-(bool)resource:(id*)arg1 lastModifiedAtDate:(id*)arg2 error:(id*)arg3 ;
-(id)lastDownloadedDate;
-(id)_requestWithHTTPMethod:(id)arg1 ;
-(id)_sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3 ;
-(id)_errorForConnectionError:(id)arg1 ;
-(id)_lastModifiedDateFromResponse:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)dealloc;
-(void)setRemoteURL:(id)arg1 ;
-(id)remoteURL;
@end

