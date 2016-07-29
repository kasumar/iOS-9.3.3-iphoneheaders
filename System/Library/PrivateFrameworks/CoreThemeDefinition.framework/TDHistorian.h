/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CoreThemeDocument;

@interface TDHistorian : NSObject {

	CoreThemeDocument* document;

}
-(id)initWithDocument:(id)arg1 ;
-(void)updateEntriesForManagedObjects:(id)arg1 ;
-(void)_updateEntryForManagedObject:(id)arg1 ;
-(id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2 ;
-(BOOL)foundDataChangesSinceDate:(id)arg1 ;
-(id)productionsWithModifiedAssets;
-(id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(BOOL*)arg2 ;
-(id)colorsChangedSinceDate:(id)arg1 ;
-(id)fontsChangedSinceDate:(id)arg1 ;
-(id)fontSizesChangedSinceDate:(id)arg1 ;
-(id)namedElementsChangedSinceDate:(id)arg1 ;
-(id)facetDefinitionsChangedSinceDate:(id)arg1 ;
-(id)keySpecsForRenditionsRemovedSinceDate:(id)arg1 ;
@end

