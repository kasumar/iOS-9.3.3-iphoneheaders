/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertAction.h>

@interface TPAlertAction : UIAlertAction {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)preferencesURLForClassName:(id)arg1 ;
+(id)actionWithType:(unsigned long long)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end
