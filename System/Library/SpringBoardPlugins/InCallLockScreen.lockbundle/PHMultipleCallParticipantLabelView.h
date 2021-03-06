/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallLockScreen/InCallLockScreen-Structs.h>
#import <InCallLockScreen/PHAbstractCallParticipantLabelView.h>

@class NSLayoutConstraint, UILabel, UIProgressIndicator, UIButton;

@interface PHMultipleCallParticipantLabelView : PHAbstractCallParticipantLabelView {

	NSLayoutConstraint* _participantMarqueeLabelRightConstraint;
	UILabel* _statusLabel;
	NSLayoutConstraint* _statusLabelRightConstraint;
	UIProgressIndicator* _progressSpinner;
	UIButton* _conferenceParticipantsButton;

}

@property (retain) NSLayoutConstraint * participantMarqueeLabelRightConstraint;              //@synthesize participantMarqueeLabelRightConstraint=_participantMarqueeLabelRightConstraint - In the implementation block
@property (retain) UILabel * statusLabel;                                                    //@synthesize statusLabel=_statusLabel - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelRightConstraint;                          //@synthesize statusLabelRightConstraint=_statusLabelRightConstraint - In the implementation block
@property (retain) UIProgressIndicator * progressSpinner;                                    //@synthesize progressSpinner=_progressSpinner - In the implementation block
@property (retain) UIButton * conferenceParticipantsButton;                                  //@synthesize conferenceParticipantsButton=_conferenceParticipantsButton - In the implementation block
-(void)setShowsInfoButton:(BOOL)arg1 ;
-(void)setLabelDescriptor:(id)arg1 ;
-(void)setActivityState:(unsigned short)arg1 ;
-(void)setProgressSpinner:(UIProgressIndicator *)arg1 ;
-(void)setActivityState:(unsigned short)arg1 animated:(BOOL)arg2 ;
-(NSLayoutConstraint *)statusLabelRightConstraint;
-(void)setStatusLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIProgressIndicator *)progressSpinner;
-(void)setShowsActivitySpinner:(BOOL)arg1 ;
-(UIButton *)conferenceParticipantsButton;
-(void)setHidesLabel:(BOOL)arg1 ;
-(double)labelAlphaValueForActivityState:(unsigned short)arg1 ;
-(void)setParticipantMarqueeLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)participantMarqueeLabelRightConstraint;
-(void)setConferenceParticipantsButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)infoButtonTapped:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

