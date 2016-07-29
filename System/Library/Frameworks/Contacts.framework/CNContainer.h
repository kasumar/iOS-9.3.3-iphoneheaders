/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNContainer : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _name;
	long long _type;
	CNContainer* _snapshot;
	int _iOSLegacyIdentifier;
	BOOL _enabled;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int iOSLegacyIdentifier;                    //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) CNContainer * snapshot; 
+(id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(BOOL)arg2 ;
+(id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1 ;
+(id)predicateForContainersIncludingDisabled:(BOOL)arg1 ;
+(id)predicateForLocalContainer;
+(id)predicateForiOSLegacyIdentifier:(int)arg1 ;
+(id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForContainersInAccountWithIdentifier:(id)arg1 ;
+(id)predicateForContainerOfContactWithIdentifier:(id)arg1 ;
+(id)predicateForContainersWithIdentifiers:(id)arg1 ;
+(id)predicateForContainerOfGroupWithIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(long long)type;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNContainer *)snapshot;
-(id)initWithContainer:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 ;
-(id)descriptionForContainerType:(long long)arg1 ;
-(int)iOSLegacyIdentifier;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
@end

