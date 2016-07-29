/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>

@property (assign,getter=isLocked,nonatomic) BOOL locked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(BOOL)deleteAllChangeBatchesWithError:(id*)arg1 ;
-(unsigned long long)countOfQueuedBatches;
-(BOOL)appendChangeBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)popChangeBatch:(id*)arg1 error:(id*)arg2 ;
-(BOOL)markChangesWithIdentifier:(id)arg1 withAlterationType:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)nextBatch;
-(BOOL)popNextBatchWithError:(id*)arg1 ;
-(BOOL)compactChangeBatchesWithError:(id*)arg1 ;
-(id)allChangeBatches;
-(id)popAllChangeBatchesWithError:(id*)arg1 ;
@end

