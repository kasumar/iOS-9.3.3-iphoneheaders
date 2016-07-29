/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKDaemonConnection.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSNumber, EKCalendar, EKDaemonConnection, NSTimeZone, NSObject, NSArray, NSString, EKAlarm;

@interface EKEventStore : NSObject <EKDaemonConnection> {

	unsigned _flags;
	NSMutableDictionary* _registeredObjects;
	NSMutableDictionary* _publicRegisteredObjects;
	NSMutableSet* _insertedObjects;
	NSMutableSet* _deletedObjects;
	NSMutableSet* _updatedObjects;
	NSNumber* _defaultTimedAlarmOffset;
	NSNumber* _defaultAllDayAlarmOffset;
	EKCalendar* _defaultCalendarForNewEvents;
	EKCalendar* _defaultCalendarForNewReminders;
	EKCalendar* _suggestedEventCalendar;
	EKDaemonConnection* _database;
	double _lastDatabaseNotificationTimestamp;
	NSTimeZone* _timeZone;
	NSMutableDictionary* _calendars;
	NSMutableDictionary* _sources;
	NSMutableSet* _objectsPendingCommit;
	NSObject*<OS_dispatch_queue> _calendarQueue;
	NSObject*<OS_dispatch_queue> _registeredQueue;
	NSObject*<OS_dispatch_queue> _unsavedChangesQueue;
	NSObject*<OS_dispatch_queue> _dbChangedQueue;
	NSMutableDictionary* _cachedValidatedEmails;
	NSArray* _delegateSources;

}

