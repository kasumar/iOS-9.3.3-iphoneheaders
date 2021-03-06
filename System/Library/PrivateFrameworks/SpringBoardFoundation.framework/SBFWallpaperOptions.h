/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSData;

@interface SBFWallpaperOptions : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _magnifyEnabled;
	BOOL _supportsCropping;
	BOOL _portrait;
	BOOL _hasVideo;
	NSString* _name;
	double _parallaxFactor;
	double _zoomScale;
	double _stillTimeInVideo;
	CGRect _cropRect;

}

@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL parallaxEnabled; 
@property (assign,nonatomic) double parallaxFactor;                                     //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,getter=isMagnifyEnabled,nonatomic) BOOL magnifyEnabled;               //@synthesize magnifyEnabled=_magnifyEnabled - In the implementation block
@property (assign,nonatomic) double zoomScale;                                          //@synthesize zoomScale=_zoomScale - In the implementation block
@property (assign,nonatomic) BOOL supportsCropping;                                     //@synthesize supportsCropping=_supportsCropping - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                           //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,getter=isPortrait,nonatomic) BOOL portrait;                           //@synthesize portrait=_portrait - In the implementation block
@property (assign,nonatomic) BOOL hasVideo;                                             //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) double stillTimeInVideo;                                   //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
@property (nonatomic,readonly) CGSize bestWallpaperSize; 
@property (nonatomic,copy,readonly) NSData * persistentDataRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 ;
+(id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)setHasVideo:(BOOL)arg1 ;
-(BOOL)hasVideo;
-(CGSize)bestWallpaperSize;
-(id)initWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(BOOL)arg4 cropRect:(CGRect)arg5 portrait:(BOOL)arg6 hasVideo:(BOOL)arg7 stillTimeInVideo:(double)arg8 ;
-(BOOL)isPortrait;
-(BOOL)supportsCropping;
-(BOOL)isMagnifyEnabled;
-(double)stillTimeInVideo;
-(id)persistentPropertyList;
-(id)initWithPersistentDataRepresentation:(id)arg1 ;
-(NSData *)persistentDataRepresentation;
-(void)setMagnifyEnabled:(BOOL)arg1 ;
-(void)setSupportsCropping:(BOOL)arg1 ;
-(void)setPortrait:(BOOL)arg1 ;
-(void)setStillTimeInVideo:(double)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(double)parallaxFactor;
-(void)setParallaxFactor:(double)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)parallaxEnabled;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithStream:(id)arg1 ;
@end

