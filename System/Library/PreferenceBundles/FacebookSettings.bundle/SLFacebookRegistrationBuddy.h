/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPromptDelegate.h>

@protocol SLFacebookRegistrationBuddyDelegate;
@class SLFacebookRegistrationInfo, NSMutableArray, PSListController, PSSetupController, NSString;

@interface SLFacebookRegistrationBuddy : NSObject <SLFacebookRegistrationInfoPromptDelegate> {

	SLFacebookRegistrationInfo* _registrationInfo;
	NSMutableArray* _registrationInfoPrompts;
	long long _currentPromptIndex;
	PSListController* _presentingViewController;
	PSSetupController* _setupController;
	id<SLFacebookRegistrationBuddyDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alertForError:(int)arg1 ;
-(void)_presentNextPrompt;
-(BOOL)_isCorrectableError:(int)arg1 ;
-(void)registrationInfoPrompt:(id)arg1 didUpdateRegistrationInfo:(id)arg2 ;
-(void)registrationInfoPromptDidCancel:(id)arg1 ;
-(void)_returnToPromptOfClass:(Class)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
@end
