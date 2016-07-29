/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPlayButton.h>
#import <libobjc.A.dylib/MPUNowPlayingDelegate.h>

@protocol SearchUIResult;
@class NSURL, NSArray, MPMediaItem, NSString, SearchUITableViewCell;

@interface SearchUIPlayActionButton : SKUIPlayButton <MPUNowPlayingDelegate> {

	NSURL* _punchoutURL;
	NSArray* _adamIDs;
	MPMediaItem* _localMediaItem;
	NSString* _localMediaItemIdentifier;
	SearchUITableViewCell* _cell;
	id<SearchUIResult> _result;

}

@property (retain) NSURL * punchoutURL;                                        //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (retain) NSArray * adamIDs;                                          //@synthesize adamIDs=_adamIDs - In the implementation block
@property (nonatomic,retain) MPMediaItem * localMediaItem;                     //@synthesize localMediaItem=_localMediaItem - In the implementation block
@property (nonatomic,retain) NSString * localMediaItemIdentifier;              //@synthesize localMediaItemIdentifier=_localMediaItemIdentifier - In the implementation block
@property (assign,nonatomic,__weak) SearchUITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) id<SearchUIResult> result;                        //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startListeningForPlayback;
+(void)stopListeningForPlayback;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(SearchUITableViewCell *)cell;
-(void)setCell:(SearchUITableViewCell *)arg1 ;
-(id<SearchUIResult>)result;
-(void)setResult:(id<SearchUIResult>)arg1 ;
-(NSURL *)punchoutURL;
-(NSArray *)adamIDs;
-(float)playButtonDefaultAlpha;
-(void)_updatePlayState;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2 ;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2 ;
-(BOOL)updateActionButtonWithResult:(id)arg1 cell:(id)arg2 result:(id)arg3 ;
-(void)setAdamIDs:(NSArray *)arg1 ;
-(void)setLocalMediaItem:(MPMediaItem *)arg1 ;
-(void)setLocalMediaItemIdentifier:(NSString *)arg1 ;
-(MPMediaItem *)localMediaItem;
-(void)setPunchoutURL:(NSURL *)arg1 ;
-(BOOL)matchesNowPlayingItem;
-(NSString *)localMediaItemIdentifier;
-(id)initWithActionButtonItem:(id)arg1 cell:(id)arg2 result:(id)arg3 ;
-(void)buttonPressed;
-(void)updateProgressForCurrentlyActiveTrackAnimated:(BOOL)arg1 ;
@end

