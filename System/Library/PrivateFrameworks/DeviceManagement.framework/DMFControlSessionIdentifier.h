/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <DeviceManagement/DMFControlGroupIdentifier.h>

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier {

	unsigned _leaderIP;

}

@property (assign) unsigned leaderIP;              //@synthesize leaderIP=_leaderIP - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)stringValue;
-(id)groupIdentifier;
-(unsigned)leaderIP;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned)arg3 ;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(BOOL)isEqualToManagementSessionIdentifier:(id)arg1 ;
-(void)setLeaderIP:(unsigned)arg1 ;
@end

