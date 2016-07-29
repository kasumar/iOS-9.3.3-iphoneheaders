/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable, NSLock;

@interface GEOURLConnectionSession : NSObject {

	CFURLConnectionSessionRef _connectionSession;
	NSMapTable* _connectionDelegates;
	NSLock* _delegateMapLock;

}
-(void)dealloc;
-(CFURLRequestRef)newCFMutableURLRequestWithURL:(id)arg1 ;
-(id)_delegateForConnection:(CFURLConnectionRef)arg1 ;
-(void)removeDelegateForConnection:(CFURLConnectionRef)arg1 ;
-(void)_createConnectionSessionWithPurgeTimeout:(int)arg1 loadWidth:(int)arg2 ;
-(id)initPersistentSessionWithTimeout:(int)arg1 loadWidth:(int)arg2 ;
-(CFURLConnectionRef)newCFURLConnectionWithRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 ;
@end

