/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIVisualEffectLayerConfig, NSString;

@interface _UIVisualEffectSubview : UIView {

	_UIVisualEffectLayerConfig* _layerConfig;

}

@property (setter=_setGroupName:,nonatomic,copy) NSString * _groupName; 
@property (setter=_setLayerConfig:,nonatomic,retain) _UIVisualEffectLayerConfig * _layerConfig;              //@synthesize layerConfig=_layerConfig - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setGroupName:(id)arg1 ;
-(NSString *)_groupName;
-(void)_setLayerConfig:(id)arg1 ;
-(_UIVisualEffectLayerConfig *)_layerConfig;
@end

