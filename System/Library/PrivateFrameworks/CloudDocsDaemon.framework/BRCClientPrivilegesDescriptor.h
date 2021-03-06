/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class NSString, NSSet;

@interface BRCClientPrivilegesDescriptor : NSObject {

	NSString* _debugIdentifier;
	char _cloudEnabledStatusWithoutLogOutStatus;
	BOOL _isNonAppSandboxed;
	BOOL _isAllowedToAccessAnyCloudService;
	BOOL _isProxyEntitled;
	BOOL _isSharingPrivateInterfaceEntitled;
	BOOL _isAutomationEntitled;
	BOOL _hasAuditToken;
	NSString* _applicationIdentifier;
	NSSet* _containerIDs;
	NSString* _defaultContainerID;
	SCD_Struct_BR20 _auditToken;

}

@property (nonatomic,readonly) NSString * applicationIdentifier;                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isNonAppSandboxed;                              //@synthesize isNonAppSandboxed=_isNonAppSandboxed - In the implementation block
@property (nonatomic,readonly) BOOL isAllowedToAccessAnyCloudService;               //@synthesize isAllowedToAccessAnyCloudService=_isAllowedToAccessAnyCloudService - In the implementation block
@property (nonatomic,readonly) BOOL isProxyEntitled;                                //@synthesize isProxyEntitled=_isProxyEntitled - In the implementation block
@property (nonatomic,readonly) BOOL isSharingPrivateInterfaceEntitled;              //@synthesize isSharingPrivateInterfaceEntitled=_isSharingPrivateInterfaceEntitled - In the implementation block
@property (nonatomic,readonly) BOOL isAutomationEntitled;                           //@synthesize isAutomationEntitled=_isAutomationEntitled - In the implementation block
@property (nonatomic,readonly) NSSet * containerIDs;                                //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,readonly) NSString * defaultContainerID;                       //@synthesize defaultContainerID=_defaultContainerID - In the implementation block
@property (nonatomic,readonly) BOOL hasAuditToken;                                  //@synthesize hasAuditToken=_hasAuditToken - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BR20 auditToken;                          //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)_isNonSandboxedForAuditToken:(SCD_Struct_BR20)arg1 ;
-(id)description;
-(NSString *)applicationIdentifier;
-(SCD_Struct_BR20)auditToken;
-(BOOL)hasPid;
-(int)pid;
-(id)initWithAuditToken:(SCD_Struct_BR20)arg1 ;
-(char)cloudEnabledStatusForSession:(id)arg1 ;
-(NSString *)defaultContainerID;
-(NSSet *)containerIDs;
-(BOOL)isProxyEntitled;
-(BOOL)isAutomationEntitled;
-(BOOL)isSharingPrivateInterfaceEntitled;
-(id)initWithNonSandboxedAppWithContainerIDs:(id)arg1 bundleID:(id)arg2 auditToken:(SCD_Struct_BR20)arg3 ;
-(id)initWithPid:(int)arg1 ;
-(void)_finishSetupWithClientContainerIDs:(id)arg1 ;
-(BOOL)hasAuditToken;
-(char)_computeCloudEnabledStatusWithoutLogOutStatus;
-(BOOL)isAllowedToAccessAnyCloudService;
-(BOOL)isNonAppSandboxed;
@end

