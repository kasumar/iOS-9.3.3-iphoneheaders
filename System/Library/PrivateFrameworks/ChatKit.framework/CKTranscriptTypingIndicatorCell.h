/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>

@class CKTypingView;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell {

	CKTypingView* _typingIndicatorLayer;
	CKTypingView* _typingView;

}

@property (nonatomic,retain) CKTypingView * typingIndicatorLayer;              //@synthesize typingIndicatorLayer=_typingIndicatorLayer - In the implementation block
@property (nonatomic,retain) CKTypingView * typingView;                        //@synthesize typingView=_typingView - In the implementation block
+(CGSize)indicatorSize;
-(void)configureForChatItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setOrientation:(char)arg1 ;
-(void)prepareForReuse;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)stopPulseAnimation;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(void)startShrinkAnimation;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setTypingView:(CKTypingView *)arg1 ;
-(CKTypingView *)typingView;
-(CKTypingView *)typingIndicatorLayer;
-(void)setTypingIndicatorLayer:(CKTypingView *)arg1 ;
@end

