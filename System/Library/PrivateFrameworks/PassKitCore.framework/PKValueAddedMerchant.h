/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKValueAddedMerchant : NSObject <NSSecureCoding> {

	NSData* _identifier;
	long long _timesPresented;

}

@property (nonatomic,retain) NSData * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long timesPresented;              //@synthesize timesPresented=_timesPresented - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSData *)identifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(long long)timesPresented;
-(void)setTimesPresented:(long long)arg1 ;
@end

