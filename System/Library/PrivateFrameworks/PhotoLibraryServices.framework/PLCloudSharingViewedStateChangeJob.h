/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSString, NSDate;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob {

	BOOL _albumHasUnseenContent;
	BOOL _assetCollectionHasUnreadComments;
	long long _jobType;
	NSString* _albumGUID;
	long long _albumUnviewedAssetCount;
	NSString* _assetCollectionGUID;
	NSDate* _assetCollectionLastViewedCommentDate;

}

@property (assign,nonatomic) long long jobType;                                          //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                                       //@synthesize albumGUID=_albumGUID - In the implementation block
@property (assign,nonatomic) BOOL albumHasUnseenContent;                                 //@synthesize albumHasUnseenContent=_albumHasUnseenContent - In the implementation block
@property (assign,nonatomic) long long albumUnviewedAssetCount;                          //@synthesize albumUnviewedAssetCount=_albumUnviewedAssetCount - In the implementation block
@property (nonatomic,retain) NSString * assetCollectionGUID;                             //@synthesize assetCollectionGUID=_assetCollectionGUID - In the implementation block
@property (assign,nonatomic) BOOL assetCollectionHasUnreadComments;                      //@synthesize assetCollectionHasUnreadComments=_assetCollectionHasUnreadComments - In the implementation block
@property (nonatomic,retain) NSDate * assetCollectionLastViewedCommentDate;              //@synthesize assetCollectionLastViewedCommentDate=_assetCollectionLastViewedCommentDate - In the implementation block
+(void)markAlbum:(id)arg1 asHavingUnseenContent:(BOOL)arg2 ;
+(void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2 ;
+(void)markAssetCollection:(id)arg1 asHavingUnreadComments:(BOOL)arg2 inAlbum:(id)arg3 ;
+(void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(NSString *)albumGUID;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(void)setAlbumHasUnseenContent:(BOOL)arg1 ;
-(void)setAlbumUnviewedAssetCount:(long long)arg1 ;
-(void)setAssetCollectionGUID:(NSString *)arg1 ;
-(void)setAssetCollectionHasUnreadComments:(BOOL)arg1 ;
-(void)setAssetCollectionLastViewedCommentDate:(NSDate *)arg1 ;
-(BOOL)albumHasUnseenContent;
-(long long)albumUnviewedAssetCount;
-(NSString *)assetCollectionGUID;
-(BOOL)assetCollectionHasUnreadComments;
-(NSDate *)assetCollectionLastViewedCommentDate;
-(void)_executeAlbumViewedStateChanged;
-(void)_executeAlbumUnviewedAssetCountChangedWithGroup;
-(void)_executeAssetCommentsReadStateChangedWithGroup;
-(void)_executeAssetLastViewedCommentDateChangedWithGroup;
@end

