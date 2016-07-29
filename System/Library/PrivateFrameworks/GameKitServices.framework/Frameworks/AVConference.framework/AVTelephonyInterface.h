/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTelephonyInterfaceDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface AVTelephonyInterface : NSObject {

	id _weakSelf;
	id<AVTelephonyInterfaceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	CTServerConnectionRef _connection;

}

@property (assign) id<AVTelephonyInterfaceDelegate> delegate; 
-(void)setDelegate:(id<AVTelephonyInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVTelephonyInterfaceDelegate>)delegate;
-(void)unregisterForNotifications;
-(void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2 ;
-(void)handleVocoderNotificationWithInfo:(id)arg1 ;
-(id)translateVocoderTypeToCoreAudioType:(id)arg1 ;
-(BOOL)registerForNotifications;
@end
