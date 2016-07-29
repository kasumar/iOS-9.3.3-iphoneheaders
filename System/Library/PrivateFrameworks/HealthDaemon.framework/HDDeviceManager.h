/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HDDaemon, NSNumber, NSObject, HDDatabaseValueCache;

@interface HDDeviceManager : NSObject {

	HDDaemon* _daemon;
	NSNumber* _deviceForNoneID;
	NSObject*<OS_dispatch_queue> _queue;
	HDDatabaseValueCache* _devicesByPersistentID;
	HDDatabaseValueCache* _deviceEntitiesByDevice;

}

@property (nonatomic,retain) HDDatabaseValueCache * devicesByPersistentID;               //@synthesize devicesByPersistentID=_devicesByPersistentID - In the implementation block
@property (nonatomic,retain) HDDatabaseValueCache * deviceEntitiesByDevice;              //@synthesize deviceEntitiesByDevice=_deviceEntitiesByDevice - In the implementation block
-(id)init;
-(id)initWithDaemon:(id)arg1 ;
-(id)deviceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntityForNoDeviceWithError:(id*)arg1 ;
-(id)deviceEntitiesForDevice:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(id)currentDeviceEntityWithError:(id*)arg1 ;
-(id)_noneDevice;
-(id)deviceEntityForDevice:(id)arg1 error:(id*)arg2 ;
-(id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(id)allDeviceEntitiesWithError:(id*)arg1 ;
-(id)dataTypesForDevice:(id)arg1 error:(id*)arg2 ;
-(HDDatabaseValueCache *)devicesByPersistentID;
-(void)setDevicesByPersistentID:(HDDatabaseValueCache *)arg1 ;
-(HDDatabaseValueCache *)deviceEntitiesByDevice;
-(void)setDeviceEntitiesByDevice:(HDDatabaseValueCache *)arg1 ;
@end

