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

@interface CKFetchUserIdentitiesOperationInfo : CKOperationInfo <NSSecureCoding> {

	NSArray* _identityInfos;

}

@property (nonatomic,retain) NSArray * identityInfos;              //@synthesize identityInfos=_identityInfos - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)identityInfos;
-(void)setIdentityInfos:(NSArray *)arg1 ;
@end

