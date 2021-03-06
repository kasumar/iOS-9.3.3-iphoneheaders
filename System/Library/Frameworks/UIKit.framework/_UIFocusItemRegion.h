/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusRegion.h>

@protocol UIFocusContainer;
@class NSString;

@interface _UIFocusItemRegion : NSObject <_UIFocusRegion> {

	id<UIFocusContainer> _focusRegionItem;
	CGRect _focusRegionFrame;

}

@property (assign,nonatomic) CGRect focusRegionFrame;                                  //@synthesize focusRegionFrame=_focusRegionFrame - In the implementation block
@property (assign,nonatomic,__weak) id<UIFocusContainer> focusRegionItem;              //@synthesize focusRegionItem=_focusRegionItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGRect)_focusRegionFrame;
-(BOOL)_focusRegionIsEligibleForFocus;
-(BOOL)_focusRegionCanBecomeFocused;
-(id)_childFocusRegions;
-(BOOL)_isTransparentFocusRegion;
-(id)_focusRegionItem;
-(id)_childFocusRegionsInRect:(CGRect)arg1 ;
-(id)_focusRegionView;
-(id)_focusRegionGuides;
-(BOOL)_isPromiseFocusRegion;
-(id)_fulfillPromisedFocusRegion;
-(id)_focusDebugOverlayParentView;
-(id)initWithFocusItem:(id)arg1 frame:(CGRect)arg2 ;
-(CGRect)focusRegionFrame;
-(id<UIFocusContainer>)focusRegionItem;
-(id)initWithFocusItem:(id)arg1 ;
-(void)setFocusRegionFrame:(CGRect)arg1 ;
-(void)setFocusRegionItem:(id<UIFocusContainer>)arg1 ;
@end

