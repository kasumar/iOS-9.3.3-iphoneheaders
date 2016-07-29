/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDProtectedCloudStorageProxy <NSObject>
@required
-(PCSIdentitySetDataRef)pcsIdentitySetupWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)pcsIdentitySetIsInICDPNetwork:(PCSIdentitySetDataRef)arg1 error:(id*)arg2;
-(BOOL)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 erorr:(id*)arg2;
-(BOOL)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id*)arg2;

@end

