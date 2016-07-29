/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSString, NSNumber, NSDictionary, NSMutableDictionary;

@interface PLBBSleepWakeMsg : PLBBMsgRoot {

	NSString* _swReason;
	NSString* _swAtCmd;
	NSString* _swRawData;
	NSNumber* _swSvcId;
	NSString* _swClientId;
	NSString* _swMsgId;
	NSString* _swMsgType;
	NSString* _swCmdName;
	NSString* _swCmdFullName;
	NSDictionary* _swIpData;
	NSString* _swRadioClass;
	NSString* _swCTData;
	NSString* _swChan;
	NSString* _swCmd;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (retain) NSString * swReason;                                     //@synthesize swReason=_swReason - In the implementation block
@property (retain) NSString * swAtCmd;                                      //@synthesize swAtCmd=_swAtCmd - In the implementation block
@property (retain) NSString * swRawData;                                    //@synthesize swRawData=_swRawData - In the implementation block
@property (retain) NSNumber * swSvcId;                                      //@synthesize swSvcId=_swSvcId - In the implementation block
@property (retain) NSString * swClientId;                                   //@synthesize swClientId=_swClientId - In the implementation block
@property (retain) NSString * swMsgId;                                      //@synthesize swMsgId=_swMsgId - In the implementation block
@property (retain) NSString * swMsgType;                                    //@synthesize swMsgType=_swMsgType - In the implementation block
@property (retain) NSString * swCmdName;                                    //@synthesize swCmdName=_swCmdName - In the implementation block
@property (retain) NSString * swCmdFullName;                                //@synthesize swCmdFullName=_swCmdFullName - In the implementation block
@property (retain) NSDictionary * swIpData;                                 //@synthesize swIpData=_swIpData - In the implementation block
@property (retain) NSString * swRadioClass;                                 //@synthesize swRadioClass=_swRadioClass - In the implementation block
@property (retain) NSString * swCTData;                                     //@synthesize swCTData=_swCTData - In the implementation block
@property (retain) NSString * swChan;                                       //@synthesize swChan=_swChan - In the implementation block
@property (retain) NSString * swCmd;                                        //@synthesize swCmd=_swCmd - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
+(id)entryEventPointDefinitionSleepWakeActivity;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSString *)swReason;
-(NSString *)swRadioClass;
-(NSString *)swCmd;
-(NSString *)swAtCmd;
-(NSString *)swRawData;
-(NSString *)swChan;
-(NSString *)swClientId;
-(NSNumber *)swSvcId;
-(NSString *)swMsgId;
-(NSString *)swMsgType;
-(NSString *)swCmdName;
-(NSString *)swCmdFullName;
-(void)processIPPacketWithEntry:(id)arg1 ;
-(NSDictionary *)swIpData;
-(void)refreshSleepWakeActivity;
-(void)logEventPointSleepWake;
-(void)appendToErrStr:(id)arg1 ;
-(void)setSwReason:(NSString *)arg1 ;
-(void)setSwAtCmd:(NSString *)arg1 ;
-(void)setSwRawData:(NSString *)arg1 ;
-(void)setSwSvcId:(NSNumber *)arg1 ;
-(void)setSwClientId:(NSString *)arg1 ;
-(void)setSwMsgId:(NSString *)arg1 ;
-(void)setSwMsgType:(NSString *)arg1 ;
-(void)setSwCmdName:(NSString *)arg1 ;
-(void)setSwCmdFullName:(NSString *)arg1 ;
-(void)setSwIpData:(NSDictionary *)arg1 ;
-(void)setSwRadioClass:(NSString *)arg1 ;
-(NSString *)swCTData;
-(void)setSwCTData:(NSString *)arg1 ;
-(void)setSwChan:(NSString *)arg1 ;
-(void)setSwCmd:(NSString *)arg1 ;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
@end

