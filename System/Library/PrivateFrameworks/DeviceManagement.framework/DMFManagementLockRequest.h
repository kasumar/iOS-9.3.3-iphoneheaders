/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface DMFManagementLockRequest : CATTaskRequest {

	NSString* _lockedByLabel;
	NSString* _passcode;

}

@property (nonatomic,copy) NSString * lockedByLabel;              //@synthesize lockedByLabel=_lockedByLabel - In the implementation block
@property (nonatomic,copy) NSString * passcode;                   //@synthesize passcode=_passcode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(void)setLockedByLabel:(NSString *)arg1 ;
-(NSString *)lockedByLabel;
@end

