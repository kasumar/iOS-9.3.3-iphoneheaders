/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel, OS_dispatch_data;
@class SFUCryptoKey, NSArray, NSObject, NSString;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	SFUCryptoKey* _decryptionKey;
	NSArray* _blockInfos;
	NSObject*<OS_dispatch_data> _holdData;
	char* _iv;
	unsigned long long _ivRead;
	CCCryptorRef _cryptor;
	unsigned long long _initialBytesIgnored;
	unsigned long long _remainingBlockSize;
	unsigned long long _nextBlockIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 blockInfos:(id)arg3 ;
-(void)_readBlocksWithHandler:(/*^block*/id)arg1 ;
-(void)_resetCryptor;
-(void)dealloc;
-(void)close;
@end

