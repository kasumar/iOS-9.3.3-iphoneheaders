/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView {

	NSArray* _currentSnapshotCharacters;
	NSArray* _incomingSnapshotCharacters;
	NSAttributedString* _currentAttributedText;
	id _pendingAttributedString;
	unsigned long long _pendingDirection;
	BOOL _pendingPushPerCharacter;
	double _currentAnimationFinishTime;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(BOOL)arg2 ;
-(void)_setIncomingSnapshotCharacters:(id)arg1 ;
-(void)_layoutViewsAtIndex:(unsigned long long)arg1 forPushEndWithDirection:(unsigned long long)arg2 ;
-(void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2 ;
-(void)_layoutForPushStartWithDirection:(unsigned long long)arg1 ;
-(void)_processPendingStringIfNeeded;
-(void)pushToAttributedText:(id)arg1 direction:(unsigned long long)arg2 perCharacter:(BOOL)arg3 ;
-(void)_setCurrentSnapshotCharacters:(id)arg1 ;
-(void)sizeToFitAttributedText:(id)arg1 ;
-(void)setAttributedTextUnanimated:(id)arg1 ;
-(id)currentAttributedText;
@end

