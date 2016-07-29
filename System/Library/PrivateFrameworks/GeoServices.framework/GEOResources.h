/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, GEOVersionManifest;

@interface GEOResources : PBCodable <NSCopying> {

	NSString* _abExperimentURL;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSMutableArray* _announcementsSupportedLanguages;
	NSString* _announcementsURL;
	NSMutableArray* _attributionBadges;
	NSMutableArray* _attributions;
	NSString* _authToken;
	NSString* _autocompleteURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _businessCallerIDURL;
	NSString* _businessNameResolutionURL;
	NSString* _businessPortalBaseURL;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSString* _etaURL;
	NSMutableArray* _fontChecksums;
	NSMutableArray* _fonts;
	NSString* _forwardGeocoderURL;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	NSMutableArray* _locationShiftEnabledRegions;
	NSString* _locationShiftURL;
	unsigned _locationShiftVersion;
	NSString* _logMessageUsageURL;
	NSString* _mapMatchURL;
	NSString* _polyLocationShiftURL;
	NSString* _problemCategoriesURL;
	NSString* _problemNotificationAvailabilityURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSMutableArray* _regionalResources;
	NSString* _releaseInfo;
	NSString* _resourcesURL;
	NSString* _reverseGeocoderURL;
	NSString* _reverseGeocoderVersionsURL;
	NSString* _searchAttributionManifestURL;
	NSString* _searchURL;
	NSString* _simpleETAURL;
	NSMutableArray* _styleSheetChecksums;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textureChecksums;
	NSMutableArray* _textures;
	NSMutableArray* _tileGroups;
	NSMutableArray* _tileSets;
	NSString* _usageURL;
	GEOVersionManifest* _versionManifest;
	NSMutableArray* _xmlChecksums;
	NSMutableArray* _xmls;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * tileGroups;                                   //@synthesize tileGroups=_tileGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileSets;                                     //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheets;                                  //@synthesize styleSheets=_styleSheets - In the implementation block
@property (nonatomic,retain) NSMutableArray * textures;                                     //@synthesize textures=_textures - In the implementation block
@property (nonatomic,retain) NSMutableArray * fonts;                                        //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                                        //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResources;                            //@synthesize regionalResources=_regionalResources - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmls;                                         //@synthesize xmls=_xmls - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributionBadges;                            //@synthesize attributionBadges=_attributionBadges - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                                 //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthToken; 
@property (nonatomic,retain) NSString * authToken;                                          //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,readonly) BOOL hasResourcesURL; 
@property (nonatomic,retain) NSString * resourcesURL;                                       //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchURL; 
@property (nonatomic,retain) NSString * searchURL;                                          //@synthesize searchURL=_searchURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchAttributionManifestURL; 
@property (nonatomic,retain) NSString * searchAttributionManifestURL;                       //@synthesize searchAttributionManifestURL=_searchAttributionManifestURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteURL; 
@property (nonatomic,retain) NSString * autocompleteURL;                                    //@synthesize autocompleteURL=_autocompleteURL - In the implementation block
@property (nonatomic,readonly) BOOL hasReverseGeocoderURL; 
@property (nonatomic,retain) NSString * reverseGeocoderURL;                                 //@synthesize reverseGeocoderURL=_reverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) BOOL hasForwardGeocoderURL; 
@property (nonatomic,retain) NSString * forwardGeocoderURL;                                 //@synthesize forwardGeocoderURL=_forwardGeocoderURL - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL;                                      //@synthesize directionsURL=_directionsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL;                                             //@synthesize etaURL=_etaURL - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationShiftURL; 
@property (nonatomic,retain) NSString * locationShiftURL;                                   //@synthesize locationShiftURL=_locationShiftURL - In the implementation block
@property (nonatomic,readonly) BOOL hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo;                                        //@synthesize releaseInfo=_releaseInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL;                            //@synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) BOOL hasMapMatchURL; 
@property (nonatomic,retain) NSString * mapMatchURL;                                        //@synthesize mapMatchURL=_mapMatchURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL;                                       //@synthesize simpleETAURL=_simpleETAURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheetChecksums;                          //@synthesize styleSheetChecksums=_styleSheetChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * textureChecksums;                             //@synthesize textureChecksums=_textureChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * fontChecksums;                                //@synthesize fontChecksums=_fontChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                                //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmlChecksums;                                 //@synthesize xmlChecksums=_xmlChecksums - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL;                           //@synthesize addressCorrectionInitURL=_addressCorrectionInitURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL;                         //@synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL - In the implementation block
@property (nonatomic,readonly) BOOL hasPolyLocationShiftURL; 
@property (nonatomic,retain) NSString * polyLocationShiftURL;                               //@synthesize polyLocationShiftURL=_polyLocationShiftURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL;                               //@synthesize problemSubmissionURL=_problemSubmissionURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL;                                   //@synthesize problemStatusURL=_problemStatusURL - In the implementation block
@property (nonatomic,readonly) BOOL hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) NSString * reverseGeocoderVersionsURL;                         //@synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL;                               //@synthesize problemCategoriesURL=_problemCategoriesURL - In the implementation block
@property (nonatomic,readonly) BOOL hasUsageURL; 
@property (nonatomic,retain) NSString * usageURL;                                           //@synthesize usageURL=_usageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessCallerIDURL; 
@property (nonatomic,retain) NSString * businessCallerIDURL;                                //@synthesize businessCallerIDURL=_businessCallerIDURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemNotificationAvailabilityURL; 
@property (nonatomic,retain) NSString * problemNotificationAvailabilityURL;                 //@synthesize problemNotificationAvailabilityURL=_problemNotificationAvailabilityURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL;                                   //@synthesize announcementsURL=_announcementsURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * announcementsSupportedLanguages;              //@synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessNameResolutionURL; 
@property (nonatomic,retain) NSString * businessNameResolutionURL;                          //@synthesize businessNameResolutionURL=_businessNameResolutionURL - In the implementation block
@property (nonatomic,readonly) BOOL hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL;                                      //@synthesize dispatcherURL=_dispatcherURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL;                                    //@synthesize problemOptInURL=_problemOptInURL - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionManifest; 
@property (nonatomic,retain) GEOVersionManifest * versionManifest;                          //@synthesize versionManifest=_versionManifest - In the implementation block
@property (nonatomic,readonly) BOOL hasAbExperimentURL; 
@property (nonatomic,retain) NSString * abExperimentURL;                                    //@synthesize abExperimentURL=_abExperimentURL - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL;                              //@synthesize businessPortalBaseURL=_businessPortalBaseURL - In the implementation block
@property (nonatomic,readonly) BOOL hasLogMessageUsageURL; 
@property (nonatomic,retain) NSString * logMessageUsageURL;                                 //@synthesize logMessageUsageURL=_logMessageUsageURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationShiftEnabledRegions;                  //@synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions - In the implementation block
@property (assign,nonatomic) BOOL hasLocationShiftVersion; 
@property (assign,nonatomic) unsigned locationShiftVersion;                                 //@synthesize locationShiftVersion=_locationShiftVersion - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icons;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionsCount;
-(NSMutableArray *)attributions;
-(void)clearAttributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)addTileSet:(id)arg1 ;
-(void)setTileSets:(NSMutableArray *)arg1 ;
-(id)tileSetAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)tileSets;
-(void)clearTileSets;
-(NSString *)batchReverseGeocoderURL;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(void)clearLocationShiftEnabledRegions;
-(NSString *)searchURL;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(void)setPolyLocationShiftURL:(NSString *)arg1 ;
-(void)setMapMatchURL:(NSString *)arg1 ;
-(NSString *)problemStatusURL;
-(NSString *)searchAttributionManifestURL;
-(void)setFonts:(NSMutableArray *)arg1 ;
-(void)clearTileGroups;
-(void)addIcon:(id)arg1 ;
-(void)setLocationShiftVersion:(unsigned)arg1 ;
-(void)clearXmls;
-(void)addStyleSheet:(id)arg1 ;
-(void)setSearchURL:(NSString *)arg1 ;
-(unsigned long long)tileGroupsCount;
-(void)setAnnouncementsSupportedLanguages:(NSMutableArray *)arg1 ;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(void)clearFonts;
-(NSString *)reverseGeocoderVersionsURL;
-(unsigned long long)locationShiftEnabledRegionsCount;
-(NSString *)autocompleteURL;
-(id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPolyLocationShiftURL;
-(unsigned long long)textureChecksumsCount;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(NSString *)addressCorrectionUpdateURL;
-(void)setAutocompleteURL:(NSString *)arg1 ;
-(NSString *)authToken;
-(BOOL)hasLocationShiftVersion;
-(void)addIconChecksum:(id)arg1 ;
-(void)clearFontChecksums;
-(void)setSearchAttributionManifestURL:(NSString *)arg1 ;
-(NSString *)resourcesURL;
-(NSString *)problemSubmissionURL;
-(unsigned long long)xmlsCount;
-(BOOL)hasAddressCorrectionInitURL;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(unsigned long long)texturesCount;
-(BOOL)hasAddressCorrectionUpdateURL;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(void)setHasLocationShiftVersion:(BOOL)arg1 ;
-(NSString *)polyLocationShiftURL;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(BOOL)hasReverseGeocoderVersionsURL;
-(void)addAnnouncementsSupportedLanguages:(id)arg1 ;
-(BOOL)hasAuthToken;
-(NSString *)problemNotificationAvailabilityURL;
-(void)setReverseGeocoderURL:(NSString *)arg1 ;
-(void)setRegionalResources:(NSMutableArray *)arg1 ;
-(NSString *)etaURL;
-(NSString *)locationShiftURL;
-(void)addTileGroup:(id)arg1 ;
-(BOOL)hasResourcesURL;
-(BOOL)hasProblemSubmissionURL;
-(void)setLocationShiftEnabledRegions:(NSMutableArray *)arg1 ;
-(void)addStyleSheetChecksum:(id)arg1 ;
-(unsigned long long)fontChecksumsCount;
-(void)clearRegionalResources;
-(void)clearTextures;
-(BOOL)hasProblemStatusURL;
-(id)xmlChecksumAtIndex:(unsigned long long)arg1 ;
-(NSString *)announcementsURL;
-(void)setReverseGeocoderVersionsURL:(NSString *)arg1 ;
-(BOOL)hasBusinessCallerIDURL;
-(NSMutableArray *)tileGroups;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(NSString *)usageURL;
-(NSString *)reverseGeocoderURL;
-(unsigned long long)styleSheetsCount;
-(id)attributionBadgeAtIndex:(unsigned long long)arg1 ;
-(void)setResourcesURL:(NSString *)arg1 ;
-(id)styleSheetChecksumAtIndex:(unsigned long long)arg1 ;
-(void)setBusinessNameResolutionURL:(NSString *)arg1 ;
-(void)clearIconChecksums;
-(BOOL)hasSearchURL;
-(void)setXmls:(NSMutableArray *)arg1 ;
-(void)setTextureChecksums:(NSMutableArray *)arg1 ;
-(void)setForwardGeocoderURL:(NSString *)arg1 ;
-(NSString *)problemCategoriesURL;
-(id)tileGroupAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAutocompleteURL;
-(void)setAttributionBadges:(NSMutableArray *)arg1 ;
-(BOOL)hasProblemCategoriesURL;
-(NSString *)forwardGeocoderURL;
-(NSString *)businessCallerIDURL;
-(NSString *)directionsURL;
-(BOOL)hasUsageURL;
-(BOOL)hasSearchAttributionManifestURL;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)regionalResourcesCount;
-(GEOVersionManifest *)versionManifest;
-(NSString *)simpleETAURL;
-(void)clearStyleSheetChecksums;
-(void)addTextureChecksum:(id)arg1 ;
-(BOOL)hasForwardGeocoderURL;
-(void)setVersionManifest:(GEOVersionManifest *)arg1 ;
-(void)clearStyleSheets;
-(void)setTileGroups:(NSMutableArray *)arg1 ;
-(unsigned long long)iconChecksumsCount;
-(NSMutableArray *)textures;
-(NSString *)abExperimentURL;
-(BOOL)hasDirectionsURL;
-(void)setFontChecksums:(NSMutableArray *)arg1 ;
-(NSString *)problemOptInURL;
-(BOOL)hasAnnouncementsURL;
-(void)addXmlChecksum:(id)arg1 ;
-(BOOL)hasReverseGeocoderURL;
-(unsigned long long)announcementsSupportedLanguagesCount;
-(NSMutableArray *)fonts;
-(BOOL)hasProblemNotificationAvailabilityURL;
-(void)setUsageURL:(NSString *)arg1 ;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(NSMutableArray *)styleSheetChecksums;
-(id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLocationShiftURL;
-(BOOL)hasProblemOptInURL;
-(void)addFont:(id)arg1 ;
-(void)clearXmlChecksums;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(id)textureChecksumAtIndex:(unsigned long long)arg1 ;
-(NSString *)dispatcherURL;
-(NSString *)releaseInfo;
-(BOOL)hasReleaseInfo;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(NSMutableArray *)announcementsSupportedLanguages;
-(void)setEtaURL:(NSString *)arg1 ;
-(void)addAttributionBadge:(id)arg1 ;
-(NSString *)mapMatchURL;
-(id)xmlAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDispatcherURL;
-(void)clearAnnouncementsSupportedLanguages;
-(BOOL)hasEtaURL;
-(NSMutableArray *)styleSheets;
-(BOOL)hasBusinessNameResolutionURL;
-(unsigned long long)iconsCount;
-(NSString *)businessNameResolutionURL;
-(id)textureAtIndex:(unsigned long long)arg1 ;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(BOOL)hasMapMatchURL;
-(BOOL)hasBusinessPortalBaseURL;
-(void)addRegionalResource:(id)arg1 ;
-(void)setStyleSheets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)xmls;
-(void)clearTextureChecksums;
-(unsigned long long)xmlChecksumsCount;
-(NSMutableArray *)xmlChecksums;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(BOOL)hasAbExperimentURL;
-(NSMutableArray *)attributionBadges;
-(void)setAuthToken:(NSString *)arg1 ;
-(BOOL)hasSimpleETAURL;
-(id)fontChecksumAtIndex:(unsigned long long)arg1 ;
-(NSString *)addressCorrectionInitURL;
-(void)setProblemNotificationAvailabilityURL:(NSString *)arg1 ;
-(void)setLocationShiftURL:(NSString *)arg1 ;
-(void)setXmlChecksums:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locationShiftEnabledRegions;
-(void)clearAttributionBadges;
-(BOOL)hasBatchReverseGeocoderURL;
-(void)clearIcons;
-(BOOL)hasVersionManifest;
-(unsigned)locationShiftVersion;
-(void)addXml:(id)arg1 ;
-(unsigned long long)styleSheetChecksumsCount;
-(void)setTextures:(NSMutableArray *)arg1 ;
-(NSString *)logMessageUsageURL;
-(id)styleSheetAtIndex:(unsigned long long)arg1 ;
-(void)setAbExperimentURL:(NSString *)arg1 ;
-(NSMutableArray *)textureChecksums;
-(void)addLocationShiftEnabledRegion:(id)arg1 ;
-(NSMutableArray *)regionalResources;
-(void)setStyleSheetChecksums:(NSMutableArray *)arg1 ;
-(void)setBusinessCallerIDURL:(NSString *)arg1 ;
-(void)addFontChecksum:(id)arg1 ;
-(unsigned long long)fontsCount;
-(void)setReleaseInfo:(NSString *)arg1 ;
-(NSMutableArray *)iconChecksums;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(unsigned long long)attributionBadgesCount;
-(void)addTexture:(id)arg1 ;
-(id)regionalResourceAtIndex:(unsigned long long)arg1 ;
-(NSString *)businessPortalBaseURL;
-(NSMutableArray *)fontChecksums;
-(BOOL)hasLogMessageUsageURL;
@end

