/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSNumber, NSString, SAMediaContentRatingRestrictions, SAVoice, SAWatchData;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * abSources; 
@property (nonatomic,copy) NSNumber * allowUserGeneratedContent; 
@property (nonatomic,copy) NSString * anchor; 
@property (assign,nonatomic) BOOL censorSpeech; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSNumber * debugFlags; 
@property (nonatomic,copy) NSArray * deviceCapabilities; 
@property (nonatomic,copy) NSString * deviceColor; 
@property (nonatomic,copy) NSString * deviceEnclosure; 
@property (nonatomic,copy) NSString * deviceVersion; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * fullStorefrontId; 
@property (assign,nonatomic) BOOL handsFree; 
@property (nonatomic,copy) NSNumber * holdToTalkThresholdInMilliseconds; 
@property (assign,nonatomic) BOOL inRetailStoreDemoMode; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSArray * meCards; 
@property (nonatomic,retain) SAMediaContentRatingRestrictions * mediaContentRatingRestrictions; 
@property (assign,nonatomic) BOOL mediaPlayerExplicitContentDisallowed; 
@property (nonatomic,copy) NSString * osVersion; 
@property (nonatomic,copy) NSArray * parentalRestrictions; 
@property (nonatomic,copy) NSString * preferredLanguage; 
@property (nonatomic,copy) NSString * region; 
@property (nonatomic,copy) NSNumber * storefront; 
@property (nonatomic,copy) NSString * temperatureUnit; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,retain) SAVoice * ttsVoice; 
@property (nonatomic,copy) NSNumber * twentyFourHourTimeDisplay; 
@property (nonatomic,copy) NSNumber * uiScale; 
@property (nonatomic,copy) NSString * userInterfaceIdiom; 
@property (assign,nonatomic) BOOL voiceOver; 
@property (nonatomic,copy) NSNumber * voiceTriggerEnabled; 
@property (nonatomic,retain) SAWatchData * watchData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setAssistantData;
+(id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)userInterfaceIdiom;
-(void)setUserInterfaceIdiom:(NSString *)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)osVersion;
-(id)groupIdentifier;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(SAMediaContentRatingRestrictions *)mediaContentRatingRestrictions;
-(SAWatchData *)watchData;
-(BOOL)censorSpeech;
-(void)setCensorSpeech:(BOOL)arg1 ;
-(BOOL)handsFree;
-(void)setHandsFree:(BOOL)arg1 ;
-(NSArray *)abSources;
-(void)setAbSources:(NSArray *)arg1 ;
-(NSNumber *)allowUserGeneratedContent;
-(void)setAllowUserGeneratedContent:(NSNumber *)arg1 ;
-(NSNumber *)debugFlags;
-(void)setDebugFlags:(NSNumber *)arg1 ;
-(NSArray *)deviceCapabilities;
-(void)setDeviceCapabilities:(NSArray *)arg1 ;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(NSString *)deviceEnclosure;
-(void)setDeviceEnclosure:(NSString *)arg1 ;
-(NSString *)deviceVersion;
-(void)setDeviceVersion:(NSString *)arg1 ;
-(NSString *)fullStorefrontId;
-(void)setFullStorefrontId:(NSString *)arg1 ;
-(NSNumber *)holdToTalkThresholdInMilliseconds;
-(void)setHoldToTalkThresholdInMilliseconds:(NSNumber *)arg1 ;
-(BOOL)inRetailStoreDemoMode;
-(void)setInRetailStoreDemoMode:(BOOL)arg1 ;
-(NSArray *)meCards;
-(void)setMeCards:(NSArray *)arg1 ;
-(void)setMediaContentRatingRestrictions:(SAMediaContentRatingRestrictions *)arg1 ;
-(BOOL)mediaPlayerExplicitContentDisallowed;
-(void)setMediaPlayerExplicitContentDisallowed:(BOOL)arg1 ;
-(NSArray *)parentalRestrictions;
-(void)setParentalRestrictions:(NSArray *)arg1 ;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(NSNumber *)storefront;
-(void)setStorefront:(NSNumber *)arg1 ;
-(NSString *)temperatureUnit;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(SAVoice *)ttsVoice;
-(void)setTtsVoice:(SAVoice *)arg1 ;
-(NSNumber *)twentyFourHourTimeDisplay;
-(void)setTwentyFourHourTimeDisplay:(NSNumber *)arg1 ;
-(void)setUiScale:(NSNumber *)arg1 ;
-(BOOL)voiceOver;
-(void)setVoiceOver:(BOOL)arg1 ;
-(NSNumber *)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(NSNumber *)arg1 ;
-(void)setWatchData:(SAWatchData *)arg1 ;
-(NSNumber *)uiScale;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)encodedClassName;
-(NSString *)preferredLanguage;
@end

