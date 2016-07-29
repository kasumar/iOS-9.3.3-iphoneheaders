/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _ATXAppLaunchHistogramManager : NSObject {

	NSMutableDictionary* _histograms;
	BOOL _persistentStore;

}
+(id)sharedInstance;
+(void)resetSharedInstance;
-(id)init;
-(id)histogramForLaunchType:(long long)arg1 ;
-(id)initAndPersist:(BOOL)arg1 ;
-(id)initWithPersistentStore;
-(id)initWithInMemoryStore;
@end

