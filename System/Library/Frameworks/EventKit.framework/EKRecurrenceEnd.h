/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {

	NSDate* _endDate;
	unsigned long long _occurrenceCount;

}

@property (nonatomic,readonly) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long occurrenceCount;              //@synthesize occurrenceCount=_occurrenceCount - In the implementation block
@property (nonatomic,readonly) BOOL usesEndDate; 
+(id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1 ;
+(id)recurrenceEndWithEndDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEndDate:(id)arg1 ;
-(id)initWithOccurrenceCount:(unsigned long long)arg1 ;
-(BOOL)usesEndDate;
-(unsigned long long)occurrenceCount;
-(NSDate *)endDate;
@end

