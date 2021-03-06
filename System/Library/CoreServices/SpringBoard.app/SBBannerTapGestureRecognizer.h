/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITapGestureRecognizer.h>

@interface SBBannerTapGestureRecognizer : UITapGestureRecognizer {

	/*^block*/id _touchesBeganBlock;
	/*^block*/id _touchesEndedBlock;

}

@property (nonatomic,copy) id touchesBeganBlock;              //@synthesize touchesBeganBlock=_touchesBeganBlock - In the implementation block
@property (nonatomic,copy) id touchesEndedBlock;              //@synthesize touchesEndedBlock=_touchesEndedBlock - In the implementation block
-(void)setTouchesBeganBlock:(id)arg1 ;
-(void)setTouchesEndedBlock:(id)arg1 ;
-(id)touchesBeganBlock;
-(id)touchesEndedBlock;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

