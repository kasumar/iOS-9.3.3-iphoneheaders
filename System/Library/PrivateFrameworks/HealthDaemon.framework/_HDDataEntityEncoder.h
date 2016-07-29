/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDEntityEncoder.h>

@class HDMetadataValueStatement, HDDataProvenanceCache;

@interface _HDDataEntityEncoder : HDEntityEncoder {

	HDMetadataValueStatement* _metadataValueStatement;
	HDDataProvenanceCache* _dataProvenanceCache;

}

@property (nonatomic,retain) HDMetadataValueStatement * metadataValueStatement;              //@synthesize metadataValueStatement=_metadataValueStatement - In the implementation block
@property (nonatomic,retain) HDDataProvenanceCache * dataProvenanceCache;                    //@synthesize dataProvenanceCache=_dataProvenanceCache - In the implementation block
-(void)finish;
-(id)initWithHealthEntityClass:(Class)arg1 healthDaemon:(id)arg2 database:(id)arg3 purpose:(long long)arg4 authorizationFilter:(/*^block*/id)arg5 ;
-(id)orderedProperties;
-(id)codableRepresentationForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 collection:(id)arg3 ;
-(void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(HDSQLiteRowRef)arg3 ;
-(id)objectForPersistentID:(long long)arg1 row:(HDSQLiteRowRef)arg2 error:(id*)arg3 ;
-(HDMetadataValueStatement *)metadataValueStatement;
-(void)setMetadataValueStatement:(HDMetadataValueStatement *)arg1 ;
-(HDDataProvenanceCache *)dataProvenanceCache;
-(void)setDataProvenanceCache:(HDDataProvenanceCache *)arg1 ;
@end

