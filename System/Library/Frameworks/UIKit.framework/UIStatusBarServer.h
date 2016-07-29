/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIStatusBarServerClient;
#import <UIKit/UIKit-Structs.h>
@interface UIStatusBarServer : NSObject {

	id<UIStatusBarServerClient> _statusBar;
	CFRunLoopSourceRef _source;

}

@property (nonatomic,retain) id<UIStatusBarServerClient> statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
+(void)runServer;
+(void)addStyleOverrides:(int)arg1 ;
+(void)removeStyleOverrides:(int)arg1 ;
+(void)postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
+(void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2 ;
+(void)addStatusBarItem:(int)arg1 ;
+(void)removeStatusBarItem:(int)arg1 ;
+(double)getGlowAnimationEndTimeForStyle:(long long)arg1 ;
+(unsigned)_serverPort;
+(unsigned)_publisherPort;
+(void)postStatusBarData:(const SCD_Struct_UI77*)arg1 withActions:(int)arg2 ;
+(void)postStatusBarOverrideData:(SCD_Struct_UI78*)arg1 ;
+(void)permanentizeStatusBarOverrideData;
+(const SCD_Struct_UI77*)getStatusBarData;
+(SCD_Struct_UI78*)getStatusBarOverrideData;
+(int)getStyleOverrides;
+(BOOL)getGlowAnimationStateForStyle:(long long)arg1 ;
+(id)getDoubleHeightStatusStringForStyle:(long long)arg1 ;
-(void)dealloc;
-(id<UIStatusBarServerClient>)statusBar;
-(void)setStatusBar:(id<UIStatusBarServerClient>)arg1 ;
-(void)_receivedStatusBarData:(SCD_Struct_UI77*)arg1 actions:(int)arg2 ;
-(void)_receivedStyleOverrides:(int)arg1 ;
-(void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
-(void)_receivedDoubleHeightStatus:(const char*)arg1 forStyle:(long long)arg2 ;
-(id)initWithStatusBar:(id)arg1 ;
@end

