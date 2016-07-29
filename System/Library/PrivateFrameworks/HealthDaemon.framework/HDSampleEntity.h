/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataEntity.h>

@interface HDSampleEntity : HDDataEntity
+(id)_databaseTable;
+(id)columnsDefinition;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)entityEncoderForHealthDaemon:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(/*^block*/id)arg4 ;
+(id)sourceIDsForSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)mostRecentSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)columnNameForSortIdentifier:(id)arg1 ;
+(id)entityEnumeratorWithType:(id)arg1 daemon:(id)arg2 ;
+(void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(BOOL)arg3 database:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(Class)_deletedEntityClass;
+(BOOL)requiresSampleTypePredicate;
+(id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3 ;
+(id)oldestSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(void)deleteSamplesWithTypes:(id)arg1 sourceIdentifier:(id)arg2 healthDaemon:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(BOOL)arg3 healthDaemon:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)samplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 limit:(unsigned long long)arg4 anchor:(id*)arg5 error:(id*)arg6 ;
+(long long)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 withError:(id*)arg4 ;
+(id)timePeriodForSamplesOfType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 error:(id*)arg4 cancellationBlock:(/*^block*/id)arg5 ;
+(id)samplesTypesForSamplesMatchingPredicate:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)anySampleOfType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(long long)preferredEntityType;
+(id)columnNamesForTimeOffset;
+(id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2 ;
-(id)_sampleTypeInDatabase:(id)arg1 ;
@end

