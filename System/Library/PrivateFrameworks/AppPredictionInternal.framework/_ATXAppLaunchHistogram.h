/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_ATXAppLaunchHistogramInterface.h>

@protocol OS_dispatch_queue;
@class NSDictionary, _ATXTimeHistogram, NSMutableDictionary, NSObject;

@interface _ATXAppLaunchHistogram : NSObject <NSSecureCoding, _ATXAppLaunchHistogramInterface> {

	NSDictionary* _parameters;
	double _launchThreshold;
	_ATXTimeHistogram* _histogram;
	unsigned _maxEventId;
	NSMutableDictionary* _bundleIdToEventId;
	NSMutableDictionary* _eventIdToBundleId;
	long long _secondsPerLocaltimeInterval;
	NSObject*<OS_dispatch_queue> _histogramQueue;
	NSObject*<OS_dispatch_queue> _bundleIdQueue;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(BOOL)removeAllHistoryForBundleId:(id)arg1 ;
-(id)initWithTimeHistogram:(id)arg1 ;
-(id)initWithTimeHistogram:(id)arg1 bundleIdToEventId:(id)arg2 eventIdToBundleId:(id)arg3 maxEventId:(unsigned)arg4 ;
-(unsigned short)_localTimeWithDate:(id)arg1 timeZone:(id)arg2 ;
-(unsigned)_eventIdforBundleId:(id)arg1 ;
-(void)removeMappingForBundleId:(id)arg1 ;
-(unsigned short)_localTimeWithDate:(id)arg1 ;
-(double)smoothRatio:(double)arg1 denom:(double)arg2 ;
-(void)decayByFactor:(double)arg1 ;
-(void)decayWithHalfLife:(double)arg1 ;
-(void)resetData;
-(void)addLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3 ;
-(void)removeLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3 ;
-(double)launchPopularityWithBundleId:(id)arg1 date:(id)arg2 ;
-(double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2 ;
-(double)overallLaunchPopularityForBundleId:(id)arg1 ;
-(BOOL)bundleHasBeenLaunched:(id)arg1 ;
-(void)verifyDataIntegrity;
-(void)swapWithCoder:(id)arg1 ;
@end

