/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSString, NSFileVersion, NSDate;

@interface GKSavedGameDocument : NSObject <NSFilePresenter> {

	BOOL _hasConflict;
	BOOL _isConflictVersion;
	NSURL* _fileURL;
	NSString* _name;
	NSFileVersion* _fileVersion;
	NSString* _deviceName;
	NSDate* _modificationDate;

}

@property (nonatomic,retain) NSURL * fileURL;                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSFileVersion * fileVersion;                                //@synthesize fileVersion=_fileVersion - In the implementation block
@property (assign,nonatomic) BOOL hasConflict;                                           //@synthesize hasConflict=_hasConflict - In the implementation block
@property (assign,nonatomic) BOOL isConflictVersion;                                     //@synthesize isConflictVersion=_isConflictVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
+(id)currentDeviceName;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDate *)modificationDate;
-(NSURL *)fileURL;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(id)initWithFileURL:(id)arg1 ;
-(id)metadata;
-(void)setMetadata:(id)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)updateMetadata;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)isConflictVersion;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllVersionsIncludingCurrent:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasConflict;
-(void)setIsConflictVersion:(BOOL)arg1 ;
-(void)setHasConflict:(BOOL)arg1 ;
-(void)setFileVersion:(NSFileVersion *)arg1 ;
-(void)updateConflictStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteConflictVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadWrapperDataWithFilename:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSFileVersion *)fileVersion;
-(NSString *)deviceName;
@end

