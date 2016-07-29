/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSString, NSNumber, NSArray, NSMutableArray, NSMutableDictionary;

@interface PLBBMavHwRfWCDMALogMsg : PLBasebandMessage {

	unsigned char _inited;
	NSString* _error;
	NSNumber* _logDuration;
	NSArray* _SCEqStatCnt;
	NSArray* _DCEqStatCnt;
	NSArray* _SCQsetEqStatCnt;
	NSArray* _DCQsetEqStatCnt;
	NSArray* _DurInCarrierMode;
	NSArray* _RABModeCnt;
	NSArray* _RABTypeCnt;
	NSArray* _TxPwrBucket;
	NSNumber* _fetCnt;
	NSNumber* _cpcRxOnCnt;
	NSNumber* _cpcRxTxOffCnt;
	NSNumber* _cpcTimeCnt;
	NSNumber* _cpcEnergy;
	NSString* _groupEntryKey;
	NSString* _groupID;
	NSMutableArray* _groupArrEntries;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (retain) NSString * error;                                             //@synthesize error=_error - In the implementation block
@property (retain) NSNumber * logDuration;                                       //@synthesize logDuration=_logDuration - In the implementation block
@property (setter=CEqStatCnt,retain) NSArray * SCEqStatCnt;                      //@synthesize SCEqStatCnt=_SCEqStatCnt - In the implementation block
@property (retain) NSArray * DCEqStatCnt;                                        //@synthesize DCEqStatCnt=_DCEqStatCnt - In the implementation block
@property (setter=CQsetEqStatCnt,retain) NSArray * SCQsetEqStatCnt;              //@synthesize SCQsetEqStatCnt=_SCQsetEqStatCnt - In the implementation block
@property (retain) NSArray * DCQsetEqStatCnt;                                    //@synthesize DCQsetEqStatCnt=_DCQsetEqStatCnt - In the implementation block
@property (retain) NSArray * DurInCarrierMode;                                   //@synthesize DurInCarrierMode=_DurInCarrierMode - In the implementation block
@property (retain) NSArray * RABModeCnt;                                         //@synthesize RABModeCnt=_RABModeCnt - In the implementation block
@property (retain) NSArray * RABTypeCnt;                                         //@synthesize RABTypeCnt=_RABTypeCnt - In the implementation block
@property (retain) NSArray * TxPwrBucket;                                        //@synthesize TxPwrBucket=_TxPwrBucket - In the implementation block
@property (retain) NSNumber * fetCnt;                                            //@synthesize fetCnt=_fetCnt - In the implementation block
@property (retain) NSNumber * cpcRxOnCnt;                                        //@synthesize cpcRxOnCnt=_cpcRxOnCnt - In the implementation block
@property (retain) NSNumber * cpcRxTxOffCnt;                                     //@synthesize cpcRxTxOffCnt=_cpcRxTxOffCnt - In the implementation block
@property (retain) NSNumber * cpcTimeCnt;                                        //@synthesize cpcTimeCnt=_cpcTimeCnt - In the implementation block
@property (retain) NSNumber * cpcEnergy;                                         //@synthesize cpcEnergy=_cpcEnergy - In the implementation block
@property (retain) NSString * groupEntryKey;                                     //@synthesize groupEntryKey=_groupEntryKey - In the implementation block
@property (retain) NSString * groupID;                                           //@synthesize groupID=_groupID - In the implementation block
@property (retain) NSMutableArray * groupArrEntries;                             //@synthesize groupArrEntries=_groupArrEntries - In the implementation block
@property (assign,nonatomic) unsigned char inited;                               //@synthesize inited=_inited - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;                   //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                      //@synthesize kvPairs=_kvPairs - In the implementation block
+(id)entryEventBackwardDefinitionBBMavHwRfWCDMA;
-(id)init;
-(void)setError:(NSString *)arg1 ;
-(NSString *)error;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setLogDuration:(NSNumber *)arg1 ;
-(void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3 ;
-(NSNumber *)logDuration;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
-(void)addPairWithKey:(id)arg1 andWithVal:(id)arg2 ;
-(void)populateEntry:(id)arg1 ;
-(unsigned char)inited;
-(void)setInited:(unsigned char)arg1 ;
-(void)refreshRequest;
-(void)setSCEqStatCnt:(NSArray *)arg1 ;
-(void)setDCEqStatCnt:(NSArray *)arg1 ;
-(void)setSCQsetEqStatCnt:(NSArray *)arg1 ;
-(void)setDCQsetEqStatCnt:(NSArray *)arg1 ;
-(void)setDurInCarrierMode:(NSArray *)arg1 ;
-(void)setRABModeCnt:(NSArray *)arg1 ;
-(void)setRABTypeCnt:(NSArray *)arg1 ;
-(void)setTxPwrBucket:(NSArray *)arg1 ;
-(void)setCpcRxOnCnt:(NSNumber *)arg1 ;
-(void)setCpcRxTxOffCnt:(NSNumber *)arg1 ;
-(void)setCpcTimeCnt:(NSNumber *)arg1 ;
-(void)setCpcEnergy:(NSNumber *)arg1 ;
-(id)logEventBackwardBBMavHwRfWCDMA;
-(NSString *)groupEntryKey;
-(NSMutableArray *)groupArrEntries;
-(void)setGroupEntryKey:(NSString *)arg1 ;
-(void)setGroupArrEntries:(NSMutableArray *)arg1 ;
-(NSArray *)SCEqStatCnt;
-(NSArray *)DCEqStatCnt;
-(NSArray *)SCQsetEqStatCnt;
-(NSArray *)DCQsetEqStatCnt;
-(NSArray *)DurInCarrierMode;
-(NSArray *)RABModeCnt;
-(NSArray *)TxPwrBucket;
-(NSArray *)RABTypeCnt;
-(NSNumber *)fetCnt;
-(NSNumber *)cpcRxOnCnt;
-(NSNumber *)cpcRxTxOffCnt;
-(NSNumber *)cpcTimeCnt;
-(NSNumber *)cpcEnergy;
-(void)setFetCnt:(NSNumber *)arg1 ;
@end