@property (nonatomic,readonly) NSString * eventStoreIdentifier; 
@property (nonatomic,readonly) NSArray * delegateSources;                                   //@synthesize delegateSources=_delegateSources - In the implementation block
@property (nonatomic,readonly) NSArray * sources; 
@property (nonatomic,readonly) NSArray * calendars; 
@property (nonatomic,readonly) EKCalendar * defaultCalendarForNewEvents; 
@property (nonatomic,copy) NSTimeZone * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) EKCalendar * suggestedEventCalendar; 
@property (nonatomic,readonly) EKAlarm * defaultTimedAlarm; 
@property (nonatomic,readonly) EKAlarm * defaultAllDayAlarm; 
@property (nonatomic,readonly) int unacknowledgedEventCount; 
@property (nonatomic,readonly) int notifiableEventCount; 
@property (nonatomic,readonly) NSArray * eventNotifications; 
@property (nonatomic,readonly) NSArray * inboxRepliedSectionItems; 
@property (nonatomic,readonly) NSArray * reminderNotifications; 
@property (assign,nonatomic) BOOL showDeclinedEvents; 
@property (readonly) EKDaemonConnection * connection; 
@property (assign,nonatomic) BOOL automaticLocationGeocodingAllowed; 
@property (assign,nonatomic) NSMutableDictionary * registeredObjects;                       //@synthesize registeredObjects=_registeredObjects - In the implementation block
@property (assign,nonatomic) NSMutableDictionary * publicRegisteredObjects;                 //@synthesize publicRegisteredObjects=_publicRegisteredObjects - In the implementation block
@property (assign,nonatomic) NSMutableSet * insertedObjects;                                //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (assign,nonatomic) NSMutableSet * deletedObjects;                                 //@synthesize deletedObjects=_deletedObjects - In the implementation block
@property (assign,nonatomic) NSMutableSet * updatedObjects;                                 //@synthesize updatedObjects=_updatedObjects - In the implementation block
@property (assign,nonatomic) NSMutableSet * objectsPendingCommit;                           //@synthesize objectsPendingCommit=_objectsPendingCommit - In the implementation block
@property (nonatomic,retain) NSNumber * defaultTimedAlarmOffset;                            //@synthesize defaultTimedAlarmOffset=_defaultTimedAlarmOffset - In the implementation block
@property (nonatomic,retain) NSNumber * defaultAllDayAlarmOffset;                           //@synthesize defaultAllDayAlarmOffset=_defaultAllDayAlarmOffset - In the implementation block
@property (nonatomic,retain) EKCalendar * _defaultCalendarForNewEvents;                     //@synthesize defaultCalendarForNewEvents=_defaultCalendarForNewEvents - In the implementation block
@property (nonatomic,retain) EKCalendar * _defaultCalendarForNewReminders;                  //@synthesize defaultCalendarForNewReminders=_defaultCalendarForNewReminders - In the implementation block
@property (nonatomic,retain) EKCalendar * _suggestedEventCalendar;                          //@synthesize suggestedEventCalendar=_suggestedEventCalendar - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _calendars;                              //@synthesize calendars=_calendars - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _sources;                                //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) EKDaemonConnection * database;                                 //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) double lastDatabaseNotificationTimestamp;                      //@synthesize lastDatabaseNotificationTimestamp=_lastDatabaseNotificationTimestamp - In the implementation block
@property (assign,nonatomic) unsigned flags;                                                //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> calendarQueue;                    //@synthesize calendarQueue=_calendarQueue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> registeredQueue;                  //@synthesize registeredQueue=_registeredQueue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> unsavedChangesQueue;              //@synthesize unsavedChangesQueue=_unsavedChangesQueue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> dbChangedQueue;                   //@synthesize dbChangedQueue=_dbChangedQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedValidatedEmails;                  //@synthesize cachedValidatedEmails=_cachedValidatedEmails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForEntityName:(id)arg1 ;
+(Class)publicClassForEntityName:(id)arg1 ;
+(long long)authorizationStatusForEntityType:(unsigned long long)arg1 ;
-(id)colorForCalendar:(id)arg1 ;
-(id)_uicolorFromString:(id)arg1 ;
-(id)symbolicNameToUIColors;
-(id)colorNamesInRainbowOrder;
-(id)localizedStringForSymbolicColorName:(id)arg1 ;
-(id)defaultCalendarColorsInRainbowOrder;
-(id)stringForColor:(id)arg1 ;
-(void)setDeletedObjects:(NSMutableSet *)arg1 ;
-(void)setInsertedObjects:(NSMutableSet *)arg1 ;
-(void)setUpdatedObjects:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(id)init;
-(oneway void)release;
-(void)reset;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(EKDaemonConnection *)connection;
-(void)setSourceAccountManagement:(int)arg1 ;
-(id)calendarWithIdentifier:(id)arg1 ;
-(NSArray *)sources;
-(int)sequenceNumber;
-(id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2 ;
-(BOOL)canModifySuggestedEventCalendar;
-(NSArray *)calendars;
-(NSMutableDictionary *)_calendars;
-(id)registerFetchedObjectWithID:(id)arg1 ;
-(id)publicObjectWithPersistentObject:(id)arg1 ;
-(BOOL)objectWithIDExists:(id)arg1 ;
-(void)_insertObject:(id)arg1 ;
-(void)_deleteObject:(id)arg1 ;
-(void)daemonRestarted;
-(id)publicObjectWithObjectID:(id)arg1 ;
-(id)registerFetchedObjectWithID:(id)arg1 withDefaultLoadedProperties:(id)arg2 inSet:(id)arg3 ;
-(void)_registerObject:(id)arg1 ;
-(BOOL)saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isDataProtected;
-(id)earliestExpiringNotifiableEventEndDateAfterDate:(id)arg1 timeZone:(id)arg2 ;
-(NSArray *)eventNotifications;
-(NSArray *)reminderNotifications;
-(id)markNotificationsAlertedAndSave:(id)arg1 ;
-(id)insertNewEvent;
-(void)_trackModifiedObject:(id)arg1 ;
-(id)predicateForTravelEventsInCalendars:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_unregisterObject:(id)arg1 ;
-(id)birthdayContactIdentifierForEvent:(id)arg1 ;
-(id)insertNewExceptionDateWithDate:(id)arg1 ;
-(id)_allCalendars;
-(void)_requestAccessForEntityType:(unsigned long long)arg1 ;
-(void)_accessStatusChanged;
-(void)set_defaultCalendarForNewEvents:(EKCalendar *)arg1 ;
-(void)set_defaultCalendarForNewReminders:(EKCalendar *)arg1 ;
-(void)_validateObjectIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_databaseChangedExternally;
-(void)_saveWithoutNotify;
-(BOOL)_calendar:(id)arg1 supportsEntityType:(unsigned long long)arg2 ;
-(id)_calendarWithID:(id)arg1 ;
-(BOOL)removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)canModifyCalendarDatabase;
-(void)_addObjectToPendingCommits:(id)arg1 ;
-(BOOL)_parseURI:(id)arg1 expectedScheme:(id)arg2 identifier:(id*)arg3 options:(id*)arg4 ;
-(id)eventWithUniqueId:(id)arg1 occurrenceDate:(id)arg2 ;
-(void)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(id)calendarItemWithIdentifier:(id)arg1 ;
-(id)_calendarItemsMatchingPredicate:(id)arg1 ;
-(id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7 ;
-(id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned long long)arg9 ;
-(id)sharedCalendarInvitationsForEntityTypes:(unsigned long long)arg1 ;
-(id)remindersMatchingPredicate:(id)arg1 ;
-(void)set_suggestedEventCalendar:(EKCalendar *)arg1 ;
-(Class)_SGSuggestionsServiceClass;
-(BOOL)markEventAlerted:(id)arg1 ;
-(BOOL)markResourceChangeAlerted:(id)arg1 error:(id*)arg2 ;
-(BOOL)markCalendarAlerted:(id)arg1 ;
-(BOOL)markInviteReplyNotificationAlerted:(id)arg1 ;
-(BOOL)removeResourceChanges:(id)arg1 error:(id*)arg2 ;
-(id)resourceChangesForEntityTypes:(unsigned long long)arg1 ;
-(BOOL)removeInviteReplyNotifications:(id)arg1 error:(id*)arg2 ;
-(void)_refreshDASource:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_registerObjectImmediate:(id)arg1 ;
-(id)_addFetchedObjectWithID:(id)arg1 ;
-(id)sourceWithIdentifier:(id)arg1 ;
-(void)_forgetRegisteredObjects;
-(void)_reregisterObject:(id)arg1 oldID:(id)arg2 ;
-(void)_waitOnSemaphore:(id)arg1 ;
-(NSNumber *)defaultTimedAlarmOffset;
-(NSNumber *)defaultAllDayAlarmOffset;
-(id)changesSinceSequenceNumber:(int)arg1 ;
-(NSString *)eventStoreIdentifier;
-(void)setAutomaticLocationGeocodingAllowed:(BOOL)arg1 ;
-(id)localSource;
-(id)ownedSources;
-(BOOL)saveSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)hideCalendarsFromNotificationCenter:(id)arg1 error:(id*)arg2 ;
-(id)eventWithIdentifier:(id)arg1 ;
-(id)_eventOccurrenceWithURI:(id)arg1 ;
-(BOOL)setInvitationStatus:(unsigned long long)arg1 forEvent:(id)arg2 error:(id*)arg3 ;
-(BOOL)setInvitationStatus:(unsigned long long)arg1 forEvents:(id)arg2 error:(id*)arg3 ;
-(id)importICS:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setDefaultCalendarForNewEvents:(EKCalendar *)arg1 ;
-(void)setDefaultCalendarForNewReminders:(id)arg1 ;
-(BOOL)saveReminder:(id)arg1 error:(id*)arg2 ;
-(id)reminderWithExternalURI:(id)arg1 ;
-(id)insertNewReminder;
-(int)countOfRemindersMatchingPredicate:(id)arg1 ;
-(id)fetchRemindersMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)predicateForRemindersInCalendars:(id)arg1 ;
-(id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3 ;
-(id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForCompletedRemindersWithCalendars:(id)arg1 ;
-(id)predicateForRemindersWithSearchTerm:(id)arg1 ;
-(id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 ;
-(BOOL)fetchProperties:(id)arg1 forReminders:(id)arg2 ;
-(id)eventWithUUID:(id)arg1 ;
-(id)doEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 ;
-(id)calendarWithExternalURI:(id)arg1 ;
-(id)scheduledTaskCacheFetchDaysAndTaskCounts;
-(id)scheduledTaskCacheFetchTasksOnDay:(id)arg1 ;
-(BOOL)showDeclinedEvents;
-(EKCalendar *)suggestedEventCalendar;
-(void)insertSuggestedEventCalendar;
-(void)removeSuggestedEventCalendar;
-(int)unacknowledgedEventCount;
-(int)notifiableEventCount;
-(BOOL)removeResourceChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeResourceChangesForCalendarItem:(id)arg1 error:(id*)arg2 ;
-(NSArray *)inboxRepliedSectionItems;
-(id)inviteReplyNotifications;
-(BOOL)removeInviteReplyNotification:(id)arg1 error:(id*)arg2 ;
-(void)refreshSourcesIfNecessary;
-(void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)cancelFetchRequest:(id)arg1 ;
-(id)alarmWithUUID:(id)arg1 ;
-(void)alarmOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 inCalendars:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)locationBasedAlarmOccurrencesWithCompletion:(/*^block*/id)arg1 ;
-(void)vehicleTriggerAlarmOccurrencesWithCompletion:(/*^block*/id)arg1 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 eventUUID:(id)arg3 calendars:(id)arg4 ;
-(id)predicateForNotifiableEvents;
-(id)predicateForNotificationCenterVisibleEvents;
-(id)predicateForUnacknowledgedEvents;
-(id)predicateForUnalertedEvents;
-(id)predicateForUpcomingEventsWithLimit:(int)arg1 ;
-(id)predicateForMasterEventsInCalendars:(id)arg1 ;
-(id)predicateForEventsWithStartDate:(id)arg1 title:(id)arg2 source:(id)arg3 ;
-(id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)arg1 ;
-(void)_protectedDataDidBecomeAvailable;
-(BOOL)registerForDetailedChangeTracking:(id*)arg1 ;
-(void)fetchChangedObjectIDsSinceToken:(long long)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)markChangedObjectIDsConsumedUpToToken:(long long)arg1 ;
-(void)setDefaultTimedAlarmOffset:(NSNumber *)arg1 ;
-(void)setDefaultAllDayAlarmOffset:(NSNumber *)arg1 ;
-(BOOL)moveDiagnosticsLogToCrashReporterFolder;
-(id)gatherLogs;
-(void)pushSpotlightUpdatesForCalendarItemUUIDs:(id)arg1 ;
-(void)setRegisteredObjects:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)publicRegisteredObjects;
-(void)setPublicRegisteredObjects:(NSMutableDictionary *)arg1 ;
-(EKCalendar *)_defaultCalendarForNewEvents;
-(EKCalendar *)_defaultCalendarForNewReminders;
-(EKCalendar *)_suggestedEventCalendar;
-(double)lastDatabaseNotificationTimestamp;
-(void)setLastDatabaseNotificationTimestamp:(double)arg1 ;
-(void)set_calendars:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)_sources;
-(void)set_sources:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)objectsPendingCommit;
-(void)setObjectsPendingCommit:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)calendarQueue;
-(void)setCalendarQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)registeredQueue;
-(void)setRegisteredQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)unsavedChangesQueue;
-(void)setUnsavedChangesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dbChangedQueue;
-(void)setDbChangedQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)_cachedValidatedEmails;
-(void)set_cachedValidatedEmails:(NSMutableDictionary *)arg1 ;
-(NSArray *)delegateSources;
-(void)rollback;
-(id)objectWithObjectID:(id)arg1 ;
-(NSMutableDictionary *)registeredObjects;
-(NSMutableSet *)insertedObjects;
-(NSMutableSet *)updatedObjects;
-(NSMutableSet *)deletedObjects;
-(id)calendarItemsWithExternalIdentifier:(id)arg1 ;
-(BOOL)occurrenceCacheOccurrencesAreBeingGenerated;
-(id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 ;
-(id)occurrenceCacheGetOccurrencesForCalendars:(id)arg1 onDay:(double)arg2 ;
-(id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 checkValid:(BOOL)arg3 ;
-(id)eventForUID:(id)arg1 occurrenceDate:(id)arg2 ;
-(EKCalendar *)defaultCalendarForNewEvents;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
-(id)eventsMatchingPredicate:(id)arg1 ;
-(int)readWriteCalendarCountForEntityType:(unsigned long long)arg1 ;
-(id)readWriteCalendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id*)arg3 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 loadDefaultProperties:(BOOL)arg4 ;
-(id)initWithOptions:(unsigned)arg1 path:(id)arg2 ;
-(id)importICSData:(id)arg1 intoCalendar:(id)arg2 options:(unsigned long long)arg3 ;
-(id)eventWithUniqueId:(id)arg1 ;
-(BOOL)saveCalendar:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteCalendar:(id)arg1 forEntityType:(int)arg2 error:(id*)arg3 ;
-(BOOL)removeCalendar:(id)arg1 error:(id*)arg2 ;
-(void)cacheValidationStatusForEmail:(id)arg1 status:(unsigned long long)arg2 ;
-(unsigned long long)emailAddressValidationStatus:(id)arg1 ;
-(BOOL)saveEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3 ;
-(id)fetchEventsMatchingPredicate:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)saveEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)automaticLocationGeocodingAllowed;
-(CGColorRef)copyCGColorForNewCalendar;
-(EKAlarm *)defaultAllDayAlarm;
-(EKAlarm *)defaultTimedAlarm;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3 ;
-(BOOL)removeReminder:(id)arg1 error:(id*)arg2 ;
-(void)acceptSuggestedEvent:(id)arg1 ;
-(void)deleteSuggestedEvent:(id)arg1 ;
-(id)calendarWithID:(id)arg1 ;
-(void)refreshSourcesIfNecessary:(BOOL)arg1 ;
-(id)closestCachedOccurrenceToDate:(double)arg1 forEventUID:(int)arg2 ;
-(id)defaultCalendarForNewReminders;
-(void)setShowDeclinedEvents:(BOOL)arg1 ;
-(EKDaemonConnection *)database;
-(void)setDatabase:(EKDaemonConnection *)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(void)requestAccessToEntityType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id*)arg4 ;
@end

