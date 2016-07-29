/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDatabase/CalendarDatabase-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CDBRecurrenceDayOfWeek : NSObject <NSCopying> {

	long long _dayOfTheWeek;
	long long _weekNumber;

}

@property (nonatomic,readonly) long long dayOfTheWeek;              //@synthesize dayOfTheWeek=_dayOfTheWeek - In the implementation block
@property (nonatomic,readonly) long long weekNumber;                //@synthesize weekNumber=_weekNumber - In the implementation block
+(id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2 ;
+(id)dayOfWeek:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)iCalendarDescription;
-(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
-(id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2 ;
-(long long)dayOfTheWeek;
-(long long)weekNumber;
@end

