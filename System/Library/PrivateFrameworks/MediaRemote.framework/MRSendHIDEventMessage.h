/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendHIDEventMessage : MRProtocolMessage {

	IOHIDEventRef _event;

}

@property (nonatomic,readonly) IOHIDEventRef event; 
-(void)dealloc;
-(id)description;
-(unsigned long long)type;
-(IOHIDEventRef)event;
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 ;
@end

