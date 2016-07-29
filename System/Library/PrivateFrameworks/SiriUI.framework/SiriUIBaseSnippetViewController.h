/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIAceObjectViewControllerDelegate;
@class AceObject, SAUISnippet, NSString;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController> {

	AceObject* aceObject;
	id<SiriUIAceObjectViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SAUISnippet * snippet; 
@property (assign,nonatomic,__weak) id<SiriUIAceObjectViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AceObject * aceObject; 
-(void)setDelegate:(id<SiriUIAceObjectViewControllerDelegate>)arg1 ;
-(id<SiriUIAceObjectViewControllerDelegate>)delegate;
-(void)setSnippet:(SAUISnippet *)arg1 ;
-(SAUISnippet *)snippet;
-(void)wasAddedToTranscript;
-(AceObject *)aceObject;
-(void)setAceObject:(AceObject *)arg1 ;
-(void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(double)desiredHeight;
@end

