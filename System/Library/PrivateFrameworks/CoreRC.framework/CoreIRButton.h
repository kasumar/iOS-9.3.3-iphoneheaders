/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CoreIRButton : NSObject <NSSecureCoding, NSCopying> {

	unsigned _usagePage;
	unsigned _usageID;

}

@property (nonatomic,readonly) unsigned usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (nonatomic,readonly) unsigned usageID;                //@synthesize usageID=_usageID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)usagePage;
-(unsigned)usageID;
-(id)initWithUsagePage:(unsigned)arg1 usageID:(unsigned)arg2 ;
@end

