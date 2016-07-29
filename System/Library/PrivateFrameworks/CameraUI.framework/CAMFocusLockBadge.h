/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMBadgeTextView.h>

@interface CAMFocusLockBadge : CAMBadgeTextView {

	BOOL _focusLocked;
	BOOL _exposureLocked;

}

@property (assign,getter=isFocusLocked,nonatomic) BOOL focusLocked;                    //@synthesize focusLocked=_focusLocked - In the implementation block
@property (assign,getter=isExposureLocked,nonatomic) BOOL exposureLocked;              //@synthesize exposureLocked=_exposureLocked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)_cornerRadius;
-(id)_text;
-(id)_textAttributes;
-(void)_commonCAMFocusLockBadgeInitialization;
-(void)_updateFromHardwareChange;
-(void)setFocusLocked:(BOOL)arg1 ;
-(void)setExposureLocked:(BOOL)arg1 ;
-(UIEdgeInsets)_textInsets;
-(BOOL)isFocusLocked;
-(BOOL)isExposureLocked;
@end
