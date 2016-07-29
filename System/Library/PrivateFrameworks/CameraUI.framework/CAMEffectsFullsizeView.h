/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMGLView.h>

@class CIFilter;

@interface CAMEffectsFullsizeView : CAMGLView {

	CIFilter* _selectedFilter;
	long long _selectedFilterType;
	long long _filterType;

}

@property (assign) long long filterType;              //@synthesize filterType=_filterType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)renderPixelBuffer:(CVBufferRef)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(void)_layoutGLLayer;
-(void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(id)_updateSelectedFilter;
@end

