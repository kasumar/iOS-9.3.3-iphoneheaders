/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarProvider/EKBBDataProvider.h>

@protocol OS_dispatch_queue;
@class _EKNotificationMonitor, NSMutableDictionary, NSObject, NSDateFormatter;

@interface EKBBEventProvider : EKBBDataProvider {

	_EKNotificationMonitor* _notificationMonitor;
	NSMutableDictionary* _notifications;
	NSObject*<OS_dispatch_queue> _invitesQueue;
	NSObject*<OS_dispatch_queue> _loaderQueue;
	BOOL _needsLoad;
	NSDateFormatter* _dateFormatter;

}
+(BOOL)_shouldRequestReportAProblemAction;
+(id)_reportAProblemActionForAlertInfo:(id)arg1 ;
-(void)_notificationsChanged:(id)arg1 ;
-(id)defaultURLForAlertInfo:(id)arg1 ;
-(id)viewButtonTitleForAlertInfo:(id)arg1 ;
-(id)actionButtonTitleForAlertInfo:(id)arg1 ;
-(id)emptyModalTitle;
-(id)entityScheme;
-(id)modalMessageForAlertInfo:(id)arg1 ;
-(BOOL)allowsLocationAlerts;
-(BOOL)_loadNotifications;
-(void)_setParticipantStatus:(long long)arg1 recordID:(id)arg2 ;
-(id)_resourceChangeURIFromBulletin:(id)arg1 ;
-(void)_notificationCountChanged:(id)arg1 ;
-(void)_addNotification:(id)arg1 replace:(BOOL)arg2 ;
-(id)_snoozeActionWithAlertInfo:(id)arg1 ;
-(id)_notifications;
-(void)_unalertedNotificationsReceived:(id)arg1 ;
-(id)_bulletinRequestWithCalendarNotification:(id)arg1 ;
-(id)_expirationDateForEventInvitation:(id)arg1 ;
-(void)_setPropertiesOnBulletinRequest:(id)arg1 fromResourceChange:(id)arg2 ;
-(void)_setEventRepresentationForNotification:(id)arg1 bulletin:(id)arg2 ;
-(unsigned long long)_countOfSuggestedNotificationsToIgnore;
-(id)_expirationDateForResourceChange:(id)arg1 ;
-(id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 ;
-(id)_snoozeOrReportAProblemActionForAlertInfo:(id)arg1 ;
-(id)supplementaryActionsForCompactLayoutForAlertInfo:(id)arg1 bulletin:(id)arg2 ;
-(void)_calendarNotificationSettingChanged;
-(void)setUpLayoutDataForPluginWithBulletin:(id)arg1 alertInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)_dateFormatter;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(unsigned long long)allowedEntityTypes;
-(void)_reloadIfNeeded;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_reload;
-(void)databaseChanged:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3 ;
-(id)universalSectionIdentifier;
-(id)defaultSectionInfo;
@end

