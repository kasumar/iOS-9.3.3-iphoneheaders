/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation {

	NSDictionary* _localizableMessage;
	NSData* _data;
	NSDate* _replyDate;
	unsigned char _recipientIndex;

}

@property (assign,nonatomic) unsigned char recipientIndex;                   //@synthesize recipientIndex=_recipientIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * replyDate;                             //@synthesize replyDate=_replyDate - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned char)recipientIndex;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(void)setRecipientIndex:(unsigned char)arg1 ;
-(NSDate *)replyDate;
-(void)setReplyDate:(NSDate *)arg1 ;
@end

