/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/_ATXAppLaunchHistogram.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, _ATXDataStore;

@interface _ATXAppLaunchHistogramWithPersistentBackup : _ATXAppLaunchHistogram {

	NSObject*<OS_dispatch_source> _saveTimer;
	NSObject*<OS_dispatch_queue> _saveQueue;
	BOOL _saveInBackground;
	_ATXDataStore* _datastore;
	long long _histogramType;

}

@property (nonatomic,readonly) _ATXDataStore * datastore;              //@synthesize datastore=_datastore - In the implementation block
@property (nonatomic,readonly) long long histogramType;                //@synthesize histogramType=_histogramType - In the implementation block
@property (assign,nonatomic) BOOL saveInBackground;                    //@synthesize saveInBackground=_saveInBackground - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)_scheduleSave;
-(BOOL)removeAllHistoryForBundleId:(id)arg1 ;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 andSaveInBackground:(BOOL)arg3 ;
-(void)resetData;
-(void)addLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3 ;
-(void)removeLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3 ;
-(void)registerForRestoreNotificationsFrom:(id)arg1 ;
-(void)_cancelSaveTimer;
-(void)unregisterFromRestoreNotificationsFrom:(id)arg1 ;
-(void)receivedDataStoreResetNotification:(id)arg1 ;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 ;
-(_ATXDataStore *)datastore;
-(long long)histogramType;
-(BOOL)saveInBackground;
-(void)setSaveInBackground:(BOOL)arg1 ;
@end

