/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRRenderer, NSOperationQueue, NSDictionary;

@interface MRRenderArguments : NSObject {

	MRRenderer* _renderer;
	NSOperationQueue* _preloadQueue;
	NSDictionary* _forcedState;
	double _unalteredTime;
	double _displayLinkTimestamp;
	double _morphingProgress;
	int _thumbnailPolicy;
	unsigned char _currentLayoutIndex;
	BOOL _isPreloading;
	BOOL _freezesSizeOfImageRequests;
	BOOL _skipsAnimations;
	BOOL _timeWasSet;

}

@property (retain,readonly) MRRenderer * renderer;                //@synthesize renderer=_renderer - In the implementation block
@property (retain) NSOperationQueue * preloadQueue;               //@synthesize preloadQueue=_preloadQueue - In the implementation block
@property (retain) NSDictionary * forcedState;                    //@synthesize forcedState=_forcedState - In the implementation block
@property (assign) double unalteredTime;                          //@synthesize unalteredTime=_unalteredTime - In the implementation block
@property (assign) double displayLinkTimestamp;                   //@synthesize displayLinkTimestamp=_displayLinkTimestamp - In the implementation block
@property (assign) double morphingProgress;                       //@synthesize morphingProgress=_morphingProgress - In the implementation block
@property (assign) int thumbnailPolicy;                           //@synthesize thumbnailPolicy=_thumbnailPolicy - In the implementation block
@property (assign) unsigned char currentLayoutIndex;              //@synthesize currentLayoutIndex=_currentLayoutIndex - In the implementation block
@property (readonly) BOOL isPreloading;                           //@synthesize isPreloading=_isPreloading - In the implementation block
@property (assign) BOOL freezesSizeOfImageRequests;               //@synthesize freezesSizeOfImageRequests=_freezesSizeOfImageRequests - In the implementation block
@property (assign,nonatomic) BOOL skipsAnimations;                //@synthesize skipsAnimations=_skipsAnimations - In the implementation block
@property (assign) BOOL timeWasSet;                               //@synthesize timeWasSet=_timeWasSet - In the implementation block
-(void)setDisplayLinkTimestamp:(double)arg1 ;
-(void)setUnalteredTime:(double)arg1 ;
-(void)setSkipsAnimations:(BOOL)arg1 ;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(BOOL)timeWasSet;
-(void)setFreezesSizeOfImageRequests:(BOOL)arg1 ;
-(void)setTimeWasSet:(BOOL)arg1 ;
-(int)thumbnailPolicy;
-(void)setForcedState:(NSDictionary *)arg1 ;
-(void)setThumbnailPolicy:(int)arg1 ;
-(id)copyForPreloading;
-(BOOL)freezesSizeOfImageRequests;
-(double)displayLinkTimestamp;
-(BOOL)skipsAnimations;
-(BOOL)isPreloading;
-(double)unalteredTime;
-(NSDictionary *)forcedState;
-(NSOperationQueue *)preloadQueue;
-(void)setMorphingProgress:(double)arg1 ;
-(double)morphingProgress;
-(void)setPreloadQueue:(NSOperationQueue *)arg1 ;
-(void)dealloc;
-(void)cleanup;
-(MRRenderer *)renderer;
-(id)initWithRenderer:(id)arg1 ;
@end

