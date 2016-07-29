/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImageView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/_UIDynamicCaretDocumentContentDelegate.h>

@protocol UIKeyboardCandidateListDelegate;
@class _UIDynamicCaretInput, _UIDynamicCaretAlternatives, _UIDynamicCaretNoContentView, _UIDynamicCaretHelpLabel, TIKeyboardCandidateResultSet, NSString;

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {

	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	long long _selectedIndex;
	BOOL _justDeleted;
	_UIDynamicCaretInput* _inputView;
	_UIDynamicCaretAlternatives* _alternativesView;
	_UIDynamicCaretNoContentView* _noContentView;
	_UIDynamicCaretHelpLabel* _helpLabel;
	TIKeyboardCandidateResultSet* _candidateSet;

}

@property (assign,nonatomic) BOOL isActive; 
@property (nonatomic,retain) _UIDynamicCaretInput * inputView;                            //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretAlternatives * alternativesView;              //@synthesize alternativesView=_alternativesView - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretNoContentView * noContentView;                //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretHelpLabel * helpLabel;                        //@synthesize helpLabel=_helpLabel - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                 //@synthesize candidateSet=_candidateSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isActive;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(id)backgroundImage;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)showNextCandidate;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(BOOL)hasCandidates;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(id)statisticsIdentifier;
-(BOOL)isExtendedList;
-(BOOL)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(_UIDynamicCaretInput *)inputView;
-(void)setIsActive:(BOOL)arg1 ;
-(void)setInputView:(_UIDynamicCaretInput *)arg1 ;
-(void)setAlternativesView:(_UIDynamicCaretAlternatives *)arg1 ;
-(void)setNoContentView:(_UIDynamicCaretNoContentView *)arg1 ;
-(void)setHelpLabel:(_UIDynamicCaretHelpLabel *)arg1 ;
-(_UIDynamicCaretAlternatives *)alternativesView;
-(_UIDynamicCaretNoContentView *)noContentView;
-(_UIDynamicCaretHelpLabel *)helpLabel;
-(void)displayAlternatives:(BOOL)arg1 ;
-(void)setDocumentHasContent:(BOOL)arg1 ;
-(void)alternativeTappedAtIndex:(long long)arg1 ;
-(BOOL)isDeleteCandidate:(id)arg1 ;
@end

