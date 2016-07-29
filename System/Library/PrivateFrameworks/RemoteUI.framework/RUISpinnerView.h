/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RUIElement.h>

@class UIView, UIActivityIndicatorView, UILabel, RUIObjectModel, UIColor;

@interface RUISpinnerView : RUIElement {

	UIView* _view;
	UIActivityIndicatorView* _spinner;
	UILabel* _label;
	RUIObjectModel* _objectModel;
	UIColor* _spinnerColor;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) UIColor * spinnerColor;                           //@synthesize spinnerColor=_spinnerColor - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(RUIObjectModel *)objectModel;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(id)spinnerView;
-(void)viewDidLayout;
-(UIColor *)spinnerColor;
-(void)setSpinnerColor:(UIColor *)arg1 ;
@end

