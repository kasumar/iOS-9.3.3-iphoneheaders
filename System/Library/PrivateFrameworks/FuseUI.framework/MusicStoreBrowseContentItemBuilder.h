/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicStoreModelObjectBuilder.h>

@class MusicStoreModelAlbumBuilder, MusicStoreModelCuratorBuilder, MusicStoreModelMusicVideoBuilder, MusicStoreModelRadioStationBuilder, MusicStoreModelPlaylistBuilder, MusicStoreModelSongBuilder;

@interface MusicStoreBrowseContentItemBuilder : MusicStoreModelObjectBuilder {

	SCD_Struct_Mu9 _requestedBrowseContentItemProperties;
	MusicStoreModelAlbumBuilder* _albumBuilder;
	MusicStoreModelCuratorBuilder* _curatorBuilder;
	MusicStoreModelMusicVideoBuilder* _musicVideoBuilder;
	MusicStoreModelRadioStationBuilder* _radioStationBuilder;
	MusicStoreModelPlaylistBuilder* _playlistBuilder;
	MusicStoreModelSongBuilder* _songBuilder;
	BOOL _allowsRadioStations;
	BOOL _allowsVideoContent;

}

@property (assign,nonatomic) BOOL allowsRadioStations;              //@synthesize allowsRadioStations=_allowsRadioStations - In the implementation block
@property (assign,nonatomic) BOOL allowsVideoContent;               //@synthesize allowsVideoContent=_allowsVideoContent - In the implementation block
+(id)allSupportedProperties;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 ;
-(long long)contentItemTypeForRawResponseKindIdentifierValue:(long long)arg1 ;
-(long long)contentItemTypeForStoreItemMetadata:(id)arg1 ;
-(long long)contentItemTypeForRawResponseKindIdentifiers:(id)arg1 ;
-(BOOL)allowsRadioStations;
-(void)setAllowsRadioStations:(BOOL)arg1 ;
-(BOOL)allowsVideoContent;
-(void)setAllowsVideoContent:(BOOL)arg1 ;
@end

