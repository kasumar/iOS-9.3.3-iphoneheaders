/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <AccessibilitySettings/ASTGestureRecorderViewControllerDelegate.h>
#import <AccessibilitySettings/ASTGestureRecorderControlsViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol ASTGestureRecorderMainViewControllerDelegate;
@class ASTGestureRecorderStyleProvider, ASTGestureRecorderViewController, ASTGestureRecorderControlsView, UILabel, UIBarButtonItem, AXAssertion, NSString;

@interface ASTGestureRecorderMainViewController : PSViewController <ASTGestureRecorderViewControllerDelegate, ASTGestureRecorderControlsViewDelegate, UITextFieldDelegate> {

	BOOL _inReplayMode;
	BOOL _shouldRecordRealTimeGesture;
	BOOL _isDisplayLinkInEffect;
	ASTGestureRecorderStyleProvider* _styleProvider;
	ASTGestureRecorderViewController* _gestureRecorderViewController;
	ASTGestureRecorderControlsView* _controlsView;
	UILabel* _instructionsLabel;
	UIBarButtonItem* _saveButton;
	unsigned long long _leftButtonIdentifier;
	unsigned long long _rightButtonIdentifier;
	double _gestureRecordingDidStartTimeInterval;
	id<ASTGestureRecorderMainViewControllerDelegate> _delegate;
	AXAssertion* _disableSystemGesturesAssertion;
	id _appDidResignActiveNotificationHandlerToken;

}

@property (assign,nonatomic) id<ASTGestureRecorderMainViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderStyleProvider * styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderViewController * gestureRecorderViewController;              //@synthesize gestureRecorderViewController=_gestureRecorderViewController - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderControlsView * controlsView;                                 //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                                   //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                                  //@synthesize saveButton=_saveButton - In the implementation block
@property (assign,nonatomic) unsigned long long leftButtonIdentifier;                                       //@synthesize leftButtonIdentifier=_leftButtonIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long rightButtonIdentifier;                                      //@synthesize rightButtonIdentifier=_rightButtonIdentifier - In the implementation block
@property (assign,nonatomic) double gestureRecordingDidStartTimeInterval;                                   //@synthesize gestureRecordingDidStartTimeInterval=_gestureRecordingDidStartTimeInterval - In the implementation block
@property (assign,getter=isInReplayMode,nonatomic) BOOL inReplayMode;                                       //@synthesize inReplayMode=_inReplayMode - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;                                  //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,retain) id appDidResignActiveNotificationHandlerToken;                                 //@synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken - In the implementation block
@property (assign,nonatomic) BOOL shouldRecordRealTimeGesture;                                              //@synthesize shouldRecordRealTimeGesture=_shouldRecordRealTimeGesture - In the implementation block
@property (assign,nonatomic) BOOL isDisplayLinkInEffect;                                                    //@synthesize isDisplayLinkInEffect=_isDisplayLinkInEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
-(void)_enterReplayMode;
-(void)_clearProgressView;
-(id)_defaultInstructionalText;
-(void)_didSaveGestureWithName:(id)arg1 ;
-(void)setIsDisplayLinkInEffect:(BOOL)arg1 ;
-(BOOL)isInReplayMode;
-(BOOL)shouldRecordRealTimeGesture;
-(ASTGestureRecorderControlsView *)controlsView;
-(void)setRightButtonIdentifier:(unsigned long long)arg1 ;
-(void)setLeftButtonIdentifier:(unsigned long long)arg1 ;
-(void)_enterWaitingMode;
-(void)_getButtonPropertiesForIdentifier:(unsigned long long)arg1 enabled:(BOOL)arg2 color:(int*)arg3 title:(id*)arg4 ;
-(void)setGestureRecordingDidStartTimeInterval:(double)arg1 ;
-(void)_unhideChrome;
-(void)setGestureRecorderViewController:(ASTGestureRecorderViewController *)arg1 ;
-(id)initForRealTimeGesture:(BOOL)arg1 ;
-(void)_updateProgressView:(id)arg1 ;
-(void)setControlsView:(ASTGestureRecorderControlsView *)arg1 ;
-(void)setShouldRecordRealTimeGesture:(BOOL)arg1 ;
-(void)_hideChromeButtonTapped:(id)arg1 ;
-(BOOL)isDisplayLinkInEffect;
-(id)appDidResignActiveNotificationHandlerToken;
-(void)setInReplayMode:(BOOL)arg1 ;
-(unsigned long long)leftButtonIdentifier;
-(ASTGestureRecorderViewController *)gestureRecorderViewController;
-(unsigned long long)rightButtonIdentifier;
-(void)_saveWithMessage:(id)arg1 ;
-(void)_saveReplayableGesture;
-(BOOL)_canSaveGestureWithName:(id)arg1 ;
-(double)gestureRecordingDidStartTimeInterval;
-(void)_manageDisplayLinkManager:(BOOL)arg1 ;
-(void)_hideChrome;
-(void)_releaseOutlets;
-(void)_setLeftButtonIdentifier:(unsigned long long)arg1 enabled:(BOOL)arg2 rightButtonIdentifier:(unsigned long long)arg3 enabled:(BOOL)arg4 animate:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2 ;
-(double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1 ;
-(void)gestureRecorderViewControllerDidStartRecordingAtomicFingerPath:(id)arg1 ;
-(void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1 ;
-(void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1 ;
-(BOOL)isChromeVisibleForGestureRecorderViewController:(id)arg1 ;
-(void)gestureRecorderViewController:(id)arg1 setChromeVisible:(BOOL)arg2 ;
-(void)setAppDidResignActiveNotificationHandlerToken:(id)arg1 ;
-(void)setDelegate:(id<ASTGestureRecorderMainViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ASTGestureRecorderMainViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_reset;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)_commonInit;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_hide;
-(ASTGestureRecorderStyleProvider *)styleProvider;
-(void)setStyleProvider:(ASTGestureRecorderStyleProvider *)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(UIBarButtonItem *)saveButton;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(void)_saveButtonTapped:(id)arg1 ;
@end

