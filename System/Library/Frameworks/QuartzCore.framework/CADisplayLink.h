/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CADisplay;

@interface CADisplayLink : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) CADisplay * display; 
@property (nonatomic,retain) id userInfo; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long frameInterval; 
+(id)naui_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(CADisplay *)display;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)_initWithDisplayLinkItem:(DisplayLinkItem*)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(double)duration;
-(void)invalidate;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setFrameInterval:(long long)arg1 ;
-(long long)frameInterval;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
@end

