/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying> {

	SCD_Struct_NP7* _activationStates;
	SCD_Struct_NP7* _lifecycleStates;
	NSMutableArray* _appletsBytes;
	NSMutableArray* _cardAIDs;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                            //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) NSMutableArray * cardAIDs;                               //@synthesize cardAIDs=_cardAIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long lifecycleStatesCount; 
@property (nonatomic,readonly) unsigned* lifecycleStates; 
@property (nonatomic,readonly) unsigned long long activationStatesCount; 
@property (nonatomic,readonly) unsigned* activationStates; 
@property (nonatomic,retain) NSMutableArray * appletsBytes;                           //@synthesize appletsBytes=_appletsBytes - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(BOOL)pending;
-(void)addCardAIDs:(id)arg1 ;
-(unsigned long long)cardAIDsCount;
-(void)clearCardAIDs;
-(id)cardAIDsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)cardAIDs;
-(void)setCardAIDs:(NSMutableArray *)arg1 ;
-(void)addAppletsBytes:(id)arg1 ;
-(unsigned long long)lifecycleStatesCount;
-(void)clearLifecycleStates;
-(unsigned)lifecycleStatesAtIndex:(unsigned long long)arg1 ;
-(void)addLifecycleStates:(unsigned)arg1 ;
-(unsigned long long)activationStatesCount;
-(void)clearActivationStates;
-(unsigned)activationStatesAtIndex:(unsigned long long)arg1 ;
-(void)addActivationStates:(unsigned)arg1 ;
-(unsigned long long)appletsBytesCount;
-(void)clearAppletsBytes;
-(id)appletsBytesAtIndex:(unsigned long long)arg1 ;
-(unsigned*)lifecycleStates;
-(void)setLifecycleStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)activationStates;
-(void)setActivationStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)appletsBytes;
-(void)setAppletsBytes:(NSMutableArray *)arg1 ;
@end

