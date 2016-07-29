/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKGameInternal.h>

@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal {

	NSString* _reason;
	NSString* _engineID;

}

@property (nonatomic,retain) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * engineID;              //@synthesize engineID=_engineID - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(id)serverRepresentation;
-(NSString *)engineID;
-(id)initWithGame:(id)arg1 ;
-(void)setEngineID:(NSString *)arg1 ;
@end

