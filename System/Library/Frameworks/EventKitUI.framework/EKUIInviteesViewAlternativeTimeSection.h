/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKUIInviteesViewConflictResolutionSection.h>

@class NSString, NSMutableSet, NSArray, EKUIInviteeAlternativeTimeSearcher;

@interface EKUIInviteesViewAlternativeTimeSection : NSObject <EKUIInviteesViewConflictResolutionSection> {

	BOOL _hasCheckedRow;
	BOOL _availabilityRequestInProgress;
	BOOL _initialSearchInProgress;
	BOOL _searchExhausted;
	/*^block*/id _showMoreAlternativeTimesTapped;
	NSString* _cachedTimeCellReuseIdentifier;
	NSString* _cachedConflictSearchCellReuseIdentifier;
	unsigned long long _reuseIdentifierVersion;
	/*^block*/id _tableViewCellHook;
	/*^block*/id _newTimeChosen;
	/*^block*/id _showPreviewOfEventAtTime;
	NSMutableSet* _rowsShowingAllParticipants;
	NSArray* _alternativeTimes;
	long long _lastCheckedRow;
	unsigned long long _maximumNumberOfTimeSlotsToShow;
	EKUIInviteeAlternativeTimeSearcher* _availabilitySearcher;

}

@property (nonatomic,copy) id showMoreAlternativeTimesTapped;                                        //@synthesize showMoreAlternativeTimesTapped=_showMoreAlternativeTimesTapped - In the implementation block
@property (nonatomic,readonly) unsigned long long initialNumberOfTimeSlotsToShow; 
@property (nonatomic,readonly) NSArray * searcherTimeSlots; 
@property (nonatomic,readonly) Class customTimeCellClass; 
@property (nonatomic,readonly) BOOL searchingForMoreTimes; 
@property (nonatomic,retain) NSString * cachedTimeCellReuseIdentifier;                               //@synthesize cachedTimeCellReuseIdentifier=_cachedTimeCellReuseIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cachedConflictSearchCellReuseIdentifier;                     //@synthesize cachedConflictSearchCellReuseIdentifier=_cachedConflictSearchCellReuseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long reuseIdentifierVersion;                              //@synthesize reuseIdentifierVersion=_reuseIdentifierVersion - In the implementation block
@property (nonatomic,copy) id tableViewCellHook;                                                     //@synthesize tableViewCellHook=_tableViewCellHook - In the implementation block
@property (nonatomic,copy) id newTimeChosen;                                                         //@synthesize newTimeChosen=_newTimeChosen - In the implementation block
@property (nonatomic,copy) id showPreviewOfEventAtTime;                                              //@synthesize showPreviewOfEventAtTime=_showPreviewOfEventAtTime - In the implementation block
@property (nonatomic,retain) NSMutableSet * rowsShowingAllParticipants;                              //@synthesize rowsShowingAllParticipants=_rowsShowingAllParticipants - In the implementation block
@property (nonatomic,retain) NSArray * alternativeTimes;                                             //@synthesize alternativeTimes=_alternativeTimes - In the implementation block
@property (assign,nonatomic) long long lastCheckedRow;                                               //@synthesize lastCheckedRow=_lastCheckedRow - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedRow;                                                     //@synthesize hasCheckedRow=_hasCheckedRow - In the implementation block
@property (assign,nonatomic) BOOL availabilityRequestInProgress;                                     //@synthesize availabilityRequestInProgress=_availabilityRequestInProgress - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTimeSlotsToShow;                      //@synthesize maximumNumberOfTimeSlotsToShow=_maximumNumberOfTimeSlotsToShow - In the implementation block
@property (nonatomic,retain) EKUIInviteeAlternativeTimeSearcher * availabilitySearcher;              //@synthesize availabilitySearcher=_availabilitySearcher - In the implementation block
@property (assign,nonatomic) BOOL initialSearchInProgress;                                           //@synthesize initialSearchInProgress=_initialSearchInProgress - In the implementation block
@property (assign,nonatomic) BOOL searchExhausted;                                                   //@synthesize searchExhausted=_searchExhausted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)numberOfRows;
-(id)headerTitle;
-(BOOL)availabilityRequestInProgress;
-(void)setAvailabilityRequestInProgress:(BOOL)arg1 ;
-(BOOL)_isValidRow:(long long)arg1 ;
-(unsigned long long)reuseIdentifierVersion;
-(void)setReuseIdentifierVersion:(unsigned long long)arg1 ;
-(id)debugTitle;
-(BOOL)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1 ;
-(BOOL)canSelectRow:(id)arg1 ;
-(void)selectRow:(id)arg1 ;
-(double)estimatedHeightForRow:(id)arg1 ;
-(BOOL)canEditRow:(id)arg1 ;
-(long long)editingStyleForRow:(id)arg1 ;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1 ;
-(void)commitEditingStyle:(long long)arg1 forRow:(id)arg2 ;
-(void)setTableViewCellHook:(id)arg1 ;
-(void)cancelOutstandingOperations;
-(id)tableViewCellHook;
-(void)setAvailabilitySearcher:(EKUIInviteeAlternativeTimeSearcher *)arg1 ;
-(void)clearCheckmark;
-(EKUIInviteeAlternativeTimeSearcher *)availabilitySearcher;
-(void)setShowPreviewOfEventAtTime:(id)arg1 ;
-(void)setNewTimeChosen:(id)arg1 ;
-(void)setShowMoreAlternativeTimesTapped:(id)arg1 ;
-(void)availabilitySearcherChangedState:(long long)arg1 ;
-(BOOL)injectNewRowsBeforeLastExistingRow;
-(void)refreshCellsAfterStateChange;
-(id)showPreviewOfEventAtTime;
-(void)setRowsShowingAllParticipants:(NSMutableSet *)arg1 ;
-(NSMutableSet *)rowsShowingAllParticipants;
-(id)newTimeChosen;
-(unsigned long long)initialNumberOfTimeSlotsToShow;
-(NSArray *)searcherTimeSlots;
-(Class)customTimeCellClass;
-(BOOL)searchingForMoreTimes;
-(void)searchForMoreTimes;
-(unsigned long long)_numberOfTimeSlotsShown;
-(BOOL)initialSearchInProgress;
-(BOOL)searchExhausted;
-(BOOL)_isConflictSearchRow:(long long)arg1 ;
-(NSString *)cachedConflictSearchCellReuseIdentifier;
-(NSString *)cachedTimeCellReuseIdentifier;
-(BOOL)hasCheckedRow;
-(long long)lastCheckedRow;
-(id)_alternativeTimeAtIndex:(long long)arg1 ;
-(void)setCachedTimeCellReuseIdentifier:(NSString *)arg1 ;
-(void)setCachedConflictSearchCellReuseIdentifier:(NSString *)arg1 ;
-(NSArray *)alternativeTimes;
-(unsigned long long)maximumNumberOfTimeSlotsToShow;
-(void)setMaximumNumberOfTimeSlotsToShow:(unsigned long long)arg1 ;
-(id)showMoreAlternativeTimesTapped;
-(void)setHasCheckedRow:(BOOL)arg1 ;
-(void)setLastCheckedRow:(long long)arg1 ;
-(void)setAlternativeTimes:(NSArray *)arg1 ;
-(void)setSearchExhausted:(BOOL)arg1 ;
-(void)setInitialSearchInProgress:(BOOL)arg1 ;
@end

