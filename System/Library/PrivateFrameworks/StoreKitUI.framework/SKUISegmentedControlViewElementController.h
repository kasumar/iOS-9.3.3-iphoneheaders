/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIFlexibleSegmentedControlDelegate.h>
#import <libobjc.A.dylib/SKUIMenuPopoverDelegate.h>
#import <libobjc.A.dylib/SKUIMenuViewControllerDelegate.h>

@class SKUIClientContext, UIBarButtonItem, SKUIMenuViewController, UIViewController, SKUIMenuPopoverController, SKUIFlexibleSegmentedControl, SKUISegmentedControlViewElement, UIView, NSString;

@interface SKUISegmentedControlViewElementController : NSObject <SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIMenuViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	long long _defaultMaximumNumberOfVisibleItems;
	double _desiredSegmentWidth;
	UIBarButtonItem* _menuSheetCancelButtonItem;
	SKUIMenuViewController* _menuSheetViewController;
	UIViewController* _parentViewController;
	SKUIMenuPopoverController* _popoverMenuViewController;
	SKUIFlexibleSegmentedControl* _segmentedControl;
	SKUISegmentedControlViewElement* _viewElement;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                            //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) long long defaultMaximumNumberOfVisibleItems;                 //@synthesize defaultMaximumNumberOfVisibleItems=_defaultMaximumNumberOfVisibleItems - In the implementation block
@property (assign,nonatomic) double desiredSegmentWidth;                                   //@synthesize desiredSegmentWidth=_desiredSegmentWidth - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;               //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) UIView * segmentedControlView; 
@property (nonatomic,readonly) SKUISegmentedControlViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUISegmentedControlViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
-(void)setDesiredSegmentWidth:(double)arg1 ;
-(void)reloadAfterDocumentUpdate;
-(UIView *)segmentedControlView;
-(void)setDefaultMaximumNumberOfVisibleItems:(long long)arg1 ;
-(id)initWithViewElement:(id)arg1 segmentedControl:(id)arg2 ;
-(void)menuPopoverDidCancel:(id)arg1 ;
-(void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2 ;
-(void)menuPopover:(id)arg1 willRepositionToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)_destroyPopoverController;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)_connectToSegmentedControl:(id)arg1 ;
-(id)_segmentedControl;
-(void)_reloadPropertiesForSegmentedControl:(id)arg1 ;
-(void)_showPopoverMoreListWithTitles:(id)arg1 ;
-(void)_showMoreListSheetWithTitles:(id)arg1 selectedIndex:(long long)arg2 ;
-(void)_destroyMenuSheetViewController;
-(void)_cancelMenuAction:(id)arg1 ;
-(void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2 ;
-(void)segmentedControl:(id)arg1 showMoreListWithTitles:(id)arg2 ;
-(long long)defaultMaximumNumberOfVisibleItems;
-(double)desiredSegmentWidth;
@end

