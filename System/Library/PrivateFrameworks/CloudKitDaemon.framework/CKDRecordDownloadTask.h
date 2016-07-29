/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class CKRecord, NSError, NSMutableArray, NSObject, CKDProgressTracker;

@interface CKDRecordDownloadTask : NSObject {

	CKRecord* _record;
	NSError* _error;
	NSMutableArray* _assetsToDownload;
	NSMutableArray* _packageIndexSets;
	NSObject*<OS_dispatch_group> _group;
	CKDProgressTracker* _progressTracker;

}

@property (nonatomic,retain) CKRecord * record;                                 //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetsToDownload;                 //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (nonatomic,retain) NSMutableArray * packageIndexSets;                 //@synthesize packageIndexSets=_packageIndexSets - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CKDProgressTracker * progressTracker;              //@synthesize progressTracker=_progressTracker - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(CKRecord *)record;
-(void)setAssetsToDownload:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetsToDownload;
-(void)setRecord:(CKRecord *)arg1 ;
-(CKDProgressTracker *)progressTracker;
-(void)setProgressTracker:(CKDProgressTracker *)arg1 ;
-(NSMutableArray *)packageIndexSets;
-(void)setPackageIndexSets:(NSMutableArray *)arg1 ;
-(id)initWithRecord:(id)arg1 trackProgress:(BOOL)arg2 assetsToDownload:(id)arg3 packageIndexSets:(id)arg4 ;
-(void)didDownloadAsset:(id)arg1 error:(id)arg2 ;
-(void)didCompleteTaskWithError:(id)arg1 ;
@end

