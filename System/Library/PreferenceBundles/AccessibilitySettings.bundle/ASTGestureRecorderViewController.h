/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AccessibilitySettings/ASTGestureRecorderViewDelegate.h>
#import <AccessibilitySettings/ASTGestureRecorderFingerPathCollectionDelegate.h>

@protocol ASTGestureRecorderViewControllerDelegate;
@class ASTGestureRecorderStyleProvider, ASTGestureRecorderFingerPathCollection, NSMutableArray, NSMutableDictionary, ASTGestureRecorderView, NSString;

@interface ASTGestureRecorderViewController : UIViewController <ASTGestureRecorderViewDelegate, ASTGestureRecorderFingerPathCollectionDelegate> {

	BOOL _shouldPreventFurtherRecording;
	BOOL _trackingTouches;
	BOOL _inReplayMode;
	BOOL _shouldRecordRealTimeGesture;
	ASTGestureRecorderStyleProvider* _styleProvider;
	id<ASTGestureRecorderViewControllerDelegate> _delegate;
	ASTGestureRecorderFingerPathCollection* _fingerPathCollection;
	ASTGestureRecorderFingerPathCollection* _dynamicFingerPathCollection;
	double _trackingTouchesDidStartTimeInterval;
	unsigned long long _replayTimestampIndex;
	unsigned long long _replayTimestampsCount;
	NSMutableArray* _replayDynamicFingerPaths;
	NSMutableDictionary* _instantReplayTimestampIndexes;
	NSMutableDictionary* _instantReplayPartialFingerPaths;

}

