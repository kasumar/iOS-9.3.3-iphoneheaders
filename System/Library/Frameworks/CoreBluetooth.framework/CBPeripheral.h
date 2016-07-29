/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBPeer.h>

@protocol CBPeripheralDelegate;
@class CBCentralManager, NSMutableArray, NSMutableDictionary, NSString, NSNumber, NSArray;

@interface CBPeripheral : CBPeer {

	CBCentralManager* _centralManager;
	struct {
		unsigned didUpdateName : 1;
		unsigned didModifyServices : 1;
		unsigned didReadRSSI : 1;
		unsigned didUpdateRSSI : 1;
		unsigned didDiscoverServices : 1;
		unsigned didDiscoverIncludedServices : 1;
		unsigned didDiscoverCharacteristics : 1;
		unsigned didUpdateCharacteristicValue : 1;
		unsigned didWriteCharacteristicValue : 1;
		unsigned didNotifyCharacteristicValue : 1;
		unsigned didDiscoverDescriptors : 1;
		unsigned didUpdateDescriptorValue : 1;
		unsigned didWriteDescriptorValue : 1;
		unsigned didReceiveTimeSync : 1;
	}  _delegateFlags;
	NSMutableArray* _services;
	NSMutableDictionary* _attributes;
	BOOL _isConnectedToSystem;
	id<CBPeripheralDelegate> _delegate;
	NSString* _name;
	NSNumber* _RSSI;
	long long _state;

}

@property (assign,nonatomic) id<CBPeripheralDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * RSSI;                                          //@synthesize RSSI=_RSSI - In the implementation block
@property (assign) long long state;                                          //@synthesize state=_state - In the implementation block
@property (retain) NSArray * services;                                       //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) BOOL isConnectedToSystem;                     //@synthesize isConnectedToSystem=_isConnectedToSystem - In the implementation block
-(void)setDelegate:(id<CBPeripheralDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<CBPeripheralDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(id)initWithCentralManager:(id)arg1 info:(id)arg2 ;
-(void)handleDisconnection;
-(void)setOrphan;
-(void)setAttribute:(id)arg1 forHandle:(id)arg2 ;
-(void)handleSuccessfulConnection:(id)arg1 ;
-(void)handleFailedConnection;
-(void)handleConnectionStateUpdated:(BOOL)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)removeAttributeForHandle:(id)arg1 ;
-(id)attributeForHandle:(id)arg1 ;
-(void)sendMsg:(int)arg1 requiresConnected:(BOOL)arg2 args:(id)arg3 ;
-(void)handleNameUpdated:(id)arg1 ;
-(void)handleServicesChanged:(id)arg1 ;
-(void)handleRSSIUpdated:(id)arg1 ;
-(void)handleServicesDiscovered:(id)arg1 ;
-(void)handleTimeSyncResponse:(id)arg1 ;
-(void)handleServiceIncludedServicesDiscovered:(id)arg1 ;
-(void)handleServiceCharacteristicsDiscovered:(id)arg1 ;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)handleCharacteristicValueWritten:(id)arg1 ;
-(void)handleCharacteristicValueNotifying:(id)arg1 ;
-(void)handleCharacteristicDescriptorsDiscovered:(id)arg1 ;
-(void)handleDescriptorValueUpdated:(id)arg1 ;
-(void)handleDescriptorValueWritten:(id)arg1 ;
-(void)setRSSI:(NSNumber *)arg1 ;
-(void)invalidateAllAttributes;
-(void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 delegateFlag:(BOOL)arg5 ;
-(void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)discoverIncludedServices:(id)arg1 forService:(id)arg2 ;
-(void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)writeValue:(id)arg1 forDescriptor:(id)arg2 ;
-(void)getTimeSyncData;
-(NSNumber *)RSSI;
-(BOOL)isConnectedToSystem;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
-(BOOL)hasTag:(id)arg1 ;
-(void)untag:(id)arg1 ;
-(void)tag:(id)arg1 ;
-(void)discoverDescriptorsForCharacteristic:(id)arg1 ;
-(void)readValueForDescriptor:(id)arg1 ;
-(unsigned long long)maximumWriteValueLengthForType:(long long)arg1 ;
-(void)readValueForCharacteristic:(id)arg1 ;
-(void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)readRSSI;
-(void)discoverCharacteristics:(id)arg1 forService:(id)arg2 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(long long)arg3 ;
-(void)discoverServices:(id)arg1 ;
@end

