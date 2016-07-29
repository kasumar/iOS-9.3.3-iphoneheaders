/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRVehicleBluetoothDiscovery <NSObject>
@optional
-(void)bluetoothDiscoverer:(id)arg1 didDiscoverDevice:(id)arg2;
-(void)bluetoothDiscoverer:(id)arg1 didUpdateDevice:(id)arg2;
-(void)bluetoothDiscoverer:(id)arg1 didRemoveDevice:(id)arg2;

@required
-(id)viewControllerPresentingPairingForBluetoothDiscoverer:(id)arg1;

@end
