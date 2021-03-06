/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * externalID; 
@property (assign,nonatomic) unsigned long long shareeStatus; 
@property (assign,nonatomic) unsigned long long shareeAccessLevel; 
@property (nonatomic,readonly) EKCalendar * owner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shareeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(EKCalendar *)owner;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3 ;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(id)_persistentSharee;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(unsigned long long)shareeStatus;
-(unsigned long long)shareeAccessLevel;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(void*)ABRecordWithAddressBook:(void*)arg1 ;
-(void)setShareeAccessLevel:(unsigned long long)arg1 ;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
@end

