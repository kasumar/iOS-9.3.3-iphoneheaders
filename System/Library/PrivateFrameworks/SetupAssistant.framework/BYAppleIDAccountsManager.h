/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AALoginPluginManager, AASetupAssistantService;

@interface BYAppleIDAccountsManager : NSObject {

	AALoginPluginManager* _appleIDLoginPluginManager;
	AASetupAssistantService* _aaService;

}

@property (setter=setAAService:,nonatomic,retain) AASetupAssistantService * aaService;              //@synthesize aaService=_aaService - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)initForDelegateBundleIDs:(id)arg1 ;
-(void)enableDataClassesForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 skipiTunes:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(AASetupAssistantService *)aaService;
-(void)setAAService:(id)arg1 ;
@end

