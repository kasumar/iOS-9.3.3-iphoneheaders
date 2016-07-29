/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImage;

@interface SBDarkeningImageView : UIImageView {

	UIImage* _baseImage;
	double _brightness;

}

@property (assign,nonatomic) double brightness; 
-(void)setImage:(id)arg1 brightness:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)description;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
@end

