/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class UIPageControl;

@interface _OFPageViewControllerContentView : OFUIView {

	UIPageControl* _pageControl;

}

@property (nonatomic,readonly) UIPageControl * pageControl;              //@synthesize pageControl=_pageControl - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)_setupPageControl:(id)arg1 ;
-(void)invalidatePageViewController;
-(UIPageControl *)pageControl;
@end

