/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _DECPredictionCacheResult : NSObject {

	unsigned long long _hits;
	unsigned long long _misses;
	NSDictionary* _predictions;

}

@property (nonatomic,readonly) unsigned long long hits;                 //@synthesize hits=_hits - In the implementation block
@property (nonatomic,readonly) unsigned long long misses;               //@synthesize misses=_misses - In the implementation block
@property (nonatomic,readonly) NSDictionary * predictions;              //@synthesize predictions=_predictions - In the implementation block
-(id)description;
-(NSDictionary *)predictions;
-(id)initWithPredictions:(id)arg1 hits:(unsigned long long)arg2 misses:(unsigned long long)arg3 ;
-(unsigned long long)hits;
-(unsigned long long)misses;
@end

