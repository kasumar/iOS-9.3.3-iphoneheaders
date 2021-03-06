/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRGameControllerPropertiesMessage : MRProtocolMessage {

	void* _properties;

}

@property (nonatomic,readonly) void* properties; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(void)dealloc;
-(unsigned long long)type;
-(void*)properties;
-(unsigned long long)controllerID;
-(id)initWithGameControllerProperties:(void*)arg1 controllerID:(unsigned long long)arg2 ;
@end

