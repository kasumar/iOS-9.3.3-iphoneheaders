/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@class NSString, NSDate, NSArray;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification {

	BOOL _allDay;
	BOOL _hasRecurrenceRules;
	BOOL _timeChanged;
	BOOL _dateChanged;
	BOOL _locationChanged;
	BOOL _attendeeReplyChanged;
	NSString* _location;
	NSDate* _startDate;
	NSDate* _startDateForNextOccurrence;
	NSDate* _endDate;
	NSDate* _participationStatusModifiedDate;
	long long _participationStatus;
	long long _status;
	NSArray* _attendees;

}

@property (nonatomic,retain) NSString * location;                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * startDateForNextOccurrence;                   //@synthesize startDateForNextOccurrence=_startDateForNextOccurrence - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSDate * participationStatusModifiedDate;              //@synthesize participationStatusModifiedDate=_participationStatusModifiedDate - In the implementation block
@property (assign,nonatomic) long long participationStatus;                         //@synthesize participationStatus=_participationStatus - In the implementation block
@property (assign,nonatomic) long long status;                                      //@synthesize status=_status - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) BOOL hasRecurrenceRules;                               //@synthesize hasRecurrenceRules=_hasRecurrenceRules - In the implementation block
@property (assign,nonatomic) BOOL timeChanged;                                      //@synthesize timeChanged=_timeChanged - In the implementation block
@property (assign,nonatomic) BOOL dateChanged;                                      //@synthesize dateChanged=_dateChanged - In the implementation block
@property (assign,nonatomic) BOOL locationChanged;                                  //@synthesize locationChanged=_locationChanged - In the implementation block
@property (assign,nonatomic) BOOL attendeeReplyChanged;                             //@synthesize attendeeReplyChanged=_attendeeReplyChanged - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                   //@synthesize attendees=_attendees - In the implementation block
-(id)_dateString;
-(id)_errorString;
-(BOOL)supportsDisplay;
-(id)messageStringForDescriptionWithOptions:(unsigned long long)arg1 ;
-(id)messageStringsForDescriptionWithOptions:(unsigned long long)arg1 ;
-(void)_populateStringsForInvitation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_populateStringsForReply:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_locationString;
-(id)_attachmentString;
-(id)_organizerString;
-(id)_attendeeString;
-(void)dealloc;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setDateChanged:(BOOL)arg1 ;
-(void)setTimeChanged:(BOOL)arg1 ;
-(void)setLocationChanged:(BOOL)arg1 ;
-(void)setStartDateForNextOccurrence:(NSDate *)arg1 ;
-(void)setParticipationStatusModifiedDate:(NSDate *)arg1 ;
-(BOOL)attendeeReplyChanged;
-(void)setHasRecurrenceRules:(BOOL)arg1 ;
-(NSDate *)participationStatusModifiedDate;
-(void)setAttendeeReplyChanged:(BOOL)arg1 ;
-(id)eventFromEventStore:(id)arg1 ;
-(NSDate *)startDateForNextOccurrence;
-(NSArray *)attendees;
-(BOOL)isAllDay;
-(id)initWithEvent:(id)arg1 ;
-(BOOL)timeChanged;
-(BOOL)dateChanged;
-(BOOL)locationChanged;
-(void)setAttendees:(NSArray *)arg1 ;
-(BOOL)hasRecurrenceRules;
-(void)setParticipationStatus:(long long)arg1 ;
-(long long)participationStatus;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

