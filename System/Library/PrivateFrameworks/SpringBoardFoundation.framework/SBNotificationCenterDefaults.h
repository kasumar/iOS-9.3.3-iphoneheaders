/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL useDuetRecommendations; 
@property (assign,nonatomic) BOOL publishBatteryWidget; 
@property (getter=isBatteryWidgetAlwaysAvailable,nonatomic,readonly) BOOL batteryWidgetAlwaysAvailable; 
@property (nonatomic,readonly) BOOL showInternalWidgets; 
@property (getter=isWidgetSnapshottingEnabled,nonatomic,readonly) BOOL widgetSnapshottingEnabled; 
@property (nonatomic,readonly) BOOL disableNotificationCenterBlur; 
@property (getter=isWidgetLoggingEnabled,nonatomic,readonly) BOOL widgetLoggingEnabled; 
@property (nonatomic,readonly) BOOL showWidgetSnapshotDebugLabels; 
-(void)setShowWidgetSnapshotDebugLabels:(BOOL)arg1 ;
-(BOOL)showWidgetSnapshotDebugLabels;
-(void)setWidgetLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetLoggingEnabled;
-(void)setPublishBatteryWidget:(BOOL)arg1 ;
-(BOOL)publishBatteryWidget;
-(void)setWidgetSnapshottingEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetSnapshottingEnabled;
-(void)setUseDuetRecommendations:(BOOL)arg1 ;
-(BOOL)useDuetRecommendations;
-(void)setShowInternalWidgets:(BOOL)arg1 ;
-(BOOL)showInternalWidgets;
-(void)setBatteryWidgetAlwaysAvailable:(BOOL)arg1 ;
-(BOOL)isBatteryWidgetAlwaysAvailable;
-(void)setDisableNotificationCenterBlur:(BOOL)arg1 ;
-(BOOL)disableNotificationCenterBlur;
-(void)_bindAndRegisterDefaults;
-(BOOL)publishBatteryWidgetExists;
@end

