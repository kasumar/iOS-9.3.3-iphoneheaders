/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZWTouchTrapViewDelegate <NSObject>
@required
-(BOOL)touchTrapView:(id)arg1 shouldReportSelfInHitTestAtLocation:(CGPoint)arg2;
-(void)touchTrapView:(id)arg1 didTrapTouches:(id)arg2 withEvent:(id)arg3;
-(void)touchTrapViewActivated:(id)arg1;

@end

