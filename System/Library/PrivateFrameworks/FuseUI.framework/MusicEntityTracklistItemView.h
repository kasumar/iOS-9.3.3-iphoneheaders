/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <libobjc.A.dylib/MPUTextDrawingCacheInvalidationObserver.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>
#import <libobjc.A.dylib/MusicEntityViewDownloadInformationObserving.h>

@protocol MusicEntityTracklistItemViewDelegate;
@class UIButton, MusicDownloadProgressButton, MPUNowPlayingIndicatorView, UIImageView, MusicPopularityIndicatorView, NSMapTable, NSMutableArray, NSString, MusicEntityViewContentDescriptor;

@interface MusicEntityTracklistItemView : MusicEntityAbstractLockupView <MPUTextDrawingCacheInvalidationObserver, MusicEntityContentDescriptorViewConfiguring, MusicEntityViewDownloadInformationObserving> {

	UIButton* _contextualActionsButton;
	MusicDownloadProgressButton* _downloadProgressButton;
	MPUNowPlayingIndicatorView* _indicatorView;
	UIImageView* _mediaTypeImageView;
	UIImageView* _explicitBadgeImageView;
	MusicPopularityIndicatorView* _popularityIndicatorView;
	NSMapTable* _textDescriptorToTextDrawingView;
	NSMutableArray* _textDrawingViewReusePool;
	UIImageView* _trailingAccessoryImageView;
	SCD_Struct_Mu32 _delegateRespondsToSelector;
	BOOL _alwaysApplyLeadingTextColumnWidth;
	id<MusicEntityTracklistItemViewDelegate> _delegate;
	double _leadingTextColumnWidth;
	double _trailingTextColumnWidth;
	MusicEntityDownloadInformation _downloadInformation;

}

@property (assign,nonatomic,__weak) id<MusicEntityTracklistItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) MusicEntityDownloadInformation downloadInformation;                    //@synthesize downloadInformation=_downloadInformation - In the implementation block
@property (assign,nonatomic) double leadingTextColumnWidth;                                         //@synthesize leadingTextColumnWidth=_leadingTextColumnWidth - In the implementation block
@property (assign,nonatomic) double trailingTextColumnWidth;                                        //@synthesize trailingTextColumnWidth=_trailingTextColumnWidth - In the implementation block
@property (nonatomic,readonly) UIButton * contextualActionsButton;                                  //@synthesize contextualActionsButton=_contextualActionsButton - In the implementation block
@property (assign,nonatomic) BOOL alwaysApplyLeadingTextColumnWidth;                                //@synthesize alwaysApplyLeadingTextColumnWidth=_alwaysApplyLeadingTextColumnWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<MusicEntityTracklistItemViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MusicEntityTracklistItemViewDelegate>)delegate;
-(BOOL)_shouldShowPlayButton;
-(void)music_inheritedLayoutInsetsDidChange;
-(id)_viewForTextDescriptor:(id)arg1 ;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(void)_recycleTextViewsForTextDescriptors:(id)arg1 ;
-(void)_handlePlayButtonTappedWithAction:(unsigned long long)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)setDownloadInformation:(MusicEntityDownloadInformation)arg1 ;
-(BOOL)_shouldEnableArtworkViewUserInteraction;
-(MusicEntityDownloadInformation)downloadInformation;
-(UIButton *)contextualActionsButton;
-(void)_handleArtworkViewTapped;
-(void)_playbackStatusDidChange:(id)arg1 ;
-(void)_entityDisabledDidChange;
-(void)textDrawingCacheWasInvalidated:(id)arg1 ;
-(BOOL)_shouldLayoutAsEditing;
-(void)_contextualActionsButtonTapped:(id)arg1 ;
-(void)setLeadingTextColumnWidth:(double)arg1 ;
-(double)leadingTextColumnWidth;
-(void)setAlwaysApplyLeadingTextColumnWidth:(BOOL)arg1 ;
-(void)_recycleTextDrawingViewForTextDescriptor:(id)arg1 ;
-(BOOL)alwaysApplyLeadingTextColumnWidth;
-(id)_backgroundColorForTracklistItemSubviews;
-(id)_allTextDescriptorsInTracklistItemContentDescriptor:(id)arg1 ;
-(void)_updatePlaybackIndicator;
-(void)setTrailingTextColumnWidth:(double)arg1 ;
-(void)_contentDescriptorDidInvalidateNotification:(id)arg1 ;
-(double)trailingTextColumnWidth;
@end

