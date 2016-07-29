/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSDictionary, NSString, NSURL, NSArray;

@interface NSBundle : NSObject {

	unsigned long long _flags;
	id _cfBundle;
	unsigned long long _reserved2;
	Class _principalClass;
	id _initialPath;
	id _resolvedPath;
	id _reserved3;
	id _lock;

}

@property (nonatomic,readonly) NSBundle * flipswitchThemedBundle; 
@property (nonatomic,readonly) NSDictionary * flipswitchThemedInfoDictionary; 
@property (nonatomic,readonly) NSString * flipswitchImageCacheBasePath; 
@property (getter=isLoaded,readonly) BOOL loaded; 
@property (copy,readonly) NSURL * bundleURL; 
@property (copy,readonly) NSURL * resourceURL; 
@property (copy,readonly) NSURL * executableURL; 
@property (copy,readonly) NSURL * privateFrameworksURL; 
@property (copy,readonly) NSURL * sharedFrameworksURL; 
@property (copy,readonly) NSURL * sharedSupportURL; 
@property (copy,readonly) NSURL * builtInPlugInsURL; 
@property (copy,readonly) NSURL * appStoreReceiptURL; 
@property (copy,readonly) NSString * bundlePath; 
@property (copy,readonly) NSString * resourcePath; 
@property (copy,readonly) NSString * executablePath; 
@property (copy,readonly) NSString * privateFrameworksPath; 
@property (copy,readonly) NSString * sharedFrameworksPath; 
@property (copy,readonly) NSString * sharedSupportPath; 
@property (copy,readonly) NSString * builtInPlugInsPath; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (copy,readonly) NSDictionary * infoDictionary; 
@property (copy,readonly) NSDictionary * localizedInfoDictionary; 
@property (readonly) Class principalClass; 
@property (copy,readonly) NSArray * preferredLocalizations; 
@property (copy,readonly) NSArray * localizations; 
@property (copy,readonly) NSString * developmentLocalization; 
@property (copy,readonly) NSArray * executableArchitectures; 
+(id)_coreroutineBundle;
+(id)_coreroutine_LocalizedStringForKey:(id)arg1 ;
+(id)afui_assistantUIFrameworkBundle;
+(id)frameworkBundleForBinaryImagePath:(id)arg1 ;
+(id)bundleForBinaryImagePath:(id)arg1 ;
+(id)_srFrameworkBundle;
+(id)_srLocalizedAppNameFromBundleID:(id)arg1 ;
+(id)_srLocalizedStringFromFrameworkBundleWithKey:(id)arg1 ;
+(id)_gkBundleWithIdentifier:(id)arg1 ;
+(id)_gkLocalizedMessageFromDictionary:(id)arg1 ;
+(id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 ;
+(id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2 ;
+(BOOL)_gkMainBundleIsGameCenterSystemProcess;
+(id)fuseUIBundle;
+(id)radioUIBundle;
+(BOOL)mainBundleIsXcode;
+(id)mediaSocialBundle;
+(id)mediaPlayerUIBundle;
+(id)pathForITunesResource:(id)arg1 ofType:(id)arg2 ;
+(id)pu_PhotosUIFrameworkBundle;
+(id)blj_localizedString:(id)arg1 ;
+(id)safari_safariSharedBundle;
+(id)_mapkitBundle;
+(id)mediaPlayerBundle;
+(id)__vkBundle;
+(id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2 ;
+(id)__geoBundle;
+(id)accessibilityLocalBundleWithLastPathComponent:(id)arg1 ;
+(id)accessibilityBundleWithLastPathComponent:(id)arg1 ;
+(id)_typologyBundle;
+(void)pushNibLoadingBundle:(id)arg1 ;
+(void)pushNibPath:(id)arg1 ;
+(void)popNibPath;
+(void)popNibLoadingBundle;
+(id)currentNibPath;
+(id)currentNibLoadingBundle;
+(id)loadedBundles;
+(id)allBundles;
+(id)allFrameworks;
+(id)preferredLocalizationsFromArray:(id)arg1 ;
+(id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7 ;
+(id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(/*^block*/id)arg3 ;
+(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
+(void)setSystemLanguages:(id)arg1 ;
+(id)debugDescription;
+(id)mainBundle;
+(id)bundleForClass:(Class)arg1 ;
+(id)bundleWithPath:(id)arg1 ;
+(id)bundleWithIdentifier:(id)arg1 ;
+(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
+(id)bundleWithURL:(id)arg1 ;
+(id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2 ;
+(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4 ;
-(id)objectForResolvedInfoDictionaryKey:(id)arg1 withLayerSet:(id)arg2 switchState:(int)arg3 controlState:(unsigned long long)arg4 resolvedKeyName:(id*)arg5 ;
-(unsigned long long)imageSizeForFlipswitchImageName:(id)arg1 closestToSize:(double)arg2 inDirectory:(id)arg3 ;
-(id)imagePathForFlipswitchImageName:(id)arg1 imageSize:(unsigned long long)arg2 preferredScale:(double)arg3 controlState:(unsigned long long)arg4 inDirectory:(id)arg5 ;
-(NSDictionary *)flipswitchThemedInfoDictionary;
-(NSBundle *)flipswitchThemedBundle;
-(NSString *)flipswitchImageCacheBasePath;
-(id)FSImageImageFileTypes;
-(id)imagePathForFlipswitchImageName:(id)arg1 imageSize:(unsigned long long)arg2 preferredScale:(double)arg3 controlState:(unsigned long long)arg4 inDirectory:(id)arg5 loadedControlState:(unsigned long long*)arg6 ;
-(id)_assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4 ;
-(id)assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(BOOL)assistantLanguageIsRTL;
-(id)assistantUILocale;
-(id)assistantUILocalizedStringFromSiriLanguageForKey:(id)arg1 table:(id)arg2 ;
-(id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2 ;
-(id)siriUILocalizedStringForKey:(id)arg1 table:(id)arg2 ;
-(id)siriUILocalizedStringForKey:(id)arg1 ;
-(id)siriUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)suic_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)suic_localizedStringForKey:(id)arg1 table:(id)arg2 ;
-(id)suic_localizedStringForKey:(id)arg1 ;
-(id)XPCServiceBundles;
-(id)PKSanitizedBundleIdentifier;
-(BOOL)_gkIsPreferences;
-(id)_gkBundleVersion;
-(id)_gkLocalizedName;
-(id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4 ;
-(id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3 ;
-(BOOL)_gkIsGameCenter;
-(BOOL)_gkIsGameCenterExtension;
-(id)_gkPathForSoundWithName:(id)arg1 ;
-(BOOL)_gkIsDaemon;
-(BOOL)_gkIsBadgingEnabled;
-(BOOL)_gkShouldAddQuickActions;
-(id)_gkPathForInviteSound;
-(id)_gkPathForChallengeSound;
-(id)_gkBundleShortVersion;
-(id)_gkPreferredLanguage;
-(id)_gkFrameworkVersionDescription;
-(id)imageForResource:(id)arg1 size:(CGSize)arg2 ;
-(id)URLForMovieResource:(id)arg1 ;
-(id)newDataURLForResource:(id)arg1 ofType:(id)arg2 withMIMEType:(id)arg3 ;
-(id)webui_localizedDisplayName;
-(BOOL)safari_primaryLocalizationIsEnglish;
-(id)_cachedMainBundleResourcePath;
-(id)accessibilityBundlePath;
-(void)_accessibilityInitializeContainerLogic;
-(id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3 ;
-(id)dataForResourceName:(id)arg1 ;
-(double)preservationPriorityForTag:(id)arg1 ;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 ;
-(void)setPreservationPriority:(double)arg1 forTag:(id)arg2 ;
-(CFBundleRef)_cfBundle;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4 ;
-(NSURL *)appStoreReceiptURL;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
-(id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 ;
-(NSURL *)resourceURL;
-(NSURL *)executableURL;
-(id)pathForAuxiliaryExecutable:(id)arg1 ;
-(id)URLForAuxiliaryExecutable:(id)arg1 ;
-(NSString *)privateFrameworksPath;
-(NSURL *)privateFrameworksURL;
-(NSString *)sharedFrameworksPath;
-(NSURL *)sharedFrameworksURL;
-(NSString *)sharedSupportPath;
-(NSURL *)sharedSupportURL;
-(NSString *)builtInPlugInsPath;
-(NSURL *)builtInPlugInsURL;
-(unsigned long long)versionNumber;
-(id)bundleLanguages;
-(void)invalidateResourceCache;
-(void)__static;
-(id)_regionsArray;
-(id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4 ;
-(id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3 ;
-(NSString *)developmentLocalization;
-(BOOL)preflightAndReturnError:(id*)arg1 ;
-(NSArray *)executableArchitectures;
-(void)dealloc;
-(id)description;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(NSDictionary *)infoDictionary;
-(NSString *)bundleIdentifier;
-(NSDictionary *)localizedInfoDictionary;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(NSURL *)bundleURL;
-(NSString *)executablePath;
-(NSString *)bundlePath;
-(id)initWithURL:(id)arg1 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(Class)principalClass;
-(id)initWithPath:(id)arg1 ;
-(NSArray *)localizations;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(BOOL)isLoaded;
-(BOOL)loadAndReturnError:(id*)arg1 ;
-(BOOL)load;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4 ;
-(Class)classNamed:(id)arg1 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(NSString *)resourcePath;
-(NSArray *)preferredLocalizations;
-(BOOL)unload;
-(void)finalize;
@end

