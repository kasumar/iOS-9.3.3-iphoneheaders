/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSString, NSNumber, NSMutableDictionary;

@interface PLBBMavHwRfHDRLogMsg : PLBasebandMessage {

	unsigned char _inited;
	NSString* _error;
	NSNumber* _logDuration;
	NSNumber* _sDTXOnFrame;
	NSNumber* _sDTXOffFrame;
	NSNumber* _lDTXOnFrame;
	NSNumber* _lDTXOffFrame;
	NSNumber* _tDTXOnFrame;
	NSNumber* _tDTXOffFrame;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (retain) NSString * error;                                        //@synthesize error=_error - In the implementation block
@property (retain) NSNumber * logDuration;                                  //@synthesize logDuration=_logDuration - In the implementation block
@property (retain) NSNumber * sDTXOnFrame;                                  //@synthesize sDTXOnFrame=_sDTXOnFrame - In the implementation block
@property (retain) NSNumber * sDTXOffFrame;                                 //@synthesize sDTXOffFrame=_sDTXOffFrame - In the implementation block
@property (retain) NSNumber * lDTXOnFrame;                                  //@synthesize lDTXOnFrame=_lDTXOnFrame - In the implementation block
@property (retain) NSNumber * lDTXOffFrame;                                 //@synthesize lDTXOffFrame=_lDTXOffFrame - In the implementation block
@property (retain) NSNumber * tDTXOnFrame;                                  //@synthesize tDTXOnFrame=_tDTXOnFrame - In the implementation block
@property (retain) NSNumber * tDTXOffFrame;                                 //@synthesize tDTXOffFrame=_tDTXOffFrame - In the implementation block
@property (assign,nonatomic) unsigned char inited;                          //@synthesize inited=_inited - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
+(id)entryEventBackwardDefinitionBBMavHwRfHDR;
-(id)init;
-(void)setError:(NSString *)arg1 ;
-(NSString *)error;
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
-(void)setSDTXOnFrame:(NSNumber *)arg1 ;
-(void)setSDTXOffFrame:(NSNumber *)arg1 ;
-(void)setLDTXOnFrame:(NSNumber *)arg1 ;
-(void)setLDTXOffFrame:(NSNumber *)arg1 ;
-(void)setTDTXOnFrame:(NSNumber *)arg1 ;
-(void)setTDTXOffFrame:(NSNumber *)arg1 ;
-(id)logEventBackwardBBMavHwRfHDR;
-(NSNumber *)sDTXOnFrame;
-(NSNumber *)sDTXOffFrame;
-(NSNumber *)lDTXOnFrame;
-(NSNumber *)lDTXOffFrame;
-(NSNumber *)tDTXOnFrame;
-(NSNumber *)tDTXOffFrame;
@end

