/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSCEReferenceTrackerDelegate.h>

@class TSCENamedReferenceTrie, NSLock, TSCEReferenceTracker, TSCECalculationEngine;

@interface TSCENamedReferenceManager : TSPObject <TSCEReferenceTrackerDelegate> {

	TSCENamedReferenceTrie* mNames;
	CFDictionaryRef mStringsByTrackedReferenceByTable;
	CFSetRef mTablesBeingTracked;
	NSLock* mNRMLock;
	TSCEReferenceTracker* mReferenceTracker;
	TSCECalculationEngine* mCalculationEngine;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 ;
-(void)updateTrackedHeaders:(CFUUIDRef)arg1 ;
-(BOOL)referenceNameIsUnique:(id)arg1 forReference:(SCD_Struct_TS318*)arg2 contextTable:(CFUUIDRef)arg3 ;
-(id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(CFUUIDRef)arg2 ;
-(id)trackedReferencesMatchingPrefix:(id)arg1 scopedToTable:(CFUUIDRef)arg2 ;
-(id)referenceForTrackedReference:(id)arg1 sticky:(BOOL)arg2 ;
-(SCD_Struct_TS318*)rangeForTrackedReference:(id)arg1 gettingTrackedCell:(SCD_Struct_TS319*)arg2 ;
-(id)referenceTracker;
-(void)setCalculationEngine:(id)arg1 ;
-(CFUUIDRef)formulaOwnerID;
-(void)beginTrackingNamesInRange:(TSCERangeCoordinate)arg1 ofResolver:(id)arg2 addingTrackedReferencesTo:(id)arg3 ;
-(void)beginTrackingNameInCell:(SCD_Struct_TS315)arg1 ofResolver:(id)arg2 addingTrackedReferencesTo:(id)arg3 ;
-(id)stringForTrackedReference:(id)arg1 inTable:(CFUUIDRef)arg2 ;
-(void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(CFUUIDRef)arg2 ;
-(BOOL)trackedReferencesExistForTable:(CFUUIDRef)arg1 ;
-(void)headerCellContentWasModified:(id)arg1 ;
-(id)beginTrackingNamesInTable:(CFUUIDRef)arg1 limitedToRange:(TSCERangeCoordinate)arg2 ;
-(void)referencedCellWasModified:(id)arg1 ;
-(BOOL)shouldRewriteOnSort;
-(BOOL)shouldRewriteOnRangeMove;
-(BOOL)shouldRewriteOnTectonicShift;
-(BOOL)shouldRewriteOnCellMerge;
-(BOOL)shouldRewriteOnTranspose;
-(BOOL)shouldRewriteOnTableIDReassignment;
-(id)cellRangeWasInserted:(SCD_Struct_TS318*)arg1 ;
-(void)endTrackingNamesInTable:(CFUUIDRef)arg1 ;
-(id)trackedReferencesMatchingPrefix:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithContext:(id)arg1 ;
@end

