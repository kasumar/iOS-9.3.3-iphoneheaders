/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetNode.h>

@class SCNCone;

@interface OKWidgetConeNode : OKWidgetNode {

	SCNCone* _cone;

}
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(long long)settingRadialSegmentCount;
-(void)setSettingRadialSegmentCount:(long long)arg1 ;
-(long long)settingHeightSegmentCount;
-(void)setSettingHeightSegmentCount:(long long)arg1 ;
-(double)settingHeight;
-(void)setSettingHeight:(double)arg1 ;
-(double)settingTopRadius;
-(void)setSettingTopRadius:(double)arg1 ;
-(double)settingBottomRadius;
-(void)setSettingBottomRadius:(double)arg1 ;
@end
