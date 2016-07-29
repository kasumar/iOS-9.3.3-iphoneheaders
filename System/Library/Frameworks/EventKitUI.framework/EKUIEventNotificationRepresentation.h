/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKUITextAndHeaderItem, NSArray, NSDictionary, NSDate;

@interface EKUIEventNotificationRepresentation : NSObject {

	BOOL _allDay;
	unsigned long long _type;
	EKUITextAndHeaderItem* _titleItem;
	EKUITextAndHeaderItem* _subtitleItem;
	NSArray* _supplementaryItems;
	NSDictionary* _userActivityUserInfo;
	NSDate* _date;
	NSDictionary* _organizerContactDictionary;

}

@property (assign,nonatomic) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) EKUITextAndHeaderItem * titleItem;                        //@synthesize titleItem=_titleItem - In the implementation block
@property (nonatomic,retain) EKUITextAndHeaderItem * subtitleItem;                     //@synthesize subtitleItem=_subtitleItem - In the implementation block
@property (nonatomic,retain) NSArray * supplementaryItems;                             //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
@property (nonatomic,retain) NSDictionary * userActivityUserInfo;                      //@synthesize userActivityUserInfo=_userActivityUserInfo - In the implementation block
@property (nonatomic,retain) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                              //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) NSDictionary * organizerContactDictionary;              //@synthesize organizerContactDictionary=_organizerContactDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)_invitationNotificationHasResourceChanges:(id)arg1 changesString:(id*)arg2 ;
+(id)defaultEventNotificationRepresentationWithTitle:(id)arg1 message:(id)arg2 ;
+(id)upcomingEventNotificationRepresentationWithEvent:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3 ;
+(id)invitationNotificationRepresentationWithNotification:(id)arg1 date:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 ;
+(id)responseNotificationWithTitle:(id)arg1 message:(id)arg2 ;
+(id)resourceChangeNotificationWithNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(void)setTitleItem:(EKUITextAndHeaderItem *)arg1 ;
-(void)setSubtitleItem:(EKUITextAndHeaderItem *)arg1 ;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(id)dictionaryRepresentationsOfSupplementaryItems;
-(void)setOrganizerForContactDictionary:(id)arg1 ;
-(EKUITextAndHeaderItem *)subtitleItem;
-(NSArray *)supplementaryItems;
-(NSDictionary *)userActivityUserInfo;
-(void)setUserActivityUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)organizerContactDictionary;
-(EKUITextAndHeaderItem *)titleItem;
@end

