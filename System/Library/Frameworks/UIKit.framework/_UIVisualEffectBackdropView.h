/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIVisualEffectSubview.h>

@class CAFilter, NSMutableArray;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {

	CAFilter* _blurFilter;
	CAFilter* _saturateFilter;
	CAFilter* _colorOffsetFilter;
	NSMutableArray* _pendingScaleTransitionBlocks;
	id _statisticsDelegate;
	unsigned long long _blurHardEdges;
	double _blurRadius;

}

@property (assign,nonatomic) id statisticsDelegate;                         //@synthesize statisticsDelegate=_statisticsDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long blurHardEdges;              //@synthesize blurHardEdges=_blurHardEdges - In the implementation block
@property (assign,nonatomic) double blurRadius;                             //@synthesize blurRadius=_blurRadius - In the implementation block
+(Class)layerClass;
+(id)_additionAnimationsKeys;
-(void)setBlurRadius:(double)arg1 ;
-(double)blurRadius;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_setGroupName:(id)arg1 ;
-(void)applySettings:(id)arg1 ;
-(id)_groupName;
-(id)backdropLayer;
-(void)_setupfilters;
-(id)statisticsDelegate;
-(void)backdropLayerStatisticsDidChange:(id)arg1 ;
-(void)_updateBackdropScaleWithSettingsDeferredIfNecessary:(id)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(void)setStatisticsDelegate:(id)arg1 ;
-(unsigned long long)blurHardEdges;
-(void)setBlurHardEdges:(unsigned long long)arg1 ;
@end

