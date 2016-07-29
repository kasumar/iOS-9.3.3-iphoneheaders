/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoObjectMessage, SPProtoAudioFilePlayerStatus, SPProtoAudioFilePlayerUpdateContainedIdentifier;

@interface SPProtoAudioFilePlayerItem : PBCodable <NSCopying> {

	SPProtoObjectMessage* _destroy;
	SPProtoObjectMessage* _getCurrentTime;
	SPProtoObjectMessage* _notifyDidPlayToEndTime;
	SPProtoObjectMessage* _notifyFailedToPlayToEndTime;
	SPProtoObjectMessage* _notifyTimeJumped;
	SPProtoAudioFilePlayerStatus* _setStatus;
	SPProtoAudioFilePlayerUpdateContainedIdentifier* _upsertWithAsset;

}

@property (nonatomic,readonly) BOOL hasUpsertWithAsset; 
@property (nonatomic,retain) SPProtoAudioFilePlayerUpdateContainedIdentifier * upsertWithAsset;              //@synthesize upsertWithAsset=_upsertWithAsset - In the implementation block
@property (nonatomic,readonly) BOOL hasDestroy; 
@property (nonatomic,retain) SPProtoObjectMessage * destroy;                                                 //@synthesize destroy=_destroy - In the implementation block
@property (nonatomic,readonly) BOOL hasSetStatus; 
@property (nonatomic,retain) SPProtoAudioFilePlayerStatus * setStatus;                                       //@synthesize setStatus=_setStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasGetCurrentTime; 
@property (nonatomic,retain) SPProtoObjectMessage * getCurrentTime;                                          //@synthesize getCurrentTime=_getCurrentTime - In the implementation block
@property (nonatomic,readonly) BOOL hasNotifyTimeJumped; 
@property (nonatomic,retain) SPProtoObjectMessage * notifyTimeJumped;                                        //@synthesize notifyTimeJumped=_notifyTimeJumped - In the implementation block
@property (nonatomic,readonly) BOOL hasNotifyDidPlayToEndTime; 
@property (nonatomic,retain) SPProtoObjectMessage * notifyDidPlayToEndTime;                                  //@synthesize notifyDidPlayToEndTime=_notifyDidPlayToEndTime - In the implementation block
@property (nonatomic,readonly) BOOL hasNotifyFailedToPlayToEndTime; 
@property (nonatomic,retain) SPProtoObjectMessage * notifyFailedToPlayToEndTime;                             //@synthesize notifyFailedToPlayToEndTime=_notifyFailedToPlayToEndTime - In the implementation block
-(id)sockPuppetMessage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(SPProtoObjectMessage *)getCurrentTime;
-(SPProtoObjectMessage *)destroy;
-(void)setDestroy:(SPProtoObjectMessage *)arg1 ;
-(void)setSetStatus:(SPProtoAudioFilePlayerStatus *)arg1 ;
-(BOOL)hasDestroy;
-(BOOL)hasSetStatus;
-(SPProtoAudioFilePlayerStatus *)setStatus;
-(void)setGetCurrentTime:(SPProtoObjectMessage *)arg1 ;
-(void)setNotifyTimeJumped:(SPProtoObjectMessage *)arg1 ;
-(void)setNotifyDidPlayToEndTime:(SPProtoObjectMessage *)arg1 ;
-(void)setNotifyFailedToPlayToEndTime:(SPProtoObjectMessage *)arg1 ;
-(void)setUpsertWithAsset:(SPProtoAudioFilePlayerUpdateContainedIdentifier *)arg1 ;
-(BOOL)hasUpsertWithAsset;
-(BOOL)hasGetCurrentTime;
-(BOOL)hasNotifyTimeJumped;
-(BOOL)hasNotifyDidPlayToEndTime;
-(BOOL)hasNotifyFailedToPlayToEndTime;
-(SPProtoAudioFilePlayerUpdateContainedIdentifier *)upsertWithAsset;
-(SPProtoObjectMessage *)notifyTimeJumped;
-(SPProtoObjectMessage *)notifyDidPlayToEndTime;
-(SPProtoObjectMessage *)notifyFailedToPlayToEndTime;
@end

