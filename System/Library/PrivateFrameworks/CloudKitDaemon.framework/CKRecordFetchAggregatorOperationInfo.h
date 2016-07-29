/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSSet;

@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo {

	BOOL _fetchAssetContents;
	BOOL _preserveOrdering;
	NSSet* _desiredKeys;

}

@property (assign,nonatomic) BOOL fetchAssetContents;              //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL preserveOrdering;                //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                  //@synthesize desiredKeys=_desiredKeys - In the implementation block
-(id)init;
-(NSSet *)desiredKeys;
-(void)setFetchAssetContents:(BOOL)arg1 ;
-(void)setPreserveOrdering:(BOOL)arg1 ;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(BOOL)fetchAssetContents;
-(BOOL)preserveOrdering;
@end

