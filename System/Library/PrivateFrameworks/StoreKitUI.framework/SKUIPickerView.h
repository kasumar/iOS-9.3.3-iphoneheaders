/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol SKUIPickerViewDelegate;
@class _UIBackdropView, UIPickerView, UIView, NSArray, NSString;

@interface SKUIPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {

	_UIBackdropView* _backdropView;
	id<SKUIPickerViewDelegate> _delegate;
	UIPickerView* _pickerView;
	UIView* _separatorView;
	NSArray* _titles;

}

@property (assign,nonatomic,__weak) id<SKUIPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedItemIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SKUIPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)layoutSubviews;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUIPickerViewDelegate>)delegate;
-(id)initWithTitles:(id)arg1 ;
-(long long)selectedItemIndex;
-(void)setSelectedItemIndex:(long long)arg1 ;
@end

