/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject, NSArray, NSString;

@interface MSVCPLoggingController : NSObject {

	NSMutableArray* _registeredConfigurations;
	NSMutableDictionary* _cachedLoggingLevelPairs;
	NSObject*<OS_dispatch_queue> _configurationAccessQueue;
	NSObject*<OS_dispatch_queue> _serialLoggingQueue;
	int _configurationChangeNotifyToken;
	BOOL _masterLoggingSwitchInitialized;
	BOOL _masterLoggingSwitchEnabled;
	BOOL _cachedPPTTestsAreInProgress;

}

@property (nonatomic,copy,readonly) NSArray * registeredConfigurations; 
@property (nonatomic,copy,readonly) NSString * defaultCategory; 
@property (assign,nonatomic) BOOL masterLoggingSwitchEnabled; 
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(void)_updateCachedPPTTestsAreInProgress;
-(void)_updateLoggingLevels;
-(id)_defaultCategoryOnAccessQueue;
-(BOOL)masterLoggingSwitchEnabled;
-(NSArray *)registeredConfigurations;
-(void)setMasterLoggingSwitchEnabled:(BOOL)arg1 ;
-(void)registerConfiguration:(id)arg1 withFacilityName:(id)arg2 ;
-(BOOL)shouldLogMessageWithLevel:(long long)arg1 category:(id)arg2 ;
-(void)logMessage:(id)arg1 withLevel:(long long)arg2 category:(id)arg3 fileName:(const char*)arg4 functionName:(const char*)arg5 lineNumber:(unsigned long long)arg6 ;
-(NSString *)defaultCategory;
@end