@property (nonatomic,retain) ASTGestureRecorderStyleProvider * styleProvider;                                   //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) id<ASTGestureRecorderViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) ASTGestureRecorderView * gestureRecorderView; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (assign,nonatomic) BOOL shouldRecordRealTimeGesture;                                                  //@synthesize shouldRecordRealTimeGesture=_shouldRecordRealTimeGesture - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderFingerPathCollection * fingerPathCollection;                     //@synthesize fingerPathCollection=_fingerPathCollection - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderFingerPathCollection * dynamicFingerPathCollection;              //@synthesize dynamicFingerPathCollection=_dynamicFingerPathCollection - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventFurtherRecording;                                                //@synthesize shouldPreventFurtherRecording=_shouldPreventFurtherRecording - In the implementation block
@property (assign,getter=isTrackingTouches,nonatomic) BOOL trackingTouches;                                     //@synthesize trackingTouches=_trackingTouches - In the implementation block
@property (assign,nonatomic) double trackingTouchesDidStartTimeInterval;                                        //@synthesize trackingTouchesDidStartTimeInterval=_trackingTouchesDidStartTimeInterval - In the implementation block
@property (assign,getter=isInReplayMode,nonatomic) BOOL inReplayMode;                                           //@synthesize inReplayMode=_inReplayMode - In the implementation block
@property (assign,nonatomic) unsigned long long replayTimestampIndex;                                           //@synthesize replayTimestampIndex=_replayTimestampIndex - In the implementation block
@property (assign,nonatomic) unsigned long long replayTimestampsCount;                                          //@synthesize replayTimestampsCount=_replayTimestampsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * replayDynamicFingerPaths;                                         //@synthesize replayDynamicFingerPaths=_replayDynamicFingerPaths - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * instantReplayTimestampIndexes;                               //@synthesize instantReplayTimestampIndexes=_instantReplayTimestampIndexes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * instantReplayPartialFingerPaths;                             //@synthesize instantReplayPartialFingerPaths=_instantReplayPartialFingerPaths - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ASTGestureRecorderFingerPathCollection *)fingerPathCollection;
-(NSMutableArray *)replayDynamicFingerPaths;
-(void)_endInstantReplay;
-(ASTGestureRecorderView *)gestureRecorderView;
-(void)setDynamicFingerPathCollection:(ASTGestureRecorderFingerPathCollection *)arg1 ;
-(void)setReplayDynamicFingerPaths:(NSMutableArray *)arg1 ;
-(void)reloadAllFingerPaths;
-(void)setFingerPathCollection:(ASTGestureRecorderFingerPathCollection *)arg1 ;
-(BOOL)shouldPreventFurtherRecording;
-(void)_clearWeakReferencesWithOutlets;
-(NSMutableDictionary *)instantReplayTimestampIndexes;
-(unsigned long long)replayTimestampIndex;
-(BOOL)isInReplayMode;
-(ASTGestureRecorderFingerPathCollection *)dynamicFingerPathCollection;
-(void)setTrackingTouches:(BOOL)arg1 ;
-(BOOL)shouldRecordRealTimeGesture;
-(void)replayRecordedGesture;
-(void)_advanceReplay;
-(id)recordedGesturePropertyListRepresentationWithName:(id)arg1 ;
-(id)recordedReplayableGestureRepresentation;
-(void)setShouldRecordRealTimeGesture:(BOOL)arg1 ;
-(void)_exitReplayMode;
-(void)_freezeAllDynamicFingerPaths;
-(unsigned long long)replayTimestampsCount;
-(void)setReplayTimestampIndex:(unsigned long long)arg1 ;
-(void)setInReplayMode:(BOOL)arg1 ;
-(void)setReplayTimestampsCount:(unsigned long long)arg1 ;
-(NSMutableDictionary *)instantReplayPartialFingerPaths;
-(void)preventFurtherRecording;
-(void)freezeAllDynamicFingerPaths;
-(void)hideStaticView;
-(void)_releaseOutlets;
-(unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(id)arg1 ;
-(void)gestureRecorderView:(id)arg1 setChromeVisible:(BOOL)arg2 ;
-(BOOL)canToggleChromeForGestureRecorderView:(id)arg1 ;
-(BOOL)isChromeVisibleForGestureRecorderView:(id)arg1 ;
-(id)gestureRecorderView:(id)arg1 dynamicFingerPathAtIndex:(unsigned long long)arg2 ;
-(void)setInstantReplayTimestampIndexes:(NSMutableDictionary *)arg1 ;
-(void)setInstantReplayPartialFingerPaths:(NSMutableDictionary *)arg1 ;
-(void)setShouldPreventFurtherRecording:(BOOL)arg1 ;
-(void)_didFinishReplayingRecordedGesture;
-(void)_endInstantReplayForStaticFingerAtIndex:(unsigned long long)arg1 ;
-(void)_advanceInstantReplayForStaticFingerAtIndex:(id)arg1 ;
-(void)_startInstantReplayForStaticFingerAtIndex:(unsigned long long)arg1 ;
-(void)_didStartRecordingAtomicFingerPath;
-(void)setTrackingTouchesDidStartTimeInterval:(double)arg1 ;
-(void)_updateDynamicFingerPathsWithTouches:(id)arg1 touchesDidEnd:(BOOL)arg2 ;
-(double)trackingTouchesDidStartTimeInterval;
-(double)_maximumDurationOfRecordedGesture;
-(void)_didStopRecordingAtomicFingerPath;
-(void)gestureRecorderFingerPathCollection:(id)arg1 didInsertFingerPathAtIndex:(unsigned long long)arg2 ;
-(void)gestureRecorderFingerPathCollection:(id)arg1 didUpdateFingerPathAtIndex:(unsigned long long)arg2 ;
-(void)deleteAllFingerPaths;
-(void)setDelegate:(id<ASTGestureRecorderViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ASTGestureRecorderViewControllerDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isEmpty;
-(void)loadView;
-(ASTGestureRecorderStyleProvider *)styleProvider;
-(void)setStyleProvider:(ASTGestureRecorderStyleProvider *)arg1 ;
-(BOOL)isTrackingTouches;
@end
