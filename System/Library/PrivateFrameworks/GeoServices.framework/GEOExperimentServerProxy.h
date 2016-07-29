/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOABExperimentResponse;


@protocol GEOExperimentServerProxy <NSObject>
@property (assign,nonatomic) id<GEOExperimentServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOABExperimentResponse * experimentsInfo; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(id)initWithDelegate:(id)arg1;
-(void)forceUpdate;
-(GEOABExperimentResponse *)experimentsInfo;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;

@end

