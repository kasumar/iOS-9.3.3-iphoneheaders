/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WLStatistics : NSObject {

	NSString* _contentType;
	NSDate* _downloadStartDate;
	NSDate* _downloadEndDate;
	unsigned long long _downloadByteCount;
	NSDate* _importStartDate;
	NSDate* _importEndDate;
	unsigned long long _importStartBytesFree;
	unsigned long long _importEndBytesFree;
	unsigned long long _importRecordCount;
	unsigned long long _importFailedRecordCount;

}

@property (nonatomic,readonly) NSString * contentType;                                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSDate * downloadStartDate;                              //@synthesize downloadStartDate=_downloadStartDate - In the implementation block
@property (nonatomic,retain) NSDate * downloadEndDate;                                //@synthesize downloadEndDate=_downloadEndDate - In the implementation block
@property (assign,nonatomic) unsigned long long downloadByteCount;                    //@synthesize downloadByteCount=_downloadByteCount - In the implementation block
@property (nonatomic,retain) NSDate * importStartDate;                                //@synthesize importStartDate=_importStartDate - In the implementation block
@property (nonatomic,retain) NSDate * importEndDate;                                  //@synthesize importEndDate=_importEndDate - In the implementation block
@property (assign,nonatomic) unsigned long long importStartBytesFree;                 //@synthesize importStartBytesFree=_importStartBytesFree - In the implementation block
@property (assign,nonatomic) unsigned long long importEndBytesFree;                   //@synthesize importEndBytesFree=_importEndBytesFree - In the implementation block
@property (assign,nonatomic) unsigned long long importRecordCount;                    //@synthesize importRecordCount=_importRecordCount - In the implementation block
@property (assign,nonatomic) unsigned long long importFailedRecordCount;              //@synthesize importFailedRecordCount=_importFailedRecordCount - In the implementation block
+(id)statisticsWithContentType:(id)arg1 ;
+(id)aggregateContentType;
+(id)fetchContentType;
-(id)description;
-(NSString *)contentType;
-(unsigned long long)downloadDuration;
-(void)addToFetchByteCount:(unsigned long long)arg1 ;
-(void)incrementFetchRequestCount;
-(void)incrementFetchFailedRequestCount;
-(void)setDownloadStartDate:(NSDate *)arg1 ;
-(void)setDownloadEndDate:(NSDate *)arg1 ;
-(void)setDownloadByteCount:(unsigned long long)arg1 ;
-(void)setImportStartDate:(NSDate *)arg1 ;
-(void)setImportEndDate:(NSDate *)arg1 ;
-(void)setImportStartBytesFree:(unsigned long long)arg1 ;
-(void)setImportEndBytesFree:(unsigned long long)arg1 ;
-(void)setImportRecordCount:(unsigned long long)arg1 ;
-(void)setImportFailedRecordCount:(unsigned long long)arg1 ;
-(NSDate *)downloadStartDate;
-(NSDate *)downloadEndDate;
-(unsigned long long)downloadByteCount;
-(NSDate *)importStartDate;
-(NSDate *)importEndDate;
-(unsigned long long)importStartBytesFree;
-(unsigned long long)importEndBytesFree;
-(unsigned long long)importRecordCount;
-(unsigned long long)importFailedRecordCount;
-(unsigned long long)downloadBytesPerSecond;
-(unsigned long long)importDuration;
-(long long)importBytesUsed;
-(void)setFetchStartDate:(id)arg1 ;
-(void)setFetchEndDate:(id)arg1 ;
-(void)setFetchStartBytesFree:(unsigned long long)arg1 ;
-(void)setFetchEndBytesFree:(unsigned long long)arg1 ;
-(id)fetchLogString;
@end

