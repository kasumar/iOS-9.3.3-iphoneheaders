/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class NSNumber, NSMutableOrderedSet, NSMutableArray, NSString, SSURLRequestProperties, NSOrderedSet;

@interface LoadDownloadQueueOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSNumber* _accountIdentifier;
	NSMutableOrderedSet* _downloads;
	BOOL _needsAuthentication;
	NSMutableArray* _rangesToLoad;
	long long _reason;
	NSString* _requestIdentifier;
	SSURLRequestProperties* _requestProperties;
	NSString* _mdSyncState;

}

@property (readonly) SSURLRequestProperties * requestProperties; 
@property (retain) NSNumber * accountIdentifier; 
@property (assign) BOOL needsAuthentication; 
@property (assign) long long reason; 
@property (copy) NSString * requestIdentifier; 
@property (readonly) NSOrderedSet * downloads; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newLoadAutomaticDownloadQueueOperation;
-(BOOL)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2 ;
-(id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 ;
-(BOOL)_runMachineDataOperationWithRequest:(id)arg1 syncState:(id*)arg2 ;
-(BOOL)_shouldSendKeyBagSync;
-(void)dealloc;
-(id)init;
-(void)run;
-(long long)reason;
-(id)_account;
-(BOOL)needsAuthentication;
-(SSURLRequestProperties *)requestProperties;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(NSString *)requestIdentifier;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(NSOrderedSet *)downloads;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setReason:(long long)arg1 ;
-(void)_handleResponse:(id)arg1 ;
@end

