/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol ABDatePickerViewControllerDismissDelegate;
@class UIDatePicker;

@interface ABDatePickerViewController : UIViewController {

	void* _context;
	UIDatePicker* _datePicker;
	id<ABDatePickerViewControllerDismissDelegate> _dismissDelegate;

}

@property (assign,nonatomic) void* context;                                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIDatePicker * datePicker;                                                  //@synthesize datePicker=_datePicker - In the implementation block
@property (assign,nonatomic) id<ABDatePickerViewControllerDismissDelegate> dismissDelegate;              //@synthesize dismissDelegate=_dismissDelegate - In the implementation block
+(CGSize)datePickerSize;
-(void)dealloc;
-(void)loadView;
-(void*)context;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setContext:(void*)arg1 ;
-(id<ABDatePickerViewControllerDismissDelegate>)dismissDelegate;
-(void)setDismissDelegate:(id<ABDatePickerViewControllerDismissDelegate>)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
@end

