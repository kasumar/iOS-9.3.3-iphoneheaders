/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKShareID, CKShare, CKDeleteShareInfo, NSError;

@interface CKDModifyShareMetadata : NSObject {

	CKShareID* _shareID;
	BOOL _isDelete;
	CKShare* _share;
	CKDeleteShareInfo* _deleteInfo;
	unsigned long long _state;
	NSError* _error;

}

@property (nonatomic,readonly) CKShare * share;                           //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) CKShareID * shareID; 
@property (nonatomic,retain) CKDeleteShareInfo * deleteInfo;              //@synthesize deleteInfo=_deleteInfo - In the implementation block
@property (nonatomic,readonly) BOOL isDelete;                             //@synthesize isDelete=_isDelete - In the implementation block
@property (assign,nonatomic) unsigned long long state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)_stringForUploadState:(unsigned long long)arg1 ;
+(id)modifyMetadataWithShare:(id)arg1 ;
+(id)modifyMetadataForDeleteWithShareID:(id)arg1 ;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(CKShareID *)shareID;
-(CKShare *)share;
-(id)initWithShare:(id)arg1 ;
-(id)initWithShareID:(id)arg1 ;
-(BOOL)isDelete;
-(CKDeleteShareInfo *)deleteInfo;
-(void)setDeleteInfo:(CKDeleteShareInfo *)arg1 ;
@end

