/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIButton.h>

@interface MCActionButton : UIButton {

	int _state;
	CGRect _area;

}
-(void)_layout;
-(id)_titleForConfigState:(int)arg1 ;
-(void)_updateButtonImages:(int)arg1 animate:(BOOL)arg2 ;
-(void)_animationFinished:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(id)initWithConfigState:(int)arg1 ;
-(void)setEnclosingArea:(CGRect)arg1 ;
-(void)_cacheImages;
@end

