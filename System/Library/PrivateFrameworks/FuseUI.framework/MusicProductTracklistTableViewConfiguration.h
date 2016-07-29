/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@protocol MusicEntityProviding;
@class MusicEntityViewDescriptor, MusicMediaProductTracklistTableViewDescriptor, MusicCompositeEntityViewDescriptor, NSString, MusicMediaDetailTintInformation;

@interface MusicProductTracklistTableViewConfiguration : MusicLibraryBrowseTableViewConfiguration {

	BOOL _wantsArtistName;
	BOOL _wantsArtwork;
	BOOL _wantsCompleteOffer;
	BOOL _wantsCopyrightText;
	MusicEntityViewDescriptor* _copyrightEntityViewDescriptor;
	MusicEntityViewDescriptor* _showCompleteOfferEntityViewDescriptor;
	MusicEntityViewDescriptor* _shuffleEntityViewDescriptor;
	MusicMediaProductTracklistTableViewDescriptor* _tracklistTableViewDescriptor;
	MusicCompositeEntityViewDescriptor* _compositeEntityViewDescriptor;
	NSString* _completeOfferLocalizedTitle;
	id<MusicEntityProviding> _entityProvider;
	id<MusicEntityProviding> _copyrightSourceEntityProvider;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	long long _prominentTrackStoreID;

}

@property (nonatomic,copy) NSString * completeOfferLocalizedTitle;                                                         //@synthesize completeOfferLocalizedTitle=_completeOfferLocalizedTitle - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> entityProvider;                                                    //@synthesize entityProvider=_entityProvider - In the implementation block
@property (nonatomic,retain) id<MusicEntityProviding> copyrightSourceEntityProvider;                                       //@synthesize copyrightSourceEntityProvider=_copyrightSourceEntityProvider - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                                   //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (assign,nonatomic) long long prominentTrackStoreID;                                                              //@synthesize prominentTrackStoreID=_prominentTrackStoreID - In the implementation block
@property (nonatomic,readonly) MusicMediaProductTracklistTableViewDescriptor * tracklistTableViewDescriptor; 
@property (assign,nonatomic) BOOL wantsArtistName;                                                                         //@synthesize wantsArtistName=_wantsArtistName - In the implementation block
@property (assign,nonatomic) BOOL wantsArtwork;                                                                            //@synthesize wantsArtwork=_wantsArtwork - In the implementation block
@property (assign,nonatomic) BOOL wantsCompleteOffer;                                                                      //@synthesize wantsCompleteOffer=_wantsCompleteOffer - In the implementation block
@property (assign,nonatomic) BOOL wantsCopyrightText;                                                                      //@synthesize wantsCopyrightText=_wantsCopyrightText - In the implementation block
@property (nonatomic,readonly) MusicEntityViewDescriptor * _copyrightEntityViewDescriptor;                                 //@synthesize copyrightEntityViewDescriptor=_copyrightEntityViewDescriptor - In the implementation block
@property (nonatomic,readonly) MusicEntityViewDescriptor * _showCompleteOfferEntityViewDescriptor;                         //@synthesize showCompleteOfferEntityViewDescriptor=_showCompleteOfferEntityViewDescriptor - In the implementation block
@property (nonatomic,readonly) MusicEntityViewDescriptor * _shuffleEntityViewDescriptor;                                   //@synthesize shuffleEntityViewDescriptor=_shuffleEntityViewDescriptor - In the implementation block
@property (nonatomic,readonly) MusicMediaProductTracklistTableViewDescriptor * _tracklistTableViewDescriptor;              //@synthesize tracklistTableViewDescriptor=_tracklistTableViewDescriptor - In the implementation block
@property (nonatomic,readonly) MusicCompositeEntityViewDescriptor * _compositeEntityViewDescriptor;                        //@synthesize compositeEntityViewDescriptor=_compositeEntityViewDescriptor - In the implementation block
+(Class)tracklistItemContentDescriptorClass;
-(id)init;
-(id<MusicEntityProviding>)entityProvider;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(id)newViewController;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithEntityProvider:(id)arg1 ;
-(MusicEntityViewDescriptor *)_shuffleEntityViewDescriptor;
-(MusicMediaProductTracklistTableViewDescriptor *)_tracklistTableViewDescriptor;
-(MusicEntityViewDescriptor *)_copyrightEntityViewDescriptor;
-(MusicEntityViewDescriptor *)_showCompleteOfferEntityViewDescriptor;
-(id)newSelectionEntityValueContext;
-(void)_configureCopyrightViewDescriptorWithTintInformation:(id)arg1 ;
-(void)_configureShowCompleteAlbumViewDescriptorWithTintInformation:(id)arg1 ;
-(void)_configureShuffleEntityViewDescriptorWithTintInformation:(id)arg1 ;
-(void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1 ;
-(void)setProminentTrackStoreID:(long long)arg1 ;
-(id)_loadCopyrightEntityViewDescriptorWithSourceEntityProvider:(id)arg1 ;
-(id)_loadShowCompleteEntityViewDescriptorWithCompleteOfferEntityProvider:(id)arg1 ;
-(id)_loadShuffleEntityViewDescriptorWithSourceEntityProvider:(id)arg1 ;
-(id)_loadTracklistTableViewDescriptor;
-(long long)handleSelectionOfUnplayableEntityValueContext:(id)arg1 withPlayabilityResult:(unsigned long long)arg2 fromViewController:(id)arg3 ;
-(MusicMediaProductTracklistTableViewDescriptor *)tracklistTableViewDescriptor;
-(MusicCompositeEntityViewDescriptor *)_compositeEntityViewDescriptor;
-(NSString *)completeOfferLocalizedTitle;
-(void)setCompleteOfferLocalizedTitle:(NSString *)arg1 ;
-(id<MusicEntityProviding>)copyrightSourceEntityProvider;
-(void)setCopyrightSourceEntityProvider:(id<MusicEntityProviding>)arg1 ;
-(long long)prominentTrackStoreID;
-(BOOL)wantsArtistName;
-(void)setWantsArtistName:(BOOL)arg1 ;
-(BOOL)wantsArtwork;
-(void)setWantsArtwork:(BOOL)arg1 ;
-(BOOL)wantsCompleteOffer;
-(void)setWantsCompleteOffer:(BOOL)arg1 ;
-(BOOL)wantsCopyrightText;
-(void)setWantsCopyrightText:(BOOL)arg1 ;
@end

