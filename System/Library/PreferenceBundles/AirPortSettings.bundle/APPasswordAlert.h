/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@class WiFiNetwork, UIAlertView, NSString;

@interface APPasswordAlert : NSObject <UIModalViewDelegate> {

	id _delegate;
	WiFiNetwork* _network;
	UIAlertView* _sheet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)dismiss;
-(void)_configure;
-(id)getNetwork;
-(void)showAlertForNetwork:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isValidPassword;
@end

