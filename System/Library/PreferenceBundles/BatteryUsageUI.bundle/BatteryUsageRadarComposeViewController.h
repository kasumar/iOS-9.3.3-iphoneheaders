/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIViewController, NSDictionary, NSString;

@interface BatteryUsageRadarComposeViewController : NSObject <UIAlertViewDelegate> {

	UIViewController* _parentViewController;
	NSDictionary* _currentDictionary;

}

@property (nonatomic,retain) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * currentDictionary;                     //@synthesize currentDictionary=_currentDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasRadarCompose;
-(id)initWithParentView:(id)arg1 andDictionary:(id)arg2 ;
-(void)setCurrentDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)currentDictionary;
-(void)showRadarComposeAlert;
-(id)urlEncodedString:(id)arg1 ;
-(UIViewController *)parentViewController;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
@end

