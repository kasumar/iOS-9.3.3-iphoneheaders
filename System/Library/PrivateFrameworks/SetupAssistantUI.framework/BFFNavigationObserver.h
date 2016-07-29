/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UINavigationControllerDelegate;
@interface BFFNavigationObserver : NSObject {

	id<UINavigationControllerDelegate> _observer;

}

@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> observer;              //@synthesize observer=_observer - In the implementation block
+(id)observerWithObserver:(id)arg1 ;
-(id<UINavigationControllerDelegate>)observer;
-(void)setObserver:(id<UINavigationControllerDelegate>)arg1 ;
@end
