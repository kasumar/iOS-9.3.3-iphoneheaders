/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:25 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPTiledArtworkRepresentationCacheKey : NSObject <NSCopying> {

	id _entityIdentifier;
	id _namespaceIdentifier;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	id _revisionIdentifier;
	CGSize _scaledFittingSize;
	double _tileSpacing;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(CGSize)arg2 ;
@end

