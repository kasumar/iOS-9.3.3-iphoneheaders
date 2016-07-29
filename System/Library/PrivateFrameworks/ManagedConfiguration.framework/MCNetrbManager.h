/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class RadiosPreferences;

@interface MCNetrbManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	BOOL _needStateUpdate;
	RadiosPreferences* _radioPrefs;

}
+(id)sharedManager;
-(void)cellDataChangedNotification:(id)arg1 ;
-(void)attachMIS;
-(void)authenticate;
-(void)stopService;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)detachMIS;
-(BOOL)didUserPreventData;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(id)init;
-(void)setState:(int)arg1 ;
@end

