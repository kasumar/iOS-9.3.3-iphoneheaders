/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject {

	NSDictionary* _root;
	NSString* _bundleID;
	NSDictionary* _achievementsByIdentifier;
	NSDictionary* _leaderboardsByIdentifier;
	NSDictionary* _leaderboardSetsByIdentifier;

}

@property (retain) NSDictionary * root;              //@synthesize root=_root - In the implementation block
@property (retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
+(id)localPropertyListForGameDescriptor:(id)arg1 ;
-(void)dealloc;
-(id)localizedStringForKey:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setRoot:(NSDictionary *)arg1 ;
-(id)achievementDescriptions;
-(id)achievementDescriptionForIdentifier:(id)arg1 ;
-(id)_rootDictionary;
-(id)_mainBundle;
-(id)localizedStringForKey:(id)arg1 forLocalization:(id)arg2 ;
-(id)imageNameForDashboardLogo;
-(id)leaderboardDescriptions;
-(id)leaderboardSetDescriptions;
-(id)leaderboardDescriptionForIdentifier:(id)arg1 ;
-(id)leaderboardSetDescriptionForIdentifier:(id)arg1 ;
-(NSDictionary *)root;
@end

