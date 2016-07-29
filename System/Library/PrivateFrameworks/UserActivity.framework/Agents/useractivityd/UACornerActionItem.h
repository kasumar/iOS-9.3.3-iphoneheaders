/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSMutableDictionary, NSDate, NSUUID, NSError, NSDictionary, NSSet, SFPeerDevice, NSURL, _LSUserActivityWasContinuedInfo, UAUserActivityClientProcess;

@interface UACornerActionItem : NSObject {

	NSString* _title;
	NSString* _bundleIdentifier;
	NSData* _userInfoPayload;
	NSData* _frameworkPayload;
	NSMutableDictionary* _resourceURLs;
	NSDate* _when;
	NSDate* _removeAfter;
	BOOL _payloadAvailable;
	BOOL _payloadRequested;
	NSUUID* _uuid;
	unsigned long long _actionItemType;
	NSError* _error;
	NSDictionary* _options;
	NSSet* _teamIDs;
	NSString* _activityType;
	NSString* _dynamicIdentifier;
	NSString* _deviceName;
	SFPeerDevice* _peerDevice;
	NSString* _deviceType;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSData* _encodedUserInfo;
	NSDate* _supressedUntil;
	NSData* _activityPayload;
	_LSUserActivityWasContinuedInfo* _wasContinuedInfo;
	UAUserActivityClientProcess* _originatingClient;

}

@property (copy,readonly) NSUUID * uuid;                                                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long actionItemType;                                      //@synthesize actionItemType=_actionItemType - In the implementation block
@property (copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (copy) NSURL * webpageURL;                                                         //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSData * streamsData;                                                       //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSData * encodedUserInfo;                                                   //@synthesize encodedUserInfo=_encodedUserInfo - In the implementation block
@property (copy) NSError * error;                                                            //@synthesize error=_error - In the implementation block
@property (copy) NSDate * when;                                                              //@synthesize when=_when - In the implementation block
@property (copy) NSDate * supressedUntil;                                                    //@synthesize supressedUntil=_supressedUntil - In the implementation block
@property (copy) NSDate * removeAfter;                                                       //@synthesize removeAfter=_removeAfter - In the implementation block
@property (copy) NSSet * teamIDs;                                                            //@synthesize teamIDs=_teamIDs - In the implementation block
@property (copy) NSString * bundleIdentifier;                                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * activityType;                                                    //@synthesize activityType=_activityType - In the implementation block
@property (copy) NSString * dynamicIdentifier;                                               //@synthesize dynamicIdentifier=_dynamicIdentifier - In the implementation block
@property (copy) NSData * activityPayload;                                                   //@synthesize activityPayload=_activityPayload - In the implementation block
@property (getter=isPayloadAvailable) BOOL payloadAvailable;                                 //@synthesize payloadAvailable=_payloadAvailable - In the implementation block
@property (getter=isPayloadRequested) BOOL payloadRequested;                                 //@synthesize payloadRequested=_payloadRequested - In the implementation block
@property (copy,readonly) NSDictionary * options;                                            //@synthesize options=_options - In the implementation block
@property (copy) NSString * deviceName;                                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) SFPeerDevice * peerDevice;                                                //@synthesize peerDevice=_peerDevice - In the implementation block
@property (copy) NSString * deviceType;                                                      //@synthesize deviceType=_deviceType - In the implementation block
@property (retain,readonly) _LSUserActivityWasContinuedInfo * wasContinuedInfo;              //@synthesize wasContinuedInfo=_wasContinuedInfo - In the implementation block
@property (__weak) UAUserActivityClientProcess * originatingClient;                          //@synthesize originatingClient=_originatingClient - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
-(UAUserActivityClientProcess *)originatingClient;
-(void)setOriginatingClient:(UAUserActivityClientProcess *)arg1 ;
-(SFPeerDevice *)peerDevice;
-(NSDate *)supressedUntil;
-(unsigned long long)actionItemType;
-(NSDate *)removeAfter;
-(void)setSupressedUntil:(NSDate *)arg1 ;
-(_LSUserActivityWasContinuedInfo *)wasContinuedInfo;
-(void)requestPayloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPeerDevice:(SFPeerDevice *)arg1 ;
-(void)setRemoveAfter:(NSDate *)arg1 ;
-(BOOL)isPayloadAvailable;
-(BOOL)isPayloadRequested;
-(void)setPayloadRequested:(BOOL)arg1 ;
-(void)setPayloadAvailable:(BOOL)arg1 ;
-(void)clearPayload;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSData *)activityPayload;
-(id)logString;
-(void)setActivityPayload:(NSData *)arg1 ;
-(NSString *)dynamicIdentifier;
-(void)setDynamicIdentifier:(NSString *)arg1 ;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(NSString *)activityType;
-(NSDictionary *)options;
-(NSUUID *)uuid;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)statusString;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)deviceType;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSSet *)teamIDs;
-(void)setTeamIDs:(NSSet *)arg1 ;
-(NSData *)encodedUserInfo;
-(void)setEncodedUserInfo:(NSData *)arg1 ;
-(void)setWhen:(NSDate *)arg1 ;
-(NSDate *)when;
-(NSString *)deviceName;
@end

