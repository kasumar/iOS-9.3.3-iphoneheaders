/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSNumber, NSDate;

@interface FAFamilyMember : NSObject <NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,copy,readonly) NSString * appleID; 
@property (nonatomic,copy,readonly) NSNumber * dsid; 
@property (nonatomic,copy,readonly) NSString * hashedDSID; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,readonly) unsigned long long age; 
@property (nonatomic,copy,readonly) NSString * memberTypeDisplayString; 
@property (nonatomic,copy,readonly) NSString * memberTypeString; 
@property (nonatomic,copy,readonly) NSDate * joinedDate; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * inviteEmail; 
@property (nonatomic,readonly) BOOL isChildAccount; 
@property (nonatomic,readonly) BOOL hasParentalControlsEnabled; 
@property (nonatomic,readonly) BOOL hasAskToBuyEnabled; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL hasLinkediTunesAccount; 
@property (nonatomic,readonly) NSNumber * iTunesAccountDSID; 
@property (nonatomic,copy,readonly) NSString * iTunesAccountUsername; 
@property (nonatomic,copy,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionary;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isMe;
-(BOOL)isChildAccount;
-(NSString *)statusString;
-(unsigned long long)age;
-(NSNumber *)dsid;
-(NSNumber *)iTunesAccountDSID;
-(NSString *)appleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)memberTypeString;
-(BOOL)hasParentalControlsEnabled;
-(BOOL)isParent;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)memberTypeDisplayString;
-(NSDate *)joinedDate;
-(NSString *)inviteEmail;
-(BOOL)hasAskToBuyEnabled;
-(NSString *)iTunesAccountUsername;
-(BOOL)hasLinkediTunesAccount;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)hashedDSID;
@end

