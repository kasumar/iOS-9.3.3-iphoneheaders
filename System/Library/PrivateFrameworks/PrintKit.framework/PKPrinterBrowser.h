/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPrinterBrowserDelegate, OS_dispatch_queue;
#import <PrintKit/PrintKit-Structs.h>
@class NSMutableDictionary, NSFileHandle, NSMutableArray, NSObject;

@interface PKPrinterBrowser : NSObject {

	id<PKPrinterBrowserDelegate> delegate;
	DNSServiceRef_tRef mainBrowserRef;
	DNSServiceRef_tRef ippBrowserRef;
	DNSServiceRef_tRef ippsBrowserRef;
	DNSServiceRef_tRef localippBrowserRef;
	DNSServiceRef_tRef localippsBrowserRef;
	NSMutableDictionary* printers;
	NSMutableDictionary* printersByUUID;
	NSFileHandle* handle;
	unsigned char originalCellFlag;
	unsigned char originalWifiFlag;
	NSMutableArray* pendingList;
	NSObject*<OS_dispatch_queue> printersQueue;

}

@property (nonatomic,retain) NSMutableDictionary * printers; 
@property (nonatomic,retain) NSMutableDictionary * printersByUUID; 
@property (nonatomic,retain) NSFileHandle * handle; 
@property (assign,nonatomic) id<PKPrinterBrowserDelegate> delegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> printersQueue; 
@property (nonatomic,retain) NSMutableArray * pendingList; 
+(id)browserWithDelegate:(id)arg1 ;
-(void)setDelegate:(id<PKPrinterBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPrinterBrowserDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setHandle:(NSFileHandle *)arg1 ;
-(NSFileHandle *)handle;
-(void)setPrintersQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPendingList:(NSMutableArray *)arg1 ;
-(void)setPrinters:(NSMutableDictionary *)arg1 ;
-(void)setPrintersByUUID:(NSMutableDictionary *)arg1 ;
-(void)queryHardcodedPrinters;
-(NSMutableDictionary *)printers;
-(void)addBlockToPendingList:(/*^block*/id)arg1 ;
-(void)removePrinter:(id)arg1 ;
-(NSMutableDictionary *)printersByUUID;
-(NSMutableArray *)pendingList;
-(NSObject*<OS_dispatch_queue>)printersQueue;
-(void)addLimboPrinter:(id)arg1 local:(BOOL)arg2 ;
-(void)addWithPrinterURI:(id)arg1 andBonjourURI:(id)arg2 andDisplayName:(id)arg3 isMCProfile:(BOOL)arg4 ;
-(void)addQueryResult:(id)arg1 toPrinter:(id)arg2 ;
-(void)reissueTXTQuery:(id)arg1 ;
-(void)addWithPrinterURI:(id)arg1 andDisplayName:(id)arg2 isMCProfile:(BOOL)arg3 ;
-(void)browseCallback:(unsigned)arg1 interface:(unsigned)arg2 name:(const char*)arg3 regType:(const char*)arg4 domain:(const char*)arg5 ;
-(void)browseLocalCallback:(unsigned)arg1 interface:(unsigned)arg2 name:(const char*)arg3 regType:(const char*)arg4 domain:(const char*)arg5 ;
-(void)queryCallback:(int)arg1 flags:(unsigned)arg2 fullName:(const char*)arg3 rdlen:(unsigned short)arg4 rdata:(const void*)arg5 ;
@end

