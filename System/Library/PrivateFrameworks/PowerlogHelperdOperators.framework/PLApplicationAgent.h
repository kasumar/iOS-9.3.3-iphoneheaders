/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLNSNotificationOperatorComposition, NSMutableSet, PLTimer, NSDate, NSSet, BKSApplicationStateMonitor;

@interface PLApplicationAgent : PLAgent {

	PLNSNotificationOperatorComposition* _notificationSBApplicationStateChanged;
	NSMutableSet* _keyboardPlugins;
	NSMutableSet* _widgetPlugins;
	PLTimer* _runTimeAggregatorTimer;
	NSDate* _startDateForOverAllBackGroundActivity;
	NSSet* _currentDisplayIdentifiers;
	BKSApplicationStateMonitor* _appStateMonitor;

}

@property (readonly) PLNSNotificationOperatorComposition * notificationSBApplicationStateChanged;              //@synthesize notificationSBApplicationStateChanged=_notificationSBApplicationStateChanged - In the implementation block
@property (retain) NSMutableSet * keyboardPlugins;                                                             //@synthesize keyboardPlugins=_keyboardPlugins - In the implementation block
@property (retain) NSMutableSet * widgetPlugins;                                                               //@synthesize widgetPlugins=_widgetPlugins - In the implementation block
@property (retain) PLTimer * runTimeAggregatorTimer;                                                           //@synthesize runTimeAggregatorTimer=_runTimeAggregatorTimer - In the implementation block
@property (retain) NSDate * startDateForOverAllBackGroundActivity;                                             //@synthesize startDateForOverAllBackGroundActivity=_startDateForOverAllBackGroundActivity - In the implementation block
@property (retain) NSSet * currentDisplayIdentifiers;                                                          //@synthesize currentDisplayIdentifiers=_currentDisplayIdentifiers - In the implementation block
@property (retain) BKSApplicationStateMonitor * appStateMonitor;                                               //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)appNameForBundleID:(id)arg1 ;
+(id)installedPlugins;
+(id)pluginEntryFromProxy:(id)arg1 ;
+(id)entryEventForwardDefinitionApplication;
+(id)entryEventNoneDefinitionApplicationMetadata;
+(id)entryEventNoneAllApps;
+(id)entryEventNoneAllPlugins;
+(id)entryAggregateDefinitionApplicationReason;
+(id)defaults;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(PLTimer *)runTimeAggregatorTimer;
-(void)setRunTimeAggregatorTimer:(PLTimer *)arg1 ;
-(id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2 ;
-(void)displayIdentifiersDidChange;
-(void)logEventPointApplicationForDisplayID:(id)arg1 withPid:(int)arg2 withState:(id)arg3 withReasons:(id)arg4 ;
-(void)logEventPointApplicationMetaDataForDisplayID:(id)arg1 withPid:(int)arg2 ;
-(void)logAllPlugins;
-(void)logAllApps;
-(id)extensionSetWithType:(id)arg1 ;
-(void)setWidgetPlugins:(NSMutableSet *)arg1 ;
-(void)setKeyboardPlugins:(NSMutableSet *)arg1 ;
-(void)refreshAllAppsAndPlugins;
-(void)logEventPointApplication;
-(void)logEventPointApplicationForDisplayID:(id)arg1 ;
-(NSMutableSet *)widgetPlugins;
-(NSSet *)currentDisplayIdentifiers;
-(void)logInstalledApp:(id)arg1 ;
-(void)logUninstalledApp:(id)arg1 ;
-(void)setCurrentDisplayIdentifiers:(NSSet *)arg1 ;
-(void)logInstalledPlugin:(id)arg1 ;
-(NSMutableSet *)keyboardPlugins;
-(void)buildQueryWithQuery:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 ;
-(PLNSNotificationOperatorComposition *)notificationSBApplicationStateChanged;
-(NSDate *)startDateForOverAllBackGroundActivity;
-(void)setStartDateForOverAllBackGroundActivity:(NSDate *)arg1 ;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
@end

