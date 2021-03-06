/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, GEOProxyClient, NSMutableSet;

@interface GEOProxyClientRegistry : NSObject {

	NSLock* _lock;
	GEOProxyClient* _currentComposite;
	NSMutableSet* _currentSet;

}
+(id)sharedRegistry;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)enableRegistry;
-(id)compositeClient;
-(void)_updateComposite;
@end

