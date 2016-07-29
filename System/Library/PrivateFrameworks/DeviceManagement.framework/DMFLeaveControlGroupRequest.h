/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray;

@interface DMFLeaveControlGroupRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _groupIdentifier;
	NSArray* _leaderIdentifiers;

}

@property (nonatomic,copy) DMFControlGroupIdentifier * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * leaderIdentifiers;                              //@synthesize leaderIdentifiers=_leaderIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroupIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(void)setLeaderIdentifiers:(NSArray *)arg1 ;
-(NSArray *)leaderIdentifiers;
@end

