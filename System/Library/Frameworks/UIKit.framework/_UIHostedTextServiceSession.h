/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextServiceSession.h>

@protocol _UIHostedTextServiceSessionDelegate;
@interface _UIHostedTextServiceSession : _UITextServiceSession {

	id<_UIHostedTextServiceSessionDelegate> _delegate;

}

@property (assign,nonatomic) id<_UIHostedTextServiceSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(void)setDelegate:(id<_UIHostedTextServiceSessionDelegate>)arg1 ;
-(id<_UIHostedTextServiceSessionDelegate>)delegate;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
-(void)remoteSessionDidDismiss;
@end

