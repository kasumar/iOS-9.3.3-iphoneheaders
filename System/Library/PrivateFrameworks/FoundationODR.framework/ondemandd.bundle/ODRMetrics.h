/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODRMetrics : NSObject {

	double _lastManifestReportTimeStamp;
	double _lastAssetPackReportTimeStamp;

}
+(id)sharedInstance;
-(void)incrementODRInitiated;
-(void)incrementODRFailures;
-(void)incrementODRCancelled;
-(void)incrementODRCompleted;
-(void)incrementPurgingRequests;
-(void)addBytesPurged:(unsigned long long)arg1 ;
-(void)reportAssetPackFetchFailedForAssetPackID:(id)arg1 applicationID:(id)arg2 adamID:(id)arg3 url:(id)arg4 code:(long long)arg5 ;
-(void)addBytesDownloaded:(unsigned long long)arg1 ;
-(void)reportManifestFetchFailedForApplicationID:(id)arg1 adamID:(id)arg2 externalVersion:(id)arg3 code:(long long)arg4 ;
@end

