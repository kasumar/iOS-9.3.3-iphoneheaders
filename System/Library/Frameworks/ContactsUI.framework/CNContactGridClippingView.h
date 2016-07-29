/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CNAvatarView, CAShapeLayer;

@interface CNContactGridClippingView : UIView {

	CNAvatarView* _avatarView;
	CAShapeLayer* _actionsMaskLayer;

}

@property (assign,nonatomic,__weak) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * actionsMaskLayer;               //@synthesize actionsMaskLayer=_actionsMaskLayer - In the implementation block
@property (assign,nonatomic) BOOL masksToAvatar; 
-(void)layoutSubviews;
-(CAShapeLayer *)actionsMaskLayer;
-(BOOL)masksToAvatar;
-(void)setActionsMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setMasksToAvatar:(BOOL)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

