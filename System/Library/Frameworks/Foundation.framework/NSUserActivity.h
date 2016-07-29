/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDate, NSDictionary, NSString, NSSet, NSURL, UAUserActivity;

@interface NSUserActivity : NSObject {

	id _internal;
	id _delegate;
	id _frameworkDelegate;

}

@property (retain,readonly) NSUUID * _uniqueIdentifier; 
@property (readonly) long long _suggestedActionType; 
@property (copy,readonly) NSDate * _lastActivityDate; 
@property (setter=_setOptions:,copy) NSDictionary * _options; 
@property (setter=_setFrameworkPayload:,copy) NSDictionary * _frameworkPayload; 
@property (setter=_setFrameworkDelegate:,__weak) id<NSUserActivityDelegate> _frameworkDelegate; 
@property (copy,readonly) NSString * _teamIdentifier; 
@property (setter=_setSubtitle:,copy) NSString * _subtitle; 
@property (setter=_setMinimalRequiredUserInfoKeys:,copy) NSSet * _minimalRequiredUserInfoKeys; 
@property (setter=_setContentType:,copy) NSString * _contentType; 
@property (setter=_setContentUserAction:,copy) NSString * _contentUserAction; 
@property (setter=_setContentAttributes:,copy) NSDictionary * _contentAttributes; 
@property (setter=_setKeywords:,copy) NSSet * _keywords; 
@property (setter=_setContentIdentifier:,copy) NSString * _contentIdentifier; 
@property (setter=_setExpirationDate:,copy) NSDate * _expirationDate; 
@property (setter=_setEligibleForUserActivityHandoff:,getter=_isEligibleForUserActivityHandoff) BOOL _eligibleForUserActivityHandoff; 
@property (setter=_setEligibleForUserActivityIndexing:,getter=_isEligibleForUserActivityIndexing) BOOL _eligibleForUserActivityIndexing; 
@property (setter=_setEligibleForUserActivityReminders:,getter=_isEligibleForUserActivityReminders) BOOL _eligibleForUserActivityReminders; 
@property (setter=_setEligibleForUserActivityPublicIndexing:,getter=_isEligibleForUserActivityPublicIndexing) BOOL _eligibleForUserActivityPublicIndexing; 
@property (copy,readonly) NSString * activityType; 
@property (copy) NSString * title; 
@property (copy) NSDictionary * userInfo; 
@property (copy) NSSet * requiredUserInfoKeys; 
@property (assign) BOOL needsSave; 
@property (copy) NSURL * webpageURL; 
@property (copy) NSDate * expirationDate; 
@property (copy) NSSet * keywords; 
@property (assign) BOOL supportsContinuationStreams; 
@property (__weak) id<NSUserActivityDelegate> delegate; 
@property (getter=isEligibleForHandoff) BOOL eligibleForHandoff; 
@property (getter=isEligibleForSearch) BOOL eligibleForSearch; 
@property (getter=isEligibleForPublicIndexing) BOOL eligibleForPublicIndexing; 
@property (retain,readonly) UAUserActivity * _internalUserActivity;                                                                                                     //@synthesize internal=_internal - In the implementation block
+(id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2 ;
+(id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 ;
+(void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 ;
+(id)_currentUserActivityUUID;
+(void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)_supportsUserActivityAppLinks;
-(id)contentAttributeSet;
-(void)setContentAttributeSet:(id)arg1 ;
-(id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(long long)arg2 options:(id)arg3 ;
-(id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3 ;
-(void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)_removeUserInfoValueForKey:(id)arg1 ;
-(NSDictionary *)_frameworkPayload;
-(void)_setFrameworkPayload:(id)arg1 ;
-(void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2 ;
-(void)_removeFrameworkPayloadValueForKey:(id)arg1 ;
-(long long)_suggestedActionType;
-(NSDate *)_lastActivityDate;
-(void)_setLastActivityDate:(id)arg1 ;
-(void)_resignCurrent;
-(NSUUID *)_uniqueIdentifier;
-(id<NSUserActivityDelegate>)_frameworkDelegate;
-(void)_setFrameworkDelegate:(id)arg1 ;
-(NSDictionary *)_options;
-(void)_setOptions:(id)arg1 ;
-(id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1 ;
-(NSString *)_teamIdentifier;
-(id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1 ;
-(void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3 ;
-(BOOL)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithUserActivityData:(id)arg1 ;
-(void)_setSubtitle:(id)arg1 ;
-(NSSet *)_minimalRequiredUserInfoKeys;
-(void)_setMinimalRequiredUserInfoKeys:(id)arg1 ;
-(NSString *)_contentType;
-(void)_setContentType:(id)arg1 ;
-(NSString *)_contentUserAction;
-(void)_setContentUserAction:(id)arg1 ;
-(NSString *)_contentIdentifier;
-(void)_setContentIdentifier:(id)arg1 ;
-(NSDictionary *)_contentAttributes;
-(void)_setContentAttributes:(id)arg1 ;
-(NSDate *)_expirationDate;
-(void)_setExpirationDate:(id)arg1 ;
-(NSSet *)_keywords;
-(void)_setKeywords:(id)arg1 ;
-(void)_addKeywordsFromArray:(id)arg1 ;
-(id)_parentUserActivity;
-(void)_setParentUserActivity:(id)arg1 ;
-(BOOL)_isEligibleForUserActivityHandoff;
-(void)_setEligibleForUserActivityHandoff:(BOOL)arg1 ;
-(BOOL)_isEligibleForUserActivityIndexing;
-(void)_setEligibleForUserActivityIndexing:(BOOL)arg1 ;
-(BOOL)_isEligibleForUserActivityReminders;
-(void)_setEligibleForUserActivityReminders:(BOOL)arg1 ;
-(BOOL)_isEligibleForUserActivityPublicIndexing;
-(void)_setEligibleForUserActivityPublicIndexing:(BOOL)arg1 ;
-(NSString *)_subtitle;
-(void)willSynchronizeActivity;
-(void)didSynchronizeActivity;
-(void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)resignCurrent;
-(UAUserActivity *)_internalUserActivity;
-(BOOL)needsSave;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(id)contentUserAction;
-(void)setContentUserAction:(id)arg1 ;
-(BOOL)supportsContinuationStreams;
-(void)setSupportsContinuationStreams:(BOOL)arg1 ;
-(void)getContinuationStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSet *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSSet *)arg1 ;
-(BOOL)isEligibleForHandoff;
-(void)setEligibleForHandoff:(BOOL)arg1 ;
-(BOOL)isEligibleForSearch;
-(void)setEligibleForSearch:(BOOL)arg1 ;
-(BOOL)isEligibleForPublicIndexing;
-(void)setEligibleForPublicIndexing:(BOOL)arg1 ;
-(id)initWithInternalUserActivity:(id)arg1 ;
-(void)setContentType:(id)arg1 ;
-(id)contentAttributes;
-(void)setContentAttributes:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(id)webPageURL;
-(void)setWebPageURL:(id)arg1 ;
-(void)setDelegate:(id<NSUserActivityDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSUserActivityDelegate>)delegate;
-(void)invalidate;
-(void)becomeCurrent;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)activityType;
-(NSDictionary *)userInfo;
-(id)contentType;
-(id)typeIdentifier;
-(id)initWithActivityType:(id)arg1 ;
-(void)setNeedsSave:(BOOL)arg1 ;
-(void)addUserInfoEntriesFromDictionary:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSSet *)keywords;
@end

