/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:01 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIButton;

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView {

	UIButton* _arrowButton;

}

@property (nonatomic,retain) UIButton * arrowButton;              //@synthesize arrowButton=_arrowButton - In the implementation block
+(id)reuseIdentifier;
+(id)collectionViewKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(UIButton *)arrowButton;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)updateArrow;
-(void)setArrowButton:(UIButton *)arg1 ;
@end

