/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutineSettings/CoreRoutineSettings-Structs.h>
#import <MapKit/MKPolygon.h>

@class NSSet, UIColor;

@interface RTPrivacyCluster : MKPolygon {

	NSSet* _privacyLOIs;
	long long _nameStyle;
	NSSet* _countrySet;
	NSSet* _administrativeAreaSet;
	NSSet* _localitySet;
	NSSet* _nameSet;
	NSSet* _subNameSet;

}

@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) NSSet * privacyLOIs;              //@synthesize privacyLOIs=_privacyLOIs - In the implementation block
+(id)privacyClusterWithMapRect:(SCD_Struct_RT1)arg1 privacyLOIs:(id)arg2 ;
-(void)_nameUsingPrivacyLOIs:(id)arg1 ;
-(SCD_Struct_RT1)bestFitMapRect;
-(id)privacyLOIsSortedByRecent;
-(id)privacyLOIsSortedByFrequency;
-(id)localizedInformation;
-(NSSet *)privacyLOIs;
-(BOOL)containsCluster:(id)arg1 ;
-(id)longName;
-(id)combineWithCluster:(id)arg1 ;
-(id)description;
-(id)name;
-(UIColor *)color;
-(long long)recentCompare:(id)arg1 ;
-(long long)frequencyCompare:(id)arg1 ;
@end

