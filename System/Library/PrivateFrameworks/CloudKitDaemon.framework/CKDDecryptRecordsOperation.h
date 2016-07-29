/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class NSArray, NSObject, NSDictionary;

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation {

	BOOL _forcePCSDecrypt;
	/*^block*/id _recordDecryptedBlock;
	NSArray* _recordsToDecrypt;
	NSObject*<OS_dispatch_group> _recordDecryptGroup;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (assign,nonatomic) BOOL forcePCSDecrypt;                                         //@synthesize forcePCSDecrypt=_forcePCSDecrypt - In the implementation block
@property (nonatomic,copy) id recordDecryptedBlock;                                        //@synthesize recordDecryptedBlock=_recordDecryptedBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordsToDecrypt;                                   //@synthesize recordsToDecrypt=_recordsToDecrypt - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> recordDecryptGroup;              //@synthesize recordDecryptGroup=_recordDecryptGroup - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;              //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(unsigned long long)activityStart;
-(BOOL)operationShouldBeFlowControlled;
-(BOOL)shouldCheckAppVersion;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setForcePCSDecrypt:(BOOL)arg1 ;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setRecordsToDecrypt:(NSArray *)arg1 ;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(BOOL)forcePCSDecrypt;
-(void)setRecordDecryptedBlock:(id)arg1 ;
-(NSArray *)recordsToDecrypt;
-(void)setRecordDecryptGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)recordDecryptedBlock;
-(NSObject*<OS_dispatch_group>)recordDecryptGroup;
-(void)_decryptRecord:(id)arg1 ;
-(void)_handleProtectionDataForRecord:(id)arg1 ;
-(id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(void)_recordWasDecrypted:(id)arg1 withError:(id)arg2 ;
-(void)_decryptRecord:(id)arg1 usingWebSharingIdentityData:(id)arg2 ;
-(void)_handleZoneProtectionDataForRecord:(id)arg1 ;
-(void)_handleShareProtectionDataForRecord:(id)arg1 ;
-(id)_unwrapAssetKey:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)_unwrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 forField:(id)arg3 ;
-(id)_unwrapPackageAssets:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
@end

