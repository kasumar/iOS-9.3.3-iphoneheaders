/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject {

	MRContentItemRef _mrContentItem;
	MPMediaItemArtwork* _artwork;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) MPMediaItemArtwork * artwork; 
@property (assign,getter=isContainer,nonatomic) BOOL container; 
@property (assign,getter=isPlayable,nonatomic) BOOL playable; 
@property (assign,nonatomic) float playbackProgress; 
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setContainer:(BOOL)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(MPMediaItemArtwork *)artwork;
-(MRContentItemRef)_mediaRemoteContentItem;
-(id)_initWithMediaRemoteContentItem:(MRContentItemRef)arg1 ;
-(void)_postItemChangedNotification;
-(float)playbackProgress;
-(void)setPlayable:(BOOL)arg1 ;
-(void)setPlaybackProgress:(float)arg1 ;
-(id)_notification;
-(BOOL)isPlayable;
-(BOOL)isContainer;
@end

