/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLCloudProgressFooterView;

@interface PLFooterViewUpdater : NSObject {

	PLCloudProgressFooterView* _footerView;

}

@property (assign,nonatomic) PLCloudProgressFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
-(id)init;
-(void)timerFired:(id)arg1 ;
-(void)startTimer;
-(PLCloudProgressFooterView *)footerView;
-(void)setFooterView:(PLCloudProgressFooterView *)arg1 ;
@end

