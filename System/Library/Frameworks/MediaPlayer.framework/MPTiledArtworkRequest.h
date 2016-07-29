/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class NSArray;

@interface MPTiledArtworkRequest : NSObject <NSCopying> {

	NSArray* _artworkCatalogsCache;
	/*^block*/id _artworkCatalogsBlock;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	double _tileSpacing;
	id<NSCopying> _entityIdentifier;
	id<NSCopying> _namespaceIdentifier;
	id<NSCopying> _revisionIdentifier;

}

@property (nonatomic,copy) id artworkCatalogsBlock;                           //@synthesize artworkCatalogsBlock=_artworkCatalogsBlock - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) double tileSpacing;                              //@synthesize tileSpacing=_tileSpacing - In the implementation block
@property (nonatomic,copy) id<NSCopying> entityIdentifier;                    //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy) id<NSCopying> namespaceIdentifier;                 //@synthesize namespaceIdentifier=_namespaceIdentifier - In the implementation block
@property (nonatomic,copy) id<NSCopying> revisionIdentifier;                  //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
-(unsigned long long)numberOfColumns;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfRows;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(id)artworkCatalogsWithCount:(unsigned long long)arg1 ;
-(id)artworkCatalogsBlock;
-(double)tileSpacing;
-(void)setTileSpacing:(double)arg1 ;
-(id<NSCopying>)namespaceIdentifier;
-(id<NSCopying>)revisionIdentifier;
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)entityIdentifier;
-(void)setArtworkCatalogsBlock:(id)arg1 ;
-(void)setEntityIdentifier:(id<NSCopying>)arg1 ;
-(void)setNamespaceIdentifier:(id<NSCopying>)arg1 ;
@end

