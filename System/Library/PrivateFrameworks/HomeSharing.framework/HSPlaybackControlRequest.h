/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSPlaybackControlRequest : HSRequest {

	unsigned _interfaceID;
	long long _controlCommand;

}

@property (nonatomic,readonly) long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,readonly) unsigned interfaceID;                  //@synthesize interfaceID=_interfaceID - In the implementation block
-(unsigned)interfaceID;
-(id)initWithInterfaceID:(unsigned)arg1 controlCommand:(long long)arg2 ;
-(long long)controlCommand;
@end

