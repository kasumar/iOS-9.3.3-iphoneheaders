/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class LSApplicationProxy, NSString, UIDocumentInteractionController;

@interface _UIOpenWithAppActivity : UIActivity {

	LSApplicationProxy* _appProxy;
	BOOL _defaultApp;
	NSString* _activityType;
	UIDocumentInteractionController* _documentInteractionController;

}

@property (assign,nonatomic,__weak) UIDocumentInteractionController * documentInteractionController;              //@synthesize documentInteractionController=_documentInteractionController - In the implementation block
@property (assign,getter=isDefaultApp,nonatomic) BOOL defaultApp;                                                 //@synthesize defaultApp=_defaultApp - In the implementation block
+(long long)activityCategory;
-(id)activityType;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)setDocumentInteractionController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)documentInteractionController;
-(BOOL)_shouldOpenInPlace;
-(id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2 ;
-(BOOL)isDefaultApp;
-(void)setDefaultApp:(BOOL)arg1 ;
@end

