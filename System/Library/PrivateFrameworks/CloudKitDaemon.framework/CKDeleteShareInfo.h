/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKShareID, CKDSharePCSData;

@interface CKDeleteShareInfo : NSObject {

	CKShareID* _shareID;
	CKDSharePCSData* _pcsData;

}

@property (nonatomic,retain) CKShareID * shareID;                    //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKDSharePCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
-(CKShareID *)shareID;
-(void)setPcsData:(CKDSharePCSData *)arg1 ;
-(CKDSharePCSData *)pcsData;
-(void)setShareID:(CKShareID *)arg1 ;
@end

