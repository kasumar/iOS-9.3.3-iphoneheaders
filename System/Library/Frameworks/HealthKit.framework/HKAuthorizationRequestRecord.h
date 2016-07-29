/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSSet;

@interface HKAuthorizationRequestRecord : NSObject <NSSecureCoding> {

	NSString* _appBundleIdentifier;
	NSUUID* _sessionIdentifier;
	NSSet* _typesRequiringShareAuthorization;
	NSSet* _typesRequiringReadAuthorization;

}

@property (nonatomic,copy,readonly) NSString * appBundleIdentifier;                        //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesRequiringShareAuthorization;              //@synthesize typesRequiringShareAuthorization=_typesRequiringShareAuthorization - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesRequiringReadAuthorization;               //@synthesize typesRequiringReadAuthorization=_typesRequiringReadAuthorization - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSUUID *)sessionIdentifier;
-(NSString *)appBundleIdentifier;
-(NSSet *)typesRequiringShareAuthorization;
-(NSSet *)typesRequiringReadAuthorization;
-(id)initForApp:(id)arg1 session:(id)arg2 readTypes:(id)arg3 writeTypes:(id)arg4 ;
@end

