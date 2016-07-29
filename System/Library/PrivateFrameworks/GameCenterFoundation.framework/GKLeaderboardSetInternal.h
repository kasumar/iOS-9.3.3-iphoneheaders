/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary;

@interface GKLeaderboardSetInternal : GKInternalRepresentation {

	NSString* _identifier;
	NSString* _groupIdentifier;
	NSString* _title;
	NSDictionary* _leaderboardIdentifiers;
	NSDictionary* _icons;

}

@property (nonatomic,retain) NSString * setIdentifier; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                         //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardIdentifiers;              //@synthesize leaderboardIdentifiers=_leaderboardIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                               //@synthesize icons=_icons - In the implementation block
+(id)secureCodedPropertyKeys;
-(NSString *)setIdentifier;
-(void)setSetIdentifier:(NSString *)arg1 ;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIcons:(NSDictionary *)arg1 ;
-(NSDictionary *)icons;
-(NSString *)groupIdentifier;
-(NSDictionary *)leaderboardIdentifiers;
-(void)setLeaderboardIdentifiers:(NSDictionary *)arg1 ;
@end

