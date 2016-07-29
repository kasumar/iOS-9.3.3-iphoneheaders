/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray, SSMetricsController, NSString;

@interface AnalyticsRecordingOperation : ISOperation {

	NSArray* _events;
	SSMetricsController* _metricsController;
	NSString* _eventTopicOverride;
	NSString* _appBundleId;

}

@property (nonatomic,copy) NSString * eventTopicOverride;              //@synthesize eventTopicOverride=_eventTopicOverride - In the implementation block
@property (nonatomic,copy) NSString * appBundleId;                     //@synthesize appBundleId=_appBundleId - In the implementation block
-(id)initWithMetricsEvents:(id)arg1 ;
-(void)setEventTopicOverride:(NSString *)arg1 ;
-(NSString *)eventTopicOverride;
-(void)run;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
@end

