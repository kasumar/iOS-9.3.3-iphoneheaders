/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface WFWiFiIsEnterpriseAlert : SBAlertItem {

	id _delegate;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss:(int)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end

