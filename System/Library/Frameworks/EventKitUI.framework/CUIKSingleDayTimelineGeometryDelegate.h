/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>
@property (nonatomic,readonly) CGRect displayedRect; 
@property (nonatomic,readonly) double hourHeight; 
@property (nonatomic,readonly) double topPadding; 
@property (nonatomic,readonly) double timeWidth; 
@property (nonatomic,readonly) BOOL originIsUpperLeft; 
@required
-(CGPoint*)pointForDate:(double)arg1;
-(double)dateForPoint:(CGPoint)arg1;
-(double)hourHeight;
-(double)topPadding;
-(double)timeWidth;
-(CGRect)displayedRect;
-(BOOL)originIsUpperLeft;

@end

