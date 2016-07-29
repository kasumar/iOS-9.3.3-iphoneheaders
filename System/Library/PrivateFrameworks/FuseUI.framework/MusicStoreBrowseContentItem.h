/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUModelObject.h>

@class MPUModelAlbum, MPUModelCurator, MPUModelMusicVideo, MPUModelPlaylist, MPUModelRadioStation, MPUModelSong;

@interface MusicStoreBrowseContentItem : MPUModelObject {

	unsigned long long _itemType;
	MPUModelAlbum* _album;
	MPUModelCurator* _curator;
	MPUModelMusicVideo* _musicVideo;
	MPUModelPlaylist* _playlist;
	MPUModelRadioStation* _radioStation;
	MPUModelSong* _song;
	long long _detailedItemType;

}

@property (assign,nonatomic) unsigned long long itemType;                      //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) MPUModelAlbum * album;                            //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) MPUModelCurator * curator;                        //@synthesize curator=_curator - In the implementation block
@property (nonatomic,retain) MPUModelMusicVideo * musicVideo;                  //@synthesize musicVideo=_musicVideo - In the implementation block
@property (nonatomic,retain) MPUModelPlaylist * playlist;                      //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) MPUModelRadioStation * radioStation;              //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,retain) MPUModelSong * song;                              //@synthesize song=_song - In the implementation block
@property (assign,nonatomic) long long detailedItemType;                       //@synthesize detailedItemType=_detailedItemType - In the implementation block
+(id)__itemType__KEY;
+(id)__detailedItemType__KEY;
+(id)__album__KEY;
+(id)__curator__KEY;
+(id)__musicVideo__KEY;
+(id)__playlist__KEY;
+(id)__radioStation__KEY;
+(id)__song__KEY;
-(unsigned long long)itemType;
-(void)setItemType:(unsigned long long)arg1 ;
-(MPUModelAlbum *)album;
-(void)setAlbum:(MPUModelAlbum *)arg1 ;
-(void)setDetailedItemType:(long long)arg1 ;
-(void)setCurator:(MPUModelCurator *)arg1 ;
-(void)setMusicVideo:(MPUModelMusicVideo *)arg1 ;
-(void)setPlaylist:(MPUModelPlaylist *)arg1 ;
-(void)setRadioStation:(MPUModelRadioStation *)arg1 ;
-(void)setSong:(MPUModelSong *)arg1 ;
-(long long)detailedItemType;
-(MPUModelRadioStation *)radioStation;
-(id)descriptionWithType:(unsigned long long)arg1 ;
-(MPUModelCurator *)curator;
-(MPUModelMusicVideo *)musicVideo;
-(MPUModelPlaylist *)playlist;
-(MPUModelSong *)song;
@end

