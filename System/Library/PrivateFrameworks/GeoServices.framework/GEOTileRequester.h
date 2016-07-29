/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileRequesterDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class GEOResourceManifestConfiguration, NSLocale, GEOTileKeyList, GEOTileKeyMap, NSThread, NSString, NSData;

@interface GEOTileRequester : NSObject {

	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	GEOTileKeyList* _keyList;
	GEOTileKeyMap* _cachedEtags;
	GEOTileKeyMap* _cachedData;
	GEOTileKeyMap* _priorities;
	id<GEOTileRequesterDelegate> _delegate;
	id _context;
	NSThread* _thread;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSData* _auditToken;
	BOOL _requireWiFi;
	NSString* _deviceCountry;
	NSString* _deviceRegion;

}

@property (nonatomic,readonly) GEOTileKeyList * keyList;                         //@synthesize keyList=_keyList - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * cachedEtags;                      //@synthesize cachedEtags=_cachedEtags - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * cachedData;                       //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) GEOTileKeyMap * priorities;                       //@synthesize priorities=_priorities - In the implementation block
@property (nonatomic,retain) id<GEOTileRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                           //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL requireWiFi;                                   //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (nonatomic,retain) NSString * deviceCountry;                           //@synthesize deviceCountry=_deviceCountry - In the implementation block
@property (nonatomic,retain) NSString * deviceRegion;                            //@synthesize deviceRegion=_deviceRegion - In the implementation block
+(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
+(unsigned char)tileProviderIdentifier;
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE54*)newExpiringTilesets;
-(void)cancel;
-(void)setDelegate:(id<GEOTileRequesterDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOTileRequesterDelegate>)delegate;
-(NSString *)bundleIdentifier;
-(id)context;
-(void)start;
-(void)setContext:(id)arg1 ;
-(NSData *)auditToken;
-(GEOTileKeyMap *)cachedData;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)setAuditToken:(NSData *)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 ;
-(void)setRequireWiFi:(BOOL)arg1 ;
-(BOOL)requireWiFi;
-(void)setDeviceCountry:(NSString *)arg1 ;
-(void)setThread:(NSThread *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)deviceCountry;
-(NSString *)deviceRegion;
-(GEOTileKeyMap *)priorities;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSThread *)thread;
-(NSString *)bundleVersion;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(GEOTileKeyList *)keyList;
-(GEOTileKeyMap *)cachedEtags;
@end

