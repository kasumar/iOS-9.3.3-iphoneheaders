/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSettings/HOSSubtitleCell.h>

@class HMIncomingHomeInvitation, UILabel, UIButton;

@interface HOSInvitationCell : HOSSubtitleCell {

	HMIncomingHomeInvitation* _invitation;
	UILabel* _statusLabel;
	UIButton* _acceptButton;
	UIButton* _declineButton;

}

@property (nonatomic,retain) HMIncomingHomeInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                              //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UIButton * acceptButton;                            //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIButton * declineButton;                           //@synthesize declineButton=_declineButton - In the implementation block
-(BOOL)_hasButtons;
-(void)didTapAccept:(id)arg1 ;
-(void)didTapDecline:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HMIncomingHomeInvitation *)invitation;
-(void)setInvitation:(HMIncomingHomeInvitation *)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UIButton *)acceptButton;
-(void)setAcceptButton:(UIButton *)arg1 ;
-(UIButton *)declineButton;
-(void)setDeclineButton:(UIButton *)arg1 ;
@end

