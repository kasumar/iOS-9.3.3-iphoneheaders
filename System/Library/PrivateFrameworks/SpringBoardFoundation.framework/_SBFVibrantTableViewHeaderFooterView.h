/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class _UIBackdropView, UIView, NSString;

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView {

	_UIBackdropView* _backdrop;
	UIView* _plusDView;
	BOOL _wantsPlusDLayer;
	long long _graphicsQuality;
	NSString* _backdropGroupName;

}

@property (assign,nonatomic) long long graphicsQuality;               //@synthesize graphicsQuality=_graphicsQuality - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;              //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) BOOL wantsPlusDLayer;                    //@synthesize wantsPlusDLayer=_wantsPlusDLayer - In the implementation block
+(id)defaultBackgroundColorForGraphicsQuality:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)graphicsQuality;
-(void)setFloating:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setGraphicsQuality:(long long)arg1 ;
-(void)setWantsPlusDLayer:(BOOL)arg1 ;
-(BOOL)wantsPlusDLayer;
-(long long)initialGraphicsQuality;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
@end

