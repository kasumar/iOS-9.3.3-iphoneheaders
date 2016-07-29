/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADNotificationMonitorInterface.h>

@interface CADNotificationMonitorOperationGroup : CADOperationGroup <CADNotificationMonitorInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(void)CADDatabaseGetSharedCalendarInvitationsWithReply:(/*^block*/id)arg1 ;
-(void)CADCalendarSetClearedFromNotificationCenter:(SCD_Struct_CA1)arg1 error:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetResourceChanges:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetInviteReplyNotifications:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetEventNotificationItems:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetReminderNotificationItems:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetInboxRepliedSectionItems:(/*^block*/id)arg1 ;
-(void)CADEvent:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2 ;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2 ;
-(void)CADResourceChange:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2 ;
-(void)CADInviteReplyNotification:(SCD_Struct_CA1)arg1 setAlertedWithError:(/*^block*/id)arg2 ;
-(void)CADEventSetInvitationStatus:(int)arg1 forEvent:(SCD_Struct_CA1)arg2 error:(/*^block*/id)arg3 ;
@end

