/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconViewDelegate;
#import <SpringBoard/SpringBoard-Structs.h>
@class SBIcon, SBIconView, _UILegibilitySettings, NSString;

@interface SBIconLabelImageParametersBuilder : NSObject {

	BOOL _accessibilityIncreaseContrastEnabled;
	BOOL _wantsFocusHighlight;
	int _iconLocation;
	SBIcon* _icon;
	SBIconView* _iconView;
	id<SBIconViewDelegate> _iconViewDelegate;
	Class _iconViewClass;
	_UILegibilitySettings* _settings;
	NSString* _text;

}

@property (nonatomic,readonly) SBIcon * icon;                                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) SBIconView * iconView;                                       //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconViewDelegate> iconViewDelegate;              //@synthesize iconViewDelegate=_iconViewDelegate - In the implementation block
@property (nonatomic,retain) Class iconViewClass;                                         //@synthesize iconViewClass=_iconViewClass - In the implementation block
@property (nonatomic,readonly) int iconLocation;                                          //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * settings;                            //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) BOOL accessibilityIncreaseContrastEnabled;                   //@synthesize accessibilityIncreaseContrastEnabled=_accessibilityIncreaseContrastEnabled - In the implementation block
@property (assign,nonatomic) BOOL wantsFocusHighlight;                                    //@synthesize wantsFocusHighlight=_wantsFocusHighlight - In the implementation block
@property (nonatomic,retain) NSString * text;                                             //@synthesize text=_text - In the implementation block
-(BOOL)accessibilityIncreaseContrastEnabled;
-(BOOL)_canUseMemoryPool;
-(CGSize)_maxSize;
-(id)_focusHighlightColor;
-(void)setIcon:(id)arg1 forLocation:(int)arg2 ;
-(void)setAccessibilityIncreaseContrastEnabled:(BOOL)arg1 ;
-(id)buildParameters;
-(void)setIconViewClass:(Class)arg1 ;
-(void)setIconViewDelegate:(id<SBIconViewDelegate>)arg1 ;
-(void)setWantsFocusHighlight:(BOOL)arg1 ;
-(BOOL)_hasValidInputs;
-(BOOL)_canEllipsizeLabel;
-(BOOL)_canTightenLabel;
-(id<SBIconViewDelegate>)iconViewDelegate;
-(BOOL)wantsFocusHighlight;
-(_UILegibilitySettings *)settings;
-(double)_scale;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)_font;
-(void)setIcon:(SBIcon *)arg1 ;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(SBIcon *)icon;
-(SBIconView *)iconView;
-(void)setIconView:(SBIconView *)arg1 ;
-(int)iconLocation;
-(Class)iconViewClass;
@end

