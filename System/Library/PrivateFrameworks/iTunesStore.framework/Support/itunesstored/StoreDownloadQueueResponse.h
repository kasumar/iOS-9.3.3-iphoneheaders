/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSError, NSDictionary, NSData, NSArray, NSNumber, NSOrderedSet;

@interface StoreDownloadQueueResponse : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableOrderedSet* _downloads;
	NSError* _error;
	NSDictionary* _itemErrors;
	NSData* _keybag;
	NSArray* _rangesToLoad;
	BOOL _shouldCancelPurchaseBatch;
	BOOL _triggeredQueueCheck;
	NSNumber* _userIdentifier;

}

@property (readonly) NSOrderedSet * downloads; 
@property (retain) NSError * error; 
@property (readonly) NSData * keybag; 
@property (readonly) NSArray * rangesToLoad; 
@property (assign) BOOL shouldCancelPurchaseBatch; 
@property (assign) BOOL triggeredQueueCheck; 
@property (readonly) NSNumber * userIdentifier; 
-(id)_initStoreDownloadQueueResponse;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3 ;
-(id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 ;
-(id)initWithError:(id)arg1 userIdentifier:(id)arg2 ;
-(id)errorForItemIdentifier:(id)arg1 ;
-(NSData *)keybag;
-(NSArray *)rangesToLoad;
-(void)setShouldCancelPurchaseBatch:(BOOL)arg1 ;
-(void)setTriggeredQueueCheck:(BOOL)arg1 ;
-(BOOL)shouldCancelPurchaseBatch;
-(BOOL)triggeredQueueCheck;
-(void)dealloc;
-(id)init;
-(NSOrderedSet *)downloads;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSNumber *)userIdentifier;
@end

