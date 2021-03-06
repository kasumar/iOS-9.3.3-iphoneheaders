/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CECInterface.h>

@class NSMutableDictionary;

@interface CECFakeInterface : CECInterface {

	NSMutableDictionary* _properties;

}
+(id)defaultTVProperties;
+(id)defaultPlaybackDeviceProperties;
-(void)dealloc;
-(BOOL)isValid;
-(id)properties;
-(id)initWithInterfaceListener:(id)arg1 properties:(id)arg2 ;
-(BOOL)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)pingTo:(unsigned char)arg1 acknowledged:(BOOL*)arg2 error:(id*)arg3 ;
-(void)fakePropertiesChanged:(id)arg1 ;
-(void)fakeTerminated;
@end

