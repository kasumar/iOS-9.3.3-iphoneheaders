/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOTileDBProtection : NSObject {

	int _currentState;
	int _notifyToken;

}
+(id)sharedObject;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)updateState;
-(void)_statusChanged;
@end

