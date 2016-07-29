/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKDiscoverUserInfosOperationInfo : CKOperationInfo <NSSecureCoding> {

	BOOL _shouldDiscoverAllContacts;
	NSArray* _emails;
	NSArray* _userRecordIDs;

}

@property (nonatomic,retain) NSArray * emails;                            //@synthesize emails=_emails - In the implementation block
@property (nonatomic,retain) NSArray * userRecordIDs;                     //@synthesize userRecordIDs=_userRecordIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldDiscoverAllContacts;              //@synthesize shouldDiscoverAllContacts=_shouldDiscoverAllContacts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserRecordIDs:(NSArray *)arg1 ;
-(void)setShouldDiscoverAllContacts:(BOOL)arg1 ;
-(BOOL)shouldDiscoverAllContacts;
-(NSArray *)emails;
-(void)setEmails:(NSArray *)arg1 ;
-(unsigned long long)activityStart;
-(NSArray *)userRecordIDs;
@end

