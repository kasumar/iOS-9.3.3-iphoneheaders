/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSString;

@interface BluetoothDevice : NSObject {

	NSString* _name;
	NSString* _address;
	BTDeviceImplRef _device;

}
-(void)dealloc;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)batteryLevel;
-(void)connect;
-(void)disconnect;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(unsigned)vendorId;
-(void)unpair;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(void)_clearName;
-(BOOL)_isNameCached;
-(unsigned)minorClass;
-(id)scoUID;
-(unsigned long long)connectedServicesCount;
-(BOOL)supportsBatteryLevel;
-(BOOL)isAccessory;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)acceptSSP:(long long)arg1 ;
-(void)startVoiceCommand;
-(void)endVoiceCommand;
-(void)setPIN:(id)arg1 ;
-(BOOL)connected;
-(unsigned long long)connectedServices;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(id)address;
-(BOOL)paired;
-(unsigned)majorClass;
-(BOOL)cloudPaired;
-(SCD_Struct_Bl2)syncSettings;
-(void)setSyncSettings:(SCD_Struct_Bl2)arg1 ;
-(unsigned)productId;
-(void)setServiceSetting:(unsigned)arg1 key:(id)arg2 value:(id)arg3 ;
-(void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2 ;
-(id)syncGroups;
-(BTDeviceImplRef)device;
-(id)getServiceSetting:(unsigned)arg1 key:(id)arg2 ;
@end

