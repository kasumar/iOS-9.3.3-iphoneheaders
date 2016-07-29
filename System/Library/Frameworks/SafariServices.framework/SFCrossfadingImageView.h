/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImage;

@interface SFCrossfadingImageView : UIView {

	UIImage* _fromImage;
	UIImage* _toImage;
	double _progress;

}

@property (nonatomic,retain) UIImage * fromImage;              //@synthesize fromImage=_fromImage - In the implementation block
@property (nonatomic,retain) UIImage * toImage;                //@synthesize toImage=_toImage - In the implementation block
@property (assign,nonatomic) double progress;                  //@synthesize progress=_progress - In the implementation block
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(UIImage *)fromImage;
-(UIImage *)toImage;
-(void)setFromImage:(UIImage *)arg1 ;
-(void)setToImage:(UIImage *)arg1 ;
-(void)_updateCrossfade;
@end

