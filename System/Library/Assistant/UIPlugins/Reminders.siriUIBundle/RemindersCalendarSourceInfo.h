/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Reminders.siriUIBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject {

	EKSource* _source;
	NSMutableArray* _array;

}

@property (readonly) NSMutableArray * calendarArray;              //@synthesize array=_array - In the implementation block
+(id)sortedGroupsOfCalendarsInEventStore:(id)arg1 includingInvitations:(BOOL)arg2 ;
-(BOOL)shouldShowWhenViewingLists;
-(BOOL)_isNonEmpty;
-(BOOL)canAddList;
-(NSMutableArray *)calendarArray;
-(BOOL)canDeleteList;
-(BOOL)shouldShowWhenEditingLists;
-(id)source;
-(id)title;
-(int)sortOrder;
-(id)initWithSource:(id)arg1 ;
@end

