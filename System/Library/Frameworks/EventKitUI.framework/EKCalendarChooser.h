/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol EKCalendarChooserDelegate, EKStyleProvider;
@class NSMutableSet, EKEventStore, UITableView, NSMutableArray, NSMutableDictionary, NSIndexPath, EKSource, _UIAccessDeniedView, UIRefreshControl, NSSet, EKCalendar;

@interface EKCalendarChooser : UIViewController {

	BOOL _disableCalendarEditing;
	BOOL _showsDeclinedEventsSetting;
	BOOL _showDetailAccessories;
	BOOL _showDefaultCalendarExplanatoryText;
	int _chooserMode;
	struct {
		unsigned listIsFlat : 1;
		unsigned showAll : 1;
		unsigned showColors : 1;
		unsigned allSelected : 1;
		unsigned allowsRotation : 1;
		unsigned allowsEdit : 1;
		unsigned showsDoneButton : 1;
		unsigned showsCancelButton : 1;
		unsigned showsWritableCalendarsOnly : 1;
		unsigned showsRefreshButton : 1;
		unsigned allowsPullToRefresh : 1;
	}  _flags;
	long long _style;
	NSMutableSet* _selectedCalendars;
	id<EKCalendarChooserDelegate> _delegate;
	unsigned long long _entityType;
	long long _lastAuthorizationStatus;
	EKEventStore* _eventStore;
	UITableView* _tableView;
	NSMutableArray* _groups;
	NSMutableDictionary* _storeGroupMap;
	NSMutableDictionary* _customGroupMap;
	NSIndexPath* _checkedRow;
	id<EKStyleProvider> _styleProvider;
	EKSource* _limitedToSource;
	_UIAccessDeniedView* _accessDeniedView;
	long long _refreshCounter;
	UIRefreshControl* _refreshControl;

}

