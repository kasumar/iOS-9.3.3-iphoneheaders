/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualVoiceInputDeviceDescriptor;

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage {

	MRVirtualVoiceInputDeviceDescriptor* _descriptor;

}

@property (nonatomic,readonly) MRVirtualVoiceInputDeviceDescriptor * descriptor; 
-(void)dealloc;
-(unsigned long long)type;
-(MRVirtualVoiceInputDeviceDescriptor *)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
@end
