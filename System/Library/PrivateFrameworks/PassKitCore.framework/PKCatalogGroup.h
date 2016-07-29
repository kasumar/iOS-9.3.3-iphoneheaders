/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSMutableArray;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUbiquitous;
	NSNumber* _groupID;
	NSMutableArray* _uniqueIDs;

}

@property (nonatomic,retain) NSNumber * groupID;                      //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueIDs;              //@synthesize uniqueIDs=_uniqueIDs - In the implementation block
@property (assign,nonatomic) BOOL isUbiquitous;                       //@synthesize isUbiquitous=_isUbiquitous - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isUbiquitous;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(BOOL)isEqualToGroup:(id)arg1 ;
-(NSMutableArray *)uniqueIDs;
-(void)setUniqueIDs:(NSMutableArray *)arg1 ;
-(void)setIsUbiquitous:(BOOL)arg1 ;
@end