@property (assign,nonatomic) long long selectionStyle;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<EKCalendarChooserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (nonatomic,copy) NSSet * selectedCalendars; 
@property (assign,nonatomic) BOOL allowsRotation; 
@property (nonatomic,retain) EKCalendar * selectedCalendar; 
@property (assign,nonatomic) int chooserMode;                                            //@synthesize chooserMode=_chooserMode - In the implementation block
@property (assign,nonatomic) BOOL allowsEdit; 
@property (assign,nonatomic) BOOL disableCalendarEditing;                                //@synthesize disableCalendarEditing=_disableCalendarEditing - In the implementation block
@property (assign,nonatomic) BOOL showsRefreshButton; 
@property (assign,nonatomic) BOOL allowsPullToRefresh; 
@property (assign,nonatomic) BOOL showsDeclinedEventsSetting;                            //@synthesize showsDeclinedEventsSetting=_showsDeclinedEventsSetting - In the implementation block
@property (assign,nonatomic) BOOL showDetailAccessories;                                 //@synthesize showDetailAccessories=_showDetailAccessories - In the implementation block
@property (assign,nonatomic) BOOL showDefaultCalendarExplanatoryText;                    //@synthesize showDefaultCalendarExplanatoryText=_showDefaultCalendarExplanatoryText - In the implementation block
@property (assign,nonatomic) unsigned long long entityType;                              //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) long long lastAuthorizationStatus;                          //@synthesize lastAuthorizationStatus=_lastAuthorizationStatus - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                  //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                                    //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storeGroupMap;                        //@synthesize storeGroupMap=_storeGroupMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customGroupMap;                       //@synthesize customGroupMap=_customGroupMap - In the implementation block
@property (nonatomic,retain) NSIndexPath * checkedRow;                                   //@synthesize checkedRow=_checkedRow - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                          //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) SCD_Struct_EK10 flags;                                      //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedCalendarSet;                         //@synthesize selectedCalendars=_selectedCalendars - In the implementation block
@property (nonatomic,retain) EKSource * limitedToSource;                                 //@synthesize limitedToSource=_limitedToSource - In the implementation block
@property (nonatomic,retain) _UIAccessDeniedView * accessDeniedView;                     //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (assign,nonatomic) long long refreshCounter;                                   //@synthesize refreshCounter=_refreshCounter - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                          //@synthesize refreshControl=_refreshControl - In the implementation block
-(void)setDelegate:(id<EKCalendarChooserDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<EKCalendarChooserDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)marginForTableView:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(BOOL)allowsRotation;
-(void)setSelectionStyle:(long long)arg1 ;
-(long long)selectionStyle;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(NSMutableArray *)groups;
-(void)setEntityType:(unsigned long long)arg1 ;
-(unsigned long long)entityType;
-(id<EKStyleProvider>)styleProvider;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)setSelectedCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)selectedCalendar;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)setSelectedCalendars:(NSSet *)arg1 ;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5 ;
-(NSSet *)selectedCalendars;
-(id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 eventStore:(id)arg3 ;
-(void)setChooserMode:(int)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)setAccessDeniedView:(_UIAccessDeniedView *)arg1 ;
-(id)_viewModeTitle;
-(void)_refreshControlMaximumVisibleTimeElapsed;
-(void)_syncCompletedGracePeriodExpired;
-(id)_loadCalendars;
-(void)_setCalendars:(id)arg1 ;
-(void)refresh:(id)arg1 ;
-(void)_pulledToRefresh:(id)arg1 ;
-(id)_tableHeaderView;
-(BOOL)showDefaultCalendarExplanatoryText;
-(BOOL)_canEnableRefresh;
-(void)_cancelMaximumTimeElapsedTimeout;
-(void)_cancelSyncCompletedTimeout;
-(void)_beginMaximumTimeElapsedTimeout;
-(void)_beginSyncCompletedTimeout;
-(BOOL)disableCalendarEditing;
-(BOOL)_tableShouldDisplayAllCalendarsSection;
-(BOOL)showsDeclinedEventsSetting;
-(BOOL)_calendarAvailableForEditing:(id)arg1 ;
-(BOOL)showDetailAccessories;
-(id)_saveSelection;
-(void)_restoreSelection:(id)arg1 newCalendars:(id)arg2 ;
-(id)_filterCalendars:(id)arg1 ;
-(int)_numSelectedGroups;
-(id)_groupForCustomGroupType:(int)arg1 ;
-(id)_groupForSource:(id)arg1 ;
-(void)_insertStoreIntoByGroupArray:(id)arg1 ;
-(void)_populateGroupsForCalendars:(id)arg1 ;
-(void)_applySelection;
-(id)_indexPathForCalendar:(id)arg1 source:(id)arg2 ;
-(void)setCheckedRow:(NSIndexPath *)arg1 ;
-(BOOL)_tableShouldDisplayNewCalendarCellForGroup:(id)arg1 ;
-(long long)_declinedEventsSwitchSection;
-(BOOL)_tableShouldDisplayAllCellForGroup:(id)arg1 ;
-(BOOL)_shouldShowGroupNameInSection:(long long)arg1 ;
-(void)declinedEventsSwitchChanged:(id)arg1 ;
-(id)_stringForSharedCalendar:(id)arg1 ;
-(BOOL)_isEllipsisCellForGroup:(id)arg1 rowIndex:(long long)arg2 ;
-(id)_cellIdentifierWithSubtitle:(BOOL)arg1 ;
-(void)_selectGroup:(id)arg1 selected:(BOOL)arg2 ;
-(void)_selectAllCalendarsAndStores:(BOOL)arg1 ;
-(void)_selectCalendar:(id)arg1 selected:(BOOL)arg2 ;
-(id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4 ;
-(void)setShowAll:(BOOL)arg1 ;
-(void)setAllowsEdit:(BOOL)arg1 ;
-(BOOL)showsRefreshButton;
-(BOOL)allowsPullToRefresh;
-(void)setShowsRefreshButton:(BOOL)arg1 ;
-(void)setAllowsPullToRefresh:(BOOL)arg1 ;
-(void)setShowsWritableCalendarsOnly:(BOOL)arg1 ;
-(BOOL)showsWritableCalendarsOnly;
-(void)_syncDidStart;
-(void)_syncDidEnd;
-(NSMutableSet *)selectedCalendarSet;
-(void)setSelectedCalendarSet:(NSMutableSet *)arg1 ;
-(int)chooserMode;
-(void)setDisableCalendarEditing:(BOOL)arg1 ;
-(void)setShowsDeclinedEventsSetting:(BOOL)arg1 ;
-(void)setShowDetailAccessories:(BOOL)arg1 ;
-(void)setShowDefaultCalendarExplanatoryText:(BOOL)arg1 ;
-(long long)lastAuthorizationStatus;
-(void)setLastAuthorizationStatus:(long long)arg1 ;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)storeGroupMap;
-(void)setStoreGroupMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)customGroupMap;
-(void)setCustomGroupMap:(NSMutableDictionary *)arg1 ;
-(NSIndexPath *)checkedRow;
-(EKSource *)limitedToSource;
-(void)setLimitedToSource:(EKSource *)arg1 ;
-(long long)refreshCounter;
-(void)setRefreshCounter:(long long)arg1 ;
-(BOOL)allowsEdit;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
-(void)setFlags:(SCD_Struct_EK10)arg1 ;
-(SCD_Struct_EK10)flags;
@end

