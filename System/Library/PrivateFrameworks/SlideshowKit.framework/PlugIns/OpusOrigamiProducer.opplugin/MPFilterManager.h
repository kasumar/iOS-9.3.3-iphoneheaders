/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface MPFilterManager : NSObject {

	NSMutableDictionary* mFilters;
	NSArray* mFilterCategories;
	NSMutableDictionary* mFilterPresets;

}
+(void)loadFilterManagerWithPaths:(id)arg1 ;
+(void)releaseSharedManager;
+(id)sharedManager;
-(id)initWithPaths:(id)arg1 ;
-(id)randomFilter:(BOOL)arg1 ;
-(id)filterPresetsMatchingCriteria:(id)arg1 ;
-(id)randomFilterPresetFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)constraintsForFilterPresetsMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)animationsForFilterID:(id)arg1 andPresetID:(id)arg2 ;
-(id)attributesForFilterID:(id)arg1 andPresetID:(id)arg2 ;
-(id)filterIDsForCategoryID:(id)arg1 ;
-(id)presetIDsForFilterID:(id)arg1 ;
-(id)versionOfFilterID:(id)arg1 ;
-(id)filterCategoryIDs;
-(id)allFilterIDs;
-(void)dealloc;
@end

