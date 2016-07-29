/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Frameworks/EscrowService.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.lakitu/com.apple.lakitu-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <com.apple.lakitu/LakituProtocol.h>

@class NSString;

@interface LakituServiceDaemon : NSObject <NSXPCListenerDelegate, LakituProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_certVersion:(SecCertificateRef)arg1 ;
-(id)_rootTrustedVersionsForRootType:(unsigned)arg1 inEnvironment:(id)arg2 ;
-(void)_saveBypassToken:(id)arg1 ;
-(void)_removeBypassToken;
-(id)_getBypassToken;
-(id)_certPublicKeySHA1Digest:(SecCertificateRef)arg1 ;
-(id)_rootBaseVersionsForRootType:(unsigned)arg1 inEnvironment:(id)arg2 ;
-(id)_rootCurrentVersionForRootType:(unsigned)arg1 inEnvironment:(id)arg2 ;
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getCountrySMSCodesWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)storeRecordWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)recoverRecordWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)updateRecordWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deleteRecordWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)updateRecordMetadataWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)listSMSTargetsWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)verifyCertificateWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

