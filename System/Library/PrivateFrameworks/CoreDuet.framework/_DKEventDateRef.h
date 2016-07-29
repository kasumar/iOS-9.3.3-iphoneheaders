/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, _DKEvent;

@interface _DKEventDateRef : NSObject {

	NSDate* _date;
	unsigned long long _type;
	_DKEvent* _event;

}

@property (retain) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (retain) _DKEvent * event;                     //@synthesize event=_event - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSDate *)date;
-(_DKEvent *)event;
-(void)setEvent:(_DKEvent *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 type:(unsigned long long)arg2 event:(id)arg3 ;
@end

