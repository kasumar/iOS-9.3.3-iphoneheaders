/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _CDEventStreamProperties : NSObject {

	NSString* name;
	NSString* knowledgeBaseName;
	NSString* descriptionString;
	long long valueType;
	BOOL futureEvent;
	BOOL setupOnDemand;
	BOOL canBeSpeculative;
	double timeToLive;
	BOOL canPersistOnStorage;
	double temporalPrecision;
	long long deResolitionPolicy;
	NSString* dataProtectionClass;
	long long totalSizeLimit;
	long long eventsPerPeriod;
	double period;
	BOOL canBeShared;
	long long sharingPolicy;
	double maxLatency;
	BOOL canSendToServer;
	BOOL hasStats;
	long long statisticsType;
	BOOL isInstant;
	BOOL isHistorical;
	long long pollingPeriod;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * knowledgeBaseName; 
@property (nonatomic,readonly) NSString * descriptionString; 
@property (nonatomic,readonly) long long valueType; 
@property (nonatomic,readonly) BOOL futureEvent; 
@property (nonatomic,readonly) BOOL setupOnDemand; 
@property (nonatomic,readonly) BOOL canBeSpeculative; 
@property (nonatomic,readonly) double timeToLive; 
@property (nonatomic,readonly) BOOL canPersistOnStorage; 
@property (nonatomic,readonly) double temporalPrecision; 
@property (nonatomic,readonly) long long deResolitionPolicy; 
@property (nonatomic,readonly) NSString * dataProtectionClass; 
@property (nonatomic,readonly) long long totalSizeLimit; 
@property (nonatomic,readonly) double period; 
@property (nonatomic,readonly) long long eventsPerPeriod; 
@property (nonatomic,readonly) BOOL canBeShared; 
@property (nonatomic,readonly) long long sharingPolicy; 
@property (nonatomic,readonly) double maxLatency; 
@property (nonatomic,readonly) BOOL canSendToServer; 
@property (nonatomic,readonly) BOOL hasStats; 
@property (nonatomic,readonly) long long statisticsType; 
@property (nonatomic,readonly) BOOL isInstant; 
@property (nonatomic,readonly) BOOL isHistorical; 
@property (nonatomic,readonly) long long pollingPeriod; 
+(id)eventStreamPropertiesFromDictionary:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)knowledgeBaseName;
-(long long)eventsPerPeriod;
-(long long)totalSizeLimit;
-(double)temporalPrecision;
-(BOOL)canPersistOnStorage;
-(BOOL)futureEvent;
-(BOOL)setupOnDemand;
-(BOOL)canBeSpeculative;
-(long long)deResolitionPolicy;
-(NSString *)dataProtectionClass;
-(long long)sharingPolicy;
-(double)maxLatency;
-(BOOL)canSendToServer;
-(BOOL)hasStats;
-(long long)statisticsType;
-(BOOL)isInstant;
-(BOOL)isHistorical;
-(long long)pollingPeriod;
-(double)timeToLive;
-(BOOL)canBeShared;
-(double)period;
-(id)initFromDictionary:(id)arg1 ;
-(long long)valueType;
-(NSString *)descriptionString;
@end

