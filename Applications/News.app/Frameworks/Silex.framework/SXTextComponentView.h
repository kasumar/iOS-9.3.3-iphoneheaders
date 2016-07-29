/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <Silex/SXTextViewDelegate.h>

@class SXTextView, NSString;

@interface SXTextComponentView : SXComponentView <SXTextViewDelegate> {

	SXTextComponentView* _previousTextComponentView;
	SXTextComponentView* _nextTextComponentView;
	SXTextView* _textView;
	CGSize _calculatedSize;

}

@property (assign,nonatomic,__weak) SXTextComponentView * previousTextComponentView;              //@synthesize previousTextComponentView=_previousTextComponentView - In the implementation block
@property (assign,nonatomic,__weak) SXTextComponentView * nextTextComponentView;                  //@synthesize nextTextComponentView=_nextTextComponentView - In the implementation block
@property (nonatomic,retain) SXTextView * textView;                                               //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) CGSize calculatedSize;                                               //@synthesize calculatedSize=_calculatedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)provideInfosLayoutTo:(id)arg1 ;
-(id)snapLines;
-(BOOL)gestureShouldBegin:(id)arg1 ;
-(id)layoutDescription;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(void)presentComponent;
-(id)textSource;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(void)setupTextView;
-(id)componentIdentifierForTextView:(id)arg1 ;
-(id)textRulesForTextView:(id)arg1 ;
-(id)accessibilityContextualLabelForTextView:(id)arg1 ;
-(id)accessibilityCustomRotorMembershipForTextView:(id)arg1 ;
-(SXTextComponentView *)previousTextComponentView;
-(void)setPreviousTextComponentView:(SXTextComponentView *)arg1 ;
-(SXTextComponentView *)nextTextComponentView;
-(void)setNextTextComponentView:(SXTextComponentView *)arg1 ;
-(CGSize)calculatedSize;
-(void)setCalculatedSize:(CGSize)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)setTextView:(SXTextView *)arg1 ;
-(SXTextView *)textView;
@end
