/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSMutableArray;

@interface BluetoothController : NSObject {

	NSMutableArray* _devices;
	BOOL _tetheringConnected;
	shared_ptr<ctu::Logger>* fEventLogger;

}
+(id)sharedInstance;
-(void)stopWatchingForDevices;
-(void)connectionChanged:(id)arg1 ;
-(void)addDeviceNotification:(id)arg1 ;
-(void)removeDeviceNotification:(id)arg1 ;
-(void)updateTetheringConnected;
-(void)startWatchingForDevices:(shared_ptr<ctu::Logger>*)arg1 ;
-(BOOL)tetheringConnected;
-(void)dealloc;
-(id)init;
@end
