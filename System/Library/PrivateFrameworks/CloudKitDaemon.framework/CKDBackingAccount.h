/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface CKDBackingAccount : NSObject

@property (nonatomic,readonly) NSString * dsid; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSString * cloudKitAuthToken; 
@property (nonatomic,readonly) NSString * iCloudAuthToken; 
@property (nonatomic,readonly) NSString * serverPreferredPushEnvironment; 
@property (nonatomic,readonly) BOOL isFakeAccount; 
@property (nonatomic,readonly) BOOL iCloudDriveAllowsCellularAccess; 
@property (nonatomic,readonly) BOOL cloudKitIsEnabled; 
@property (nonatomic,readonly) BOOL cloudPhotosIsEnabled; 
@property (nonatomic,readonly) NSURL * privateCloudDBURL; 
@property (nonatomic,readonly) NSURL * privateShareServiceURL; 
@property (nonatomic,readonly) NSURL * privateDeviceServiceURL; 
+(id)primaryAccountInStore:(id)arg1 ;
+(id)accountWithIdentifier:(id)arg1 inStore:(id)arg2 ;
+(id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 ;
+(Class)_platformBackingAccountClass;
+(BOOL)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2 ;
-(id)init;
-(id)_init;
-(NSString *)identifier;
-(NSString *)dsid;
-(NSString *)serverPreferredPushEnvironment;
-(BOOL)cloudPhotosIsEnabled;
-(BOOL)cloudKitIsEnabled;
-(BOOL)iCloudDriveAllowsCellularAccess;
-(BOOL)isFakeAccount;
-(NSString *)cloudKitAuthToken;
-(NSString *)iCloudAuthToken;
-(NSString *)primaryEmail;
-(NSURL *)privateCloudDBURL;
-(NSURL *)privateShareServiceURL;
-(NSURL *)privateDeviceServiceURL;
-(void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)ckAccount;
-(id)accountPropertiesForDataclass:(id)arg1 ;
@end

