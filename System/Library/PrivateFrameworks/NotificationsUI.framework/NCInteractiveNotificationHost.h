/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NCViewServiceDescriptor;


@protocol NCInteractiveNotificationHost <NSObject>
@property (assign,nonatomic) id<NCInteractiveNotificationHostDelegate> delegate; 
@property (nonatomic,readonly) BOOL showsKeyboard; 
@property (nonatomic,readonly) double bottomOverhangHeight; 
@property (assign,getter=isModal,nonatomic) BOOL modal; 
@property (assign,nonatomic) double maximumHeight; 
@property (nonatomic,retain,readonly) NCViewServiceDescriptor * inlayViewService; 
@property (nonatomic,retain,readonly) NCViewServiceDescriptor * accessoryViewService; 
@optional
-(void)disconnect;

@required
-(void)setDelegate:(id)arg1;
-(id<NCInteractiveNotificationHostDelegate>)delegate;
-(BOOL)showsKeyboard;
-(double)bottomOverhangHeight;
-(NCViewServiceDescriptor *)inlayViewService;
-(NCViewServiceDescriptor *)accessoryViewService;
-(void)interactiveNotificationDidAppear;
-(void)didChangeRevealPercent:(double)arg1;
-(void)handleActionIdentifier:(id)arg1;
-(void)willPresentFromActionIdentifier:(id)arg1;
-(void)getActionContextWithCompletion:(/*^block*/id)arg1;
-(BOOL)isModal;
-(void)setModal:(BOOL)arg1;
-(void)setMaximumHeight:(double)arg1;
-(double)maximumHeight;
-(void)handleActionAtIndex:(long long)arg1;

@end

