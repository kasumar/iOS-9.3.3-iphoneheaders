/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class NSArray, AXHAAccessQueue;

@interface AXHASecurityHelper : NSObject {

	SecIdentityRef _appleIDIdentity;
	NSArray* _certificateDescription;
	AXHAAccessQueue* _securityQueue;

}

@property (nonatomic,retain) NSArray * certificateDescription;              //@synthesize certificateDescription=_certificateDescription - In the implementation block
@property (nonatomic,retain) AXHAAccessQueue * securityQueue;               //@synthesize securityQueue=_securityQueue - In the implementation block
+(id)sharedHelper;
-(void)dealloc;
-(id)init;
-(id)trustChain;
-(BOOL)shouldTrustStream:(id)arg1 ;
-(void)setSecurityQueue:(AXHAAccessQueue *)arg1 ;
-(void)prepareHelper;
-(void)setCertificateDescription:(NSArray *)arg1 ;
-(AXHAAccessQueue *)securityQueue;
-(NSArray *)certificateDescription;
-(BOOL)trustChainAvailable;
-(id)certificateChainForIdentity:(SecIdentityRef)arg1 ;
-(id)certificateChainFromTrust:(SecTrustRef)arg1 ;
@end

