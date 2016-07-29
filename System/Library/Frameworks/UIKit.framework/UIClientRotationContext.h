/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, UISnapshotView, UIWindow;

@interface UIClientRotationContext : NSObject {

	UIView* _headerView;
	UIView* _footerView;
	UIView* _contentView;
	UIView* _snapshotTargetView;
	UIView* _rotatingSnapshotView;
	UIView* _footerStartSnapshotView;
	UIView* _footerEndSnapshotView;
	BOOL _headerWasHidden;
	BOOL _footerWasHidden;
	BOOL _contentWasHidden;
	BOOL _snapshotTargetWasHidden;
	BOOL _orderKeyboardInAfterRotating;
	BOOL _skipFooterRotation;
	BOOL _skipHeaderRotation;
	long long _fromOrientation;
	long long _toOrientation;
	double _duration;
	UISnapshotView* _headerSnapshotViewStart;
	UISnapshotView* _footerSnapshotViewStart;
	UISnapshotView* _contentSnapshotViewStart;
	double _contentTopAdjustmentStart;
	id _rotatingClient;
	SCD_Struct_UI81 _rotationSettings;
	double contentBottomInset;
	UIWindow* _window;
	BOOL _skipClientRotationCallbacks;

}

@property (nonatomic,readonly) id rotatingClient;                           //@synthesize rotatingClient=_rotatingClient - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL skipClientRotationCallbacks;              //@synthesize skipClientRotationCallbacks=_skipClientRotationCallbacks - In the implementation block
@property (nonatomic,readonly) long long fromOrientation;                   //@synthesize fromOrientation=_fromOrientation - In the implementation block
@property (nonatomic,readonly) long long toOrientation;                     //@synthesize toOrientation=_toOrientation - In the implementation block
-(void)dealloc;
-(double)duration;
-(void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3 ;
-(void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
-(id)initWithClient:(id)arg1 toOrientation:(long long)arg2 duration:(double)arg3 andWindow:(id)arg4 ;
-(UIView *)contentView;
-(id)rotatingClient;
-(void)setSkipClientRotationCallbacks:(BOOL)arg1 ;
-(void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg1 forInterfaceOrientation:(long long)arg2 ;
-(void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg1 ;
-(void)rotateSnapshots;
-(long long)toOrientation;
-(void)finishFirstHalfRotation;
-(long long)fromOrientation;
-(BOOL)skipClientRotationCallbacks;
-(void)finishFullRotateUsingOnePartAnimation:(BOOL)arg1 ;
-(BOOL)_isHeaderTranslucent;
-(BOOL)_isFooterTranslucent;
-(void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3 ;
@end

