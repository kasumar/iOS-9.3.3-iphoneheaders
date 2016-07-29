/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPLayerableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol MPAssetKeyDelegate;
@class MCMontage, NSArray, NSMutableDictionary, MPDocumentInternal;

@interface MPDocument : NSObject <MPLayerableSupportInternal, NSCoding> {

	MCMontage* _montage;
	NSArray* _userProvidedStacks;
	NSMutableDictionary* _documentAttributes;
	NSMutableDictionary* _fileProperties;
	NSMutableDictionary* _layerGroups;
	BOOL _preserveMedia;
	id<MPAssetKeyDelegate> _assetKeyDelegate;
	MPDocumentInternal* _internal;

}
+(id)unarchiveDocumentFromData:(id)arg1 withAssetKeyDelegate:(id)arg2 andMediaProperties:(id)arg3 error:(id*)arg4 ;
+(id)readableTypes;
+(id)unarchiveDocumentFromData:(id)arg1 error:(id*)arg2 ;
+(BOOL)isNativeType:(id)arg1 ;
+(id)keyedUnarchiverWithData:(id)arg1 assetKeyDelegate:(id)arg2 mediaProperties:(id)arg3 error:(id*)arg4 ;
+(id)writableTypes;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)marimbaDocument;
-(CGSize)resolutionForAssetAtPath:(id)arg1 ;
-(CGImageRef)CGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(id)dataForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(id)avAssetForAssetAtPath:(id)arg1 ;
-(double)stopTimeForAssetAtPath:(id)arg1 ;
-(CGImageRef)thumbnailCGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(id)attributeForAssetAtPath:(id)arg1 forKey:(id)arg2 ;
-(CGImageRef)CGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(double)startTimeForAssetAtPath:(id)arg1 ;
-(id)absolutePathForAssetAtPath:(id)arg1 ;
-(BOOL)isSupportedMovieForAssetAtPath:(id)arg1 ;
-(id)objectInLayersAtIndex:(long long)arg1 ;
-(id)styleID;
-(long long)countOfLayers;
-(void)replaceObjectInLayersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)setStyleID:(id)arg1 ;
-(void)removeObjectFromLayersAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inLayersAtIndex:(long long)arg2 ;
-(id)valueInLayersWithName:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)regionsOfInterestForPath:(id)arg1 ;
-(id)documentLayerGroup;
-(double)volumeForPath:(id)arg1 ;
-(BOOL)isInBatchModify;
-(id)descriptionForRandomTransitionPresetID:(id)arg1 ;
-(id)regionsOfInterestForPath:(id)arg1 detect:(BOOL)arg2 ;
-(void)setTemporarilyCacheAbsolutePaths:(BOOL)arg1 ;
-(id)propertiesForMediaPathAndCreateIfNeeded:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 ;
-(id)cachedAbsoluteStillPathFromPath:(id)arg1 ;
-(BOOL)isImageAtPath:(id)arg1 ;
-(BOOL)isAudioAtPath:(id)arg1 ;
-(void)upgradeDocument;
-(BOOL)isMovieAtPath:(id)arg1 ;
-(id)absoluteVideoPaths;
-(BOOL)layersCanPositionZIndex;
-(id)definedPlaceNameForPath:(id)arg1 ;
-(id)creationDateForPath:(id)arg1 ;
-(id)neighborhoodForPath:(id)arg1 ;
-(id)keywordsForPath:(id)arg1 ;
-(id)longitudeForPath:(id)arg1 ;
-(void)setMontage:(id)arg1 ;
-(id)actionableObjectForID:(id)arg1 ;
-(id)captionForPath:(id)arg1 ;
-(id)oceanForPath:(id)arg1 ;
-(CGPoint)latLongPointForMap:(id)arg1 withAttributes:(id)arg2 ;
-(id)latitudeForPath:(id)arg1 ;
-(id)stateForPath:(id)arg1 ;
-(id)cityForPath:(id)arg1 ;
-(id)countryForPath:(id)arg1 ;
-(id)areaForPath:(id)arg1 ;
-(id)placeForPath:(id)arg1 ;
-(void)configureActions;
-(id)organizedRandomTransitions;
-(BOOL)detectFacesInBackground;
-(void)setupDocumentLayerGroup;
-(void)setupLayerGroups;
-(void)setAlwaysLookupAbsolutePaths:(BOOL)arg1 ;
-(void)setDocumentLayerGroup:(id)arg1 ;
-(void)_setMediaProperties:(id)arg1 ;
-(void)organizeRandomTransitions;
-(id)altitudeForPath:(id)arg1 ;
-(id)lastRandomTransition;
-(BOOL)nearingEndWithOptions:(id)arg1 ;
-(id)cachedAbsolutePathFromPath:(id)arg1 ;
-(double)aspectRatioDidChange:(double)arg1 atTime:(double)arg2 ;
-(id)flightPlanFrom:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(void)setLastRandomTransition:(id)arg1 ;
-(void)setAbsoluteStillPath:(id)arg1 forKey:(id)arg2 ;
-(id)tiledMapPathsForAttributes:(id)arg1 ;
-(CGPoint)pointForMap:(id)arg1 withAttributes:(id)arg2 ;
-(double)fadeOutAudioDuration;
-(long long)mapLevelForPath:(id)arg1 ;
-(void)setAbsolutePath:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isLive;
-(double)aspectRatio;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(double)durationForPath:(id)arg1 ;
-(double)stopTimeForPath:(id)arg1 ;
-(id)allSongs;
-(id)allEffectContainers;
-(id)fullDebugLog;
-(id)titleEffect;
-(void)reconnectAllTransitions;
-(long long)antialiasLevel;
-(id)outroEffect;
-(long long)mediaTypeForPath:(id)arg1 ;
-(id)montage;
-(CGSize)resolutionForPath:(id)arg1 ;
-(double)startTimeForPath:(id)arg1 ;
-(void)dump;
-(id)uuid;
-(id)allEffects;
-(id)keyedLayers;
-(id)layerForKey:(id)arg1 ;
-(void)removeLayerForKey:(id)arg1 ;
-(void)removeLayersAtIndices:(id)arg1 ;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(void)insertLayers:(id)arg1 atIndex:(long long)arg2 ;
-(id)mainLayers;
-(void)removeAllLayers;
-(void)moveLayersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(CGColorRef)backgroundCGColor;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(double)duration;
-(id)layers;
-(void)addLayers:(id)arg1 ;
-(void)addLayer:(id)arg1 ;
-(double)videoDuration;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)orderedVideoPaths;
-(void)setAudioPaths:(id)arg1 ;
-(void)setVideoPaths:(id)arg1 ;
-(id)videoPaths;
-(void)removePaths:(id)arg1 ;
-(void)addVideoPath:(id)arg1 ;
-(void)addAudioPath:(id)arg1 ;
-(void)addVideoPaths:(id)arg1 ;
-(void)addAudioPaths:(id)arg1 ;
-(id)audioPaths;
-(id)stacks;
-(void)addStacks:(id)arg1 ;
-(void)setStacks:(id)arg1 ;
-(void)removeAllStacks;
-(void)removeAllAudioPaths;
-(void)removeAllVideoPaths;
-(void)removePath:(id)arg1 ;
-(id)documentAttributeForKey:(id)arg1 ;
-(void)setAuthoringOption:(id)arg1 forKey:(id)arg2 ;
-(id)authoringOptionForKey:(id)arg1 ;
-(BOOL)savesPathsAsAbsolute;
-(id)allSlides:(BOOL)arg1 ;
-(void)setLoopingMode:(unsigned long long)arg1 ;
-(unsigned long long)loopingMode;
-(void)endBatchModify;
-(id)mediaProperties;
-(double)posterTime;
-(id)assetKeyDelegate;
-(BOOL)preserveMedia;
-(id)allElements;
-(id)allSlides;
-(void)beginBatchModify;
-(void)setAssetKeyDelegate:(id)arg1 ;
-(void)setMediaProperties:(id)arg1 ;
-(void)setSavesPathsAsAbsolute:(BOOL)arg1 ;
-(void)setDocumentAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)propertiesForMediaPath:(id)arg1 ;
-(void)setProperties:(id)arg1 forMediaPath:(id)arg2 ;
-(BOOL)readFromPath:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)removePropertiesForMediaPath:(id)arg1 ;
-(void)setPreserveMedia:(BOOL)arg1 ;
-(id)documentAttributes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)currentStyle;
-(id)undoManager;
-(unsigned long long)applyStyle:(id)arg1 ;
-(void)cleanup;
-(id)displayName;
-(id)fileURL;
-(void)setUndoManager:(id)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(void)setFileURL:(id)arg1 ;
@end

