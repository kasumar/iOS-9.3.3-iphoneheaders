/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKRecentMatchInternal, GKGame, GKPlayer, NSDate;

@interface GKGameMatch : NSObject {

	GKRecentMatchInternal* _internal;
	GKGame* _game;
	GKPlayer* _player;

}

@property (nonatomic,retain) GKPlayer * player;                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGame * game;                       //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date; 
@property (retain) GKRecentMatchInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(void)setInternal:(GKRecentMatchInternal *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 game:(id)arg2 ;
-(GKRecentMatchInternal *)internal;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
@end

