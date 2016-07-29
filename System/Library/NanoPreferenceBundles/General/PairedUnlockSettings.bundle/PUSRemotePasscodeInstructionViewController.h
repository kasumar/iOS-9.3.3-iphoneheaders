/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol PUSRemotePasscodeViewControllerDelegate;
@class UILabel;

@interface PUSRemotePasscodeInstructionViewController : UIViewController {

	long long _action;
	id<PUSRemotePasscodeViewControllerDelegate> _delegate;
	UILabel* _instructionLabel;

}

@property (assign,nonatomic,__weak) id<PUSRemotePasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                                               //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<PUSRemotePasscodeViewControllerDelegate>)arg1 ;
-(id<PUSRemotePasscodeViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_cancel;
-(id)initWithAction:(long long)arg1 ;
-(UILabel *)instructionLabel;
@end

