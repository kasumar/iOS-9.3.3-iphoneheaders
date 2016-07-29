/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKPhoneTranscriptMessageCell.h>

@class CKBalloonView, NSAttributedString, UILabel;

@interface CKTranscriptBalloonCell : CKPhoneTranscriptMessageCell {

	BOOL _drawerWasVisible;
	BOOL _drawerTextChanged;
	CKBalloonView* _balloonView;
	NSAttributedString* _drawerText;
	UILabel* _drawerLabel;
	CGSize _drawerTextSize;

}

@property (nonatomic,retain) CKBalloonView * balloonView;                //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,copy) NSAttributedString * drawerText;              //@synthesize drawerText=_drawerText - In the implementation block
@property (nonatomic,retain) UILabel * drawerLabel;                      //@synthesize drawerLabel=_drawerLabel - In the implementation block
@property (assign,nonatomic) BOOL drawerWasVisible;                      //@synthesize drawerWasVisible=_drawerWasVisible - In the implementation block
@property (assign,nonatomic) BOOL drawerTextChanged;                     //@synthesize drawerTextChanged=_drawerTextChanged - In the implementation block
@property (assign,nonatomic) CGSize drawerTextSize;                      //@synthesize drawerTextSize=_drawerTextSize - In the implementation block
-(void)configureForChatItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CKBalloonView *)balloonView;
-(void)setDrawerLabel:(UILabel *)arg1 ;
-(void)layoutSubviewsForDrawer;
-(UILabel *)drawerLabel;
-(BOOL)drawerWasVisible;
-(void)setDrawerWasVisible:(BOOL)arg1 ;
-(BOOL)drawerTextChanged;
-(NSAttributedString *)drawerText;
-(void)setDrawerTextSize:(CGSize)arg1 ;
-(void)setDrawerTextChanged:(BOOL)arg1 ;
-(CGSize)drawerTextSize;
-(void)layoutSubviewsForAlignmentContents;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)setDrawerText:(NSAttributedString *)arg1 ;
@end

