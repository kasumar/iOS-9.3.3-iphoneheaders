/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TouchRemote/TouchRemote-Structs.h>
@interface _TRUserNotification : NSObject {

	int _response;
	CFUserNotificationRef _userNotification;
	unsigned long long _responseFlags;

}

@property (nonatomic,readonly) BOOL didAccept; 
@property (nonatomic,readonly) CFUserNotificationRef CFUserNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (nonatomic,readonly) int response;                                          //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned long long responseFlags;                      //@synthesize responseFlags=_responseFlags - In the implementation block
+(id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 ;
+(id)userNotificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 isTopMost:(BOOL)arg5 dismissOnUnlock:(BOOL)arg6 ;
-(void)cancel;
-(void)show;
-(void)dealloc;
-(int)response;
-(unsigned long long)responseFlags;
-(id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(BOOL)didAccept;
-(id)textFieldValueAtIndex:(unsigned long long)arg1 ;
-(CFUserNotificationRef)CFUserNotification;
@end

