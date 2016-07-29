/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPUExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource
-(id)init;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)wantsBackgroundImageDecompression;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
@end
