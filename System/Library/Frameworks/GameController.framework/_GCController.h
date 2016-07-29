/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCController.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GCNamedProfile, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface _GCController : GCController <NSSecureCoding> {

	/*^block*/id _controllerPausedHandler;
	NSString* _vendorName;
	long long _playerIndex;
	id<GCNamedProfile> _profile;
	IOHIDDeviceRef _deviceRef;
	NSMutableArray* _allDeviceRefs;
	char* _deviceHIDReportBuffer;
	unsigned _service;
	unsigned long long _deviceHash;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}
+(BOOL)supportsSecureCoding;
-(IOHIDDeviceRef)deviceRef;
-(void)setProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)motion;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(id)vendorName;
-(unsigned long long)deviceHash;
-(id)profile;
-(unsigned)service;
-(void)addDeviceRefs:(id)arg1 ;
-(void)clearDeviceRef;
-(/*^block*/id)controllerPausedHandler;
-(void)setControllerPausedHandler:(/*^block*/id)arg1 ;
-(BOOL)isAttachedToDevice;
-(id)deviceRefs;
-(char*)hidReportBuffer;
-(void)setHidReportBuffer:(char*)arg1 ;
-(BOOL)isEqualToController:(id)arg1 ;
-(void)removeDeviceRef:(IOHIDDeviceRef)arg1 ;
-(id)gamepad;
-(id)extendedGamepad;
-(id)initWithDeviceRef:(IOHIDDeviceRef)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)handlerQueue;
-(void)setHandlerQueue:(id)arg1 ;
@end

