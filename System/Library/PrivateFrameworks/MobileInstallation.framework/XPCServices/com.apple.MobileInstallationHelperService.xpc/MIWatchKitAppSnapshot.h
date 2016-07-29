/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL;

@interface MIWatchKitAppSnapshot : NSObject {

	BOOL _onlyV1;
	BOOL _placeholderOnly;
	BOOL _identifierLocked;
	NSDictionary* _resultDict;
	NSString* _bundleID;
	NSString* _watchKitAppBundleID;
	NSURL* _destURL;
	unsigned long long _diskUsage;

}

@property (retain) NSDictionary * resultDict;                 //@synthesize resultDict=_resultDict - In the implementation block
@property (copy,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (copy) NSString * watchKitAppBundleID;              //@synthesize watchKitAppBundleID=_watchKitAppBundleID - In the implementation block
@property (readonly) BOOL onlyV1;                             //@synthesize onlyV1=_onlyV1 - In the implementation block
@property (readonly) BOOL placeholderOnly;                    //@synthesize placeholderOnly=_placeholderOnly - In the implementation block
@property (readonly) NSURL * destURL;                         //@synthesize destURL=_destURL - In the implementation block
@property (assign) unsigned long long diskUsage;              //@synthesize diskUsage=_diskUsage - In the implementation block
@property (assign) BOOL identifierLocked;                     //@synthesize identifierLocked=_identifierLocked - In the implementation block
-(BOOL)onlyV1;
-(id)_iconNamesForApp:(id)arg1 ;
-(id)_iconFileNamesForName:(id)arg1 ;
-(NSURL *)destURL;
-(id)_wkBundleForAppContainer:(id)arg1 error:(id*)arg2 ;
-(void)setWatchKitAppBundleID:(NSString *)arg1 ;
-(BOOL)placeholderOnly;
-(BOOL)_createPlaceholderForApp:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)_hardLinkCopyURL:(id)arg1 toURL:(id)arg2 diskUsage:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)setDiskUsage:(unsigned long long)arg1 ;
-(BOOL)_createSnapshotWithError:(id*)arg1 ;
-(void)setResultDict:(NSDictionary *)arg1 ;
-(id)initWithBundleID:(id)arg1 snapshotTo:(id)arg2 onlyV1AppIfPresent:(BOOL)arg3 placeholderOnly:(BOOL)arg4 ;
-(BOOL)createSnapshotWithError:(id*)arg1 ;
-(NSDictionary *)resultDict;
-(BOOL)identifierLocked;
-(void)setIdentifierLocked:(BOOL)arg1 ;
-(NSString *)bundleID;
-(NSString *)watchKitAppBundleID;
-(unsigned long long)diskUsage;
@end

