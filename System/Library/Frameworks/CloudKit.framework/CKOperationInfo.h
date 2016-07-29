/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CKContainerSetupInfo, NSDictionary;

@interface CKOperationInfo : NSObject <NSSecureCoding> {

	BOOL _allowsCellularAccess;
	BOOL _preferAnonymousRequests;
	BOOL _allowsBackgroundNetworking;
	BOOL _isLongLived;
	BOOL _isOutstandingOperation;
	NSString* _operationID;
	NSString* _name;
	NSString* _parentSectionID;
	long long _qualityOfService;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _authPromptReason;
	CKContainerSetupInfo* _setupInfo;
	NSString* _operationClass;
	NSDictionary* _additionalRequestHTTPHeaders;
	NSString* _deviceIdentifier;
	id _parentOperation;

}

@property (nonatomic,retain) NSString * operationID;                                       //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * parentSectionID;                                   //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                   //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * authPromptReason;                                  //@synthesize authPromptReason=_authPromptReason - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                 //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                              //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (assign,nonatomic) BOOL isLongLived;                                             //@synthesize isLongLived=_isLongLived - In the implementation block
@property (assign,nonatomic) BOOL isOutstandingOperation;                                  //@synthesize isOutstandingOperation=_isOutstandingOperation - In the implementation block
@property (nonatomic,retain) CKContainerSetupInfo * setupInfo;                             //@synthesize setupInfo=_setupInfo - In the implementation block
@property (nonatomic,retain) NSString * operationClass;                                    //@synthesize operationClass=_operationClass - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalRequestHTTPHeaders;                  //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id parentOperation;                                    //@synthesize parentOperation=_parentOperation - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)qualityOfService;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setOperationClass:(NSString *)arg1 ;
-(void)setIsOutstandingOperation:(BOOL)arg1 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(NSString *)operationID;
-(NSString *)operationClass;
-(CKContainerSetupInfo *)setupInfo;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(BOOL)isLongLived;
-(BOOL)isOutstandingOperation;
-(void)setSetupInfo:(CKContainerSetupInfo *)arg1 ;
-(void)setOperationID:(NSString *)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(BOOL)allowsCellularAccess;
-(id)parentOperation;
-(NSString *)parentSectionID;
-(NSString *)authPromptReason;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setAuthPromptReason:(NSString *)arg1 ;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setIsLongLived:(BOOL)arg1 ;
-(void)setParentOperation:(id)arg1 ;
-(void)setParentSectionID:(NSString *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
@end

