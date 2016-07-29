/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/XPCClient.h>

@class NSMutableArray;

@interface PurchaseManagerClient : XPCClient {

	BOOL _finishesPurchases;
	NSMutableArray* _purchases;
	long long _uniqueIdentifier;

}

@property (assign) BOOL finishesPurchases; 
@property (assign) long long uniqueIdentifier; 
@property (readonly) long long URLBagType; 
-(id)initWithInputConnection:(id)arg1 ;
-(void)sendResponse:(id)arg1 forPurchases:(id)arg2 ;
-(void)sendResponses:(id)arg1 ;
-(void)ackConnection;
-(BOOL)finishesPurchases;
-(void)sendError:(id)arg1 forPurchases:(id)arg2 ;
-(void)setFinishesPurchases:(BOOL)arg1 ;
-(void)dealloc;
-(void)sendResponse:(id)arg1 ;
-(long long)uniqueIdentifier;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(long long)URLBagType;
@end

